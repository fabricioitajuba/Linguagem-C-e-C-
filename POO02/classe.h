#ifndef classe_h_
#define classe_h_

class Cidade{
    public:
        Cidade(int _ano);
        int getAno();

    private:
        int ano;
};

Cidade::Cidade(int _ano){
    ano = _ano;
}

int Cidade::getAno(){
    return ano;
}

#endif