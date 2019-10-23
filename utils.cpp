
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <regex>
#include <cmath>
#include <sstream>
#include <sys/stat.h>
#include <unistd.h>
#include <fstream>
#include "constants.hpp"
#include "utils.hpp"

using namespace jsondef;

std::string Utils::GetStdOutFromCmd(std::string cmd) {

    std::string data;
    FILE *stream;
    const int max_buffer = 512;
    char buffer[max_buffer];
    cmd.append(" 2>&1");

    /* open pipe for read only */
    stream = popen(cmd.c_str(), "r");
    if (stream) {
        while (!std::feof(stream)) {
            if (std::fgets(buffer, max_buffer, stream) != NULL)
                data.append(buffer);
        }
        pclose(stream);
    }
    return data;
}

bool Utils::getStringFromHex(const std::string &hex, std::string &output) {

    std::string temp;
    char c;

    if (hex.length() % 2 != 0) {
        std::cout << "Err: hex string should have even chars" << std::endl;
        return false;
    }

    for(unsigned int i = 0; i < hex.length(); i+=2) {
        temp = hex.substr(i, 2);
        c = static_cast<char>(std::stoi(temp, nullptr, 16));
        output.push_back(c);
    }
    return true;
}

int Utils::calc_mismatch_chars(const string &a, const string &b) {

    int mismatch = 0;
    /* has to be same size */
    if (a.size() != b.size()) return -1;
    for(unsigned int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) mismatch++;
    }
    return mismatch;
}


std::string Utils::get_random_string(int numchars) {
    
    std::string rnd_str {};
    Utils::RandInt rnd {0, 26};

    rnd();
    for(int i = 0; i < numchars; i++) {
        char ch = 'a' + rnd() % 26;
        rnd_str.push_back(ch);
    }
    return rnd_str;
}

int Utils::get_random_int(int min, int max) {
    
    Utils::RandInt rnd {min, max};
    rnd(); 
    return rnd();
}

uint32_t Utils::get_bitmask(uint32_t numbits) {

    uint32_t bitmask = 0;

    for(uint32_t i = 0; i < numbits; i++) {
        bitmask |= (1 << i);
    }
    return bitmask;
}

void Utils::to_lower(string &str) {
    transform(str.begin(), str.end(), str.begin(),
        [] (unsigned char c) { return std::tolower(c); });
}

bool Utils::find_idx(const string &input, const string &start_delim,
            const string &end_delim, std::pair<int, int> &indices) {

    unsigned int start_idx = input.find(start_delim);
    unsigned int end_idx = input.find(end_delim);                             

    if (start_idx == string::npos) {
        cout << string(__func__) << " cannot find starting delim\n";
        return false;
    }

    if (end_idx == string::npos) {
        cout << string(__func__) << " cannot find ending delim\n";
        return false;
    }

    indices.first = start_idx;
    indices.second = end_idx;
    return true;
}

bool Utils::double_modulo(double dividend, double divisor, double min) {
    return fmod(dividend, divisor) < min;
}

int Utils::fp_string(double number, unsigned int dec_num) {

    double fracpart, intpart;
    stringstream ss;
    fracpart = abs(number); //only handle positive decimals
    for(unsigned int i = 0; i < dec_num; i++) {
        fracpart *= 2;
        fracpart = modf(fracpart, &intpart);
        ss << intpart;
        fracpart = modf(fracpart, &intpart);
    }
    return stoi(ss.str(), nullptr, 2);
}

bool Utils::file_exists(const string &filepath) {
    if (FILE *file = fopen(filepath.c_str(), "r")) {
        fclose(file);
        return true;
    }
    return false;
}

