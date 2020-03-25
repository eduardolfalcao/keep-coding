## Lists
List é um tipo de contêiner sequêncial que trabalha com operações de inserção e exclusão de elementos em qualquer posição do contêiner, e é implementada como uma lista duplamente encadeada. Ele suporta iteradores de acesso bidirecional, o que permite percorrer uma lista para frente ou para trás. Para tanto, são necessários iteradores.
As Lists podem ser de tipos de dados primitivos(inteiros, strings, pontos flutuante), bem como classes.

Para usar os recursos desta classe, basta inserir o seguinte trecho no cabecalho do código.
```c++
 #include <list>
```

Para criar uma lista usa-se
```c++
 std::list<tipo_do_objeto> nome_do_objeto
```

As principais operações utilizadas nas lists são :
- push_back(elemento)
- push_front(elemento)
- pop_back()
- pop_front()
- insert(posição, elemento)
- erase(posição)
- remove(elemento)
- find(inicio, fim, elemento)
- unique()
- sort()
- clear()
- empty()
- size()
- begin() 
- end() 

