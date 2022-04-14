class some_class
{
    private:
        int x;
        int y;
    public:
        some_class(){}
        some_class(int a, int b): x{a}, y{b}{}
        ~some_class(){}
        int get_x(){return x;}
        int get_y(){return y;}
        void set_x(int a){x=a;}
        void set_y(int b){y=b;}
        int get_sum();
};

