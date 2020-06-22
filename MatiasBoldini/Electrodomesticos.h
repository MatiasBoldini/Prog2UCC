class Electrodomesticos{
    private:
        long precioBase;
        char color[10];
        char consumoEner;
        int peso;

    public:
        Electrodomesticos();
        Electrodomesticos(long, int);
        Electrodomesticos(long, char*, char,int);

    void setPrecio(long);
    long getPrecio();

    void setColor(char*);
    char getColor();

    void setConsumoEner(char);
    char getConsumoEner();

    void setPeso(int);
    int getPeso();

    long precioFinal();

};