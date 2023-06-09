/*int sum_lista(int tam, int (*ptr)(int,int), int *vet ){
    int s = 0;

    for (int i = 0 ; i < tam ; i++){
        s+=  ptr(s,vet[i]);
    }

    return s;
}

  int v[10];
    for (int i = 0 ; i < 10 ; i++){
        v[i] = i*2;
    }
    int s1 = sum_lista(10,ptr,v);

    cout << "S: "<<s1<< endl;


    int soma (int a , int b){
    return a+b;
}
int mult (int a , int b){
    return a*b;
}

/*
int main (){
    
    std::queue<int> minhaLista;

    minhaLista.push_back(10);
    minhaLista.push_back(20);
    minhaLista.push_back(30);

    for (const auto& elemento : minhaLista){
        std::cout<< elemento << " ";

    }

    std::cout << std::endl;

    auto it = minhaLista.begin();
    std::advance(it,1);
    minhaLista.insert(it, 15);

    it = minhaLista.begin();
    std::advance(it,2);
    minhaLista.erase(it);

    
    for (const auto& elemento : minhaLista){
        std::cout<< elemento << " ";

    }
    std::cout << std::endl;
    return 0;
}

    minhaLista.push(10);
    minhaLista.push(20);    minhaLista.push(30);

    cout << "Firt: "<< minhaLista.front()<<endl;

    minhaLista.pop();

    cout << "Firt: "<< minhaLista.front()<<endl;

    if (minhaLista.empty()){
        cout << "fila vazia";
    }else{
        cout << "fila não vazia";
    }
    minhaLista.push(40);
    
    cout <<"\ntam: "<< minhaLista.size()<<endl;


*/
