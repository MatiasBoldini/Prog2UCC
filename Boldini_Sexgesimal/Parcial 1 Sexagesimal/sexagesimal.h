class sexagesimal{
    private:
        int angulo;
        int minuto;
        int segundo;
    public:
        sexagesimal();
        
    void setAngulo(int);
    int getAngulo();

    void setMinuto(int);
    int getMinuto();

    void setSegundo(int);
    int getSegundo();

    int reset(sexagesimal);
    
    void operator ++();
};