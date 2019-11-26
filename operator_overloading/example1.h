
#ifndef POINT_H
#define POINT_H
class Point {
    private:
        int x, y;
    public:
        Point(int x = 0, int y = 0);
        int getX() const;
        int getY() const;
        void setX (int x);
        void setY (int y);
        void print() const;

        const Point operator+(const Point & rhs) const;

        friend std::ostream & operator<<(std::ostream & out, const Point & point);
        friend std::istream & operator>>(std::istream & in, Point & point);
};


#endif