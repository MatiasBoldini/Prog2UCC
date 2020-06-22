class Atleta{
    protected:
        char* nomape;
        char* nacionalidad;
        int numero;
        float tiempo;
    public:
        Atleta();
        Atleta(char*,char*,int,float);
        void setNomape(char*);
        char* getNomape();
        void setNacionalidad(char*);
        char* getNacionalidad();
        void setNumero(int);
        int getNumero();
        void setTiempo(float);
        float getTiempo();
};