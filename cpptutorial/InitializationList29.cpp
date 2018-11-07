class A0{
    public:
        A0(){
            a0=2; a1=3;
        }
        A0(int x0,int x1){
            a0=x0;a1=x1;
        }
    protected:
        int a0,a1;
};
class A1{
    public:
        A1(): a0(2),a1(3){}
        A1(int x0,int x1): a0(x0),a1(x1){}
    protected:
        int a0,a1;
};
