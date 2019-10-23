/* This header contains a bunch of useful files to be used through out the code */

#pragma once

#include <string>
#include <random>
#include <chrono>
#include <thread>
#include <algorithm>
#include <cctype>
#include <boost/filesystem.hpp>

using namespace std;

namespace Utils {
   
    class RandInt {
        private:
            default_random_engine re;
            uniform_int_distribution<> dist;
        public:
            RandInt(int low, int high): re((unsigned int) time(0)), 
                                        dist {low, high} { }
            int operator()() { return dist(re); }
    };

    class StopWatch {
        private:
            chrono::time_point<chrono::system_clock> startTime; 
            int timeout; /* duration given for time out in milliseconds */
        public:
            StopWatch() : startTime(), timeout(0) {}

            inline void start(int timeout = 0) {
                this->timeout = timeout;
                this->startTime = chrono::system_clock::now();
            }

            inline int elapsedMilliseconds() {
                auto cur = chrono::system_clock::now();
                return chrono::duration_cast<chrono::milliseconds>(cur - startTime).count();
            }

            inline bool timedOut() {
                return (elapsedMilliseconds() > timeout);
            }
    };

    /* yield the current thread, by sleeping for 1 miliseconds */
    inline void yield(int ms = 1) { 
        this_thread::sleep_for(chrono::milliseconds(ms)); 
    }

    /* runs a system command and returns output from cmd
     * or empty string if error encountered or no output */
    string GetStdOutFromCmd(string cmd);

    string get_random_string(int numchars); 

    int get_random_int(int min, int max);

    /* get's the ascii representation of a series of hex values */
    bool getStringFromHex(const string &hex, string &output);

    /* compares 2 string and outputs number of mismatched chars*/
    int calc_mismatch_chars(const string &a, const string &b);
    
    /* count number of set bits */
    template <typename T>
    constexpr int count_bits(T t) {
        int bits = 0;
        for(unsigned int i = 0; i < sizeof(t) * 8; i++) {
            if (t & 1) bits++;
            t >>= 1;
        }
        return bits;
    }

    /* gets the position of the set bit*/
    template <typename T>
    constexpr int get_setbit_pos(T t) {
        int pos = 0;
        while(!(t & 1)) {
            t >>= 1;
            pos++;
        }
        return pos;
    }

    template <typename T>
    constexpr T get_ave(const vector<T> &v) {
        T sum = 0;
        for(T t : v) sum += t;
        return sum / v.size(); 
    }

    uint32_t get_bitmask(uint32_t numbits);

    void to_lower(string &str);

    bool find_idx(const string &input, const string &start_delim,
                const string &end_delim, pair<int, int> &indices);

    /* returns true if remainder from fmod is less that min */
    bool double_modulo(double dividend, double divisor, double min);

    /* gets binary representation from fractional part of a double given number of decimals */
    int fp_string(double number, unsigned int dec_num); 

    /* returns true if file exists and false otherwise */
    bool file_exists(const string &filepath);
}

