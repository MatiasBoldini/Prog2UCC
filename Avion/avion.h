class Avion{
    protected:
        char* patente;
        int carga;
    public:
        Avion();
        Avion(char*,int);
        void setPatente(char*);
        char* getPatente();
        void setCarga(int);
        int getCarga();
};