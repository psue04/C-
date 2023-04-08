class Planet {
    public:
        Planet (float gravity);
        float drop (float height);
    protected:
        //define
};

class Earth:public Planet {
    public:
        Earth();
        void simulate (float, height);
};

class Moon: public Planet {
    public:
        Moon();
        void simulate (float height);
};