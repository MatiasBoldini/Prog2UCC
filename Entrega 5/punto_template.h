template <class T>
class punto{
    private:
        T cx;
        T cy;
    public:
        punto();
        punto(T, T);
        void setX(T);
        T getX();
        void setY(T);
        T getY();
        void operator++();
        void operator--();
        punto operator+(punto);
        punto operator+(T);
        punto operator-(punto);
        punto operator-(T);
        T angulo();
        T modulo();
};