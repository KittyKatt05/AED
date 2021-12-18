#include "Voo.h"

using namespace std;

/**
 * Cria um objeto do tipo Voo com os atributos passados por parâmetro.
 * @param numVoo
 * @param date
 * @param duracao
 * @param origem
 * @param destino
 * @param passageiro
 * @param partida
 */
Voo::Voo(string numVoo,Data date, string duracao, string origem, string destino ,Passageiro passageiro,Hora partida) {
    this -> numVoo = numVoo;
    this -> duracao = duracao;
    this -> origem = origem;
    this -> destino = destino;
    this->partida = partida;
}

/**
 * Permite aceder ao número do Voo.
 * @return numVoo
 */
string Voo::getNumVoo() {
    return this-> numVoo;
}

/**
 * Permite aceder à data do Voo.
 * @return data
 */
string Voo::getData() {
    return this->data.toString();
}

/**
 * Permite aceder à partida do Voo.
 * @return partida
 */
string Voo::getPartida() {
    return this->partida.toString();
}

/**
 * Permite aceder à duração do Voo.
 * @return duracao
 */
string Voo::getDuracao() {
    return this-> duracao;
}

/**
 * Permite aceder à origem do Voo.
 * @return origem
 */
string Voo::getOrigem() {
    return this-> origem;
}

/**
 * Permite aceder ao destino do Voo.
 * @return destino
 */
string Voo::getDestino() {
    return this-> destino;
}

/**
 * Permite modificar a data do Voo.
 * @param data
 */
void Voo::setData(Data data) {
    this->data = data;
}

/**
 * Permite modificar a hora de partida do Voo.
 * @param hora1
 */
void Voo::setPartida(Hora hora1) {
    this->partida = hora1;
}

/**
 * Permite aceder à lista de passageiro do voo.
 * @return passageiro
 */
list<Passageiro> Voo::getPassageiro() {
    return this-> passageiro;
}

/**
 * Permite modificar o número do Voo.
 * @param numVoo
 */
void Voo::setNumVoo(string numVoo) {
    this-> numVoo = numVoo;
}

/**
 * Permite modificar a duração do Voo.
 * @param duracao
 */
void Voo::setDuracao(string duracao) {
    this-> duracao = duracao;
}

/**
 * Permite modificar a origem do Voo.
 * @param origem
 */
void Voo::setOrigem(string origem) {
    this-> origem = origem;
}

/**
 * Permite modificar o destino do Voo.
 * @param destino
 */
void Voo::setDestino(string destino) {
    this-> destino = destino;
}

/**
 * Permite modificar a lista de passageiros com uma nova lista passado por paramêtro.
 * @param passageiro
 */
void Voo::setPassageiro(list<Passageiro> passageiro) {
    this-> passageiro = passageiro;
}

/**
 * Adiciona à lista de passageiros um novo passageiro que é passado por parâmetro.
 * @param passageiro1
 */
void Voo::addPassageirotoLista(Passageiro passageiro1) {
    passageiro.push_back(passageiro1);
}

//-----------------------------Tapete Rolante---------------------------------------------------------------------------
/**
 * Permite aceder ao conteúdo da queue tapeteRolante. Esta queue representa todas as bagagens dos passageiros que pretendem
 * checkin automático.
 * @return tapeteRolante
 */
queue<Bagagem> Voo::getTapeteRolante() {
    return tapeteRolante;
}

/**
 * Adiciona à queue tapeteRolante uma nova bagagem.
 * @param bagagem
 */
void Voo::addToTapeteRolante(Bagagem bagagem) {
    tapeteRolante.push(bagagem);
}

/**
 * Permite modificar a queue tapeteRolante, sendo esta substituida pela queue passado por parâmetro.
 * @param tapeteRolante1
 */
void Voo::setTapeteRolante(queue<Bagagem> tapeteRolante1) {
    this->tapeteRolante = tapeteRolante1;
}

/**
 * Remove do tapete rolante a primeira bagagem.
 */
void Voo::removeFromTapeteRolante() {
    tapeteRolante.pop();
}

/**
 * Este método cria uma queue, o tapete rolante.
 * Primeiro é criado um iterador que vai percorrer a lista de passageiros existentes de um determinado voo.
 * Enquanto o iterador não chegar ao fim da lista passageiros, vai percorrer cada elemento e verificar se o atributo booleano checkinAuto
 * é verdadeiro ou false. Este atributo informa se o passageiro quer checkin automático ou não, isto é, se for verdadeiro pretende checkin
 * automático, se for falso não pretendo checkin automático, não sendo inserido no tapete rolante. Se for afirmativo, através do iterador
 * vamos buscar a bagagem do passageiro para o qual o iterador está a apontar e adicionamos à queue tapete rolante.
 * Por fim incrementa-se o iterador para ser possível percorrer a lista de passageiros toda.
 */
void Voo::createTapeteRolante() {
    auto it = passageiro.begin();
    while(it != passageiro.end()){
        if(it->checkinAuto){
            addToTapeteRolante((*it).getBagagem());
        }
        it++;
    }
}

//---------------------------------Stacks da Carruagem------------------------------------------------------------------

/**
 * Permite aceder ao conteudo da stack pilhaCarruagem. Esta stack é composta por bagagens e vai preencher posteriormente as carruagens.
 * @return pilhaCarruagem
 */
stack<Bagagem> Voo::getPilhaCarruagem() {
    return pilhaCarruagem;
}

/**
 * Permite modificar a stack pilhaCarruagem, passando por parametro uma nova stack que vai substituir o conteudo que a stack
 * pilhaCarruagem possuia.
 * @param pilhaCarruagem
 */
void Voo::setPilhaCarruagem(stack<Bagagem> pilhaCarruagem) {
    this->pilhaCarruagem = pilhaCarruagem;
}

/**
 * Adiciona uma bagagem à stack pilhaCarruagem.
 * @param bagagem
 */
void Voo::addToPilha(Bagagem bagagem) {
    pilhaCarruagem.push(bagagem);
}

/**
 * Remove uma bagagem da stack pilhaCarruagem. A bagagem superior é sempre a primeira a ser removida.
 */
void Voo::removeFromPilha() {
    pilhaCarruagem.pop();
}

/**
 * Limpa a stack. Enquanto tiver bagagens, vai removendo.
 */
void Voo::clearPilha(){
    while(!pilhaCarruagem.empty()){
        pilhaCarruagem.pop();
    }
}

/**
 * Este método cria uma stack.
 * De inicio limpa a stack pilhaCarruagem, que é para ser possivel acrescentar mais que uma stack a carruagens, pois sempre que esta
 * atinge lotação máxima, é adicionada à carruagem, e caso ainda haja bagagens, pode-se criar uma nova stack para essas mesmas bagagens
 * e posteriormente adicionar também a uma carruagem.
 * Enquanto o tamanho da stack (número de bagagens que possui) foi menor que o máximo imposto por stack, adicionam-se as bagagens do tapete rolante
 * e removem-se essas mesmas bagagens do taptete rolante.
 */
void Voo::createPilha() {
    clearPilha();
    while(pilhaCarruagem.size()< maxPorPilha){
        addToPilha(tapeteRolante.front());
        removeFromTapeteRolante();
    }
}

/**
 * Com este método é possível aceder ao conteúdo de carruagem.
 * @return carruagem
 */
list<stack<Bagagem>> Voo::getCarruagem() {
    return carruagem;
}

/**
 * Limpa a carruagem toda, deixando-a vazia.
 */
void Voo::clearCarruagem() {
    carruagem.clear();
}

/**
 * Adiciona a carruagem uma stack de bagagens.
 * @param stackBagagem
 */
void Voo::addToCarruagem(stack<Bagagem> stackBagagem) {
    carruagem.push_back(stackBagagem);
}

/**
 * Este método cria uma carruagem.
 * De inicio limpa a lista carruagem, que é para ser possivel acrescentar mais que uma carruagem ao carrinho, pois sempre que esta
 * atinge lotação máxima, é adicionada ao carrinho, e caso ainda haja bagagens, pode-se criar uma nova carruagem para essas mesmas bagagens
 * e posteriormente adicionar também ao carrinho.
 * Enquanto o tamanho da carruagem (número de stacks que possui) foi menor que o máximo imposto por carruagem, cria-se uma nova stack de malas
 * e adiciona-se à carruagem a ser criada.
 */
void Voo::createCarruagem() {
    clearCarruagem();
    while(carruagem.size() < maxPorCarruagem){
        createPilha();
        addToCarruagem(pilhaCarruagem);
    }
}

/**
 * Adiciona uma lista de stacks de bagagens ao carrinho. Essa lista de stacks é uma carruagem.
 * @param carruagemS
 */
void Voo::addToCarrinho(list<stack<Bagagem>> carruagemS) {
    carrinho.push_back(carruagemS);
}

/**
 * Este método cria um carrinho, que é um conjunto de carruagens, onde são transportadas as malas que vêm do tapete rolante
 * e vão para o avião.
 * Enquanto o tapete rolante não estiver vazio, isto é, enquanto tiver bagagens, é criada uma carruagem e adicionada ao carrinho.
 */
void Voo::createCarrinho(){
    while(!tapeteRolante.empty()){
        createCarruagem();
        addToCarrinho(carruagem);
    }
}

//----------------------------------------------------Bagagens para aviao-----------------------------------------------

/**
 * Com este método é possivel aceder ao conteudo de bagagemAviao.
 * A stack bagagemAviao representa uma stack que guarda as malas dos passageiros que desejaram fazer check in automático
 * no avião do respetivo voo.
 * @return bagagemAviao
 */
stack<Bagagem> Voo::getStackAviao() {
    return bagagemAviao;
}

/**
 * Este método cria uma stack a representar a stackAviao.
 * Tem um iterador que percorre a lista carrinho, para poder passar as bagagens dessa lista para o avião. Quando chega ao fim
 * termina o ciclo, o que quer dizer que as bagagens estão já todas na bagagemAviao. Em cada ciclo, o iterador aponta para a bagagem
 * a adicionar, começando pelo inicio da lista e percorrendo cada stack que pertença a essa lista. Sai sempre a bagagem superior.
 * Depois, remove-se a bagagem já adicionada a bagagemAviao do carrinho, pois essa bagagem já foi tranferida. Aumenta-se o iterador
 * para ser possivel percorrer a lista toda e chegar a todas as bagagens.
 */
void Voo::createStackAviao() {
    auto it = carrinho.begin();
    while(it != carrinho.end()){
        addStackAviao(it->front().top());
        it = --carrinho.erase(it);
        it++;
    }
}

/**
 * Adiciona à stack bagagemAviao uma bagagem que é passada por parâmetro.
 * @param bagagem
 */
void Voo::addStackAviao(Bagagem bagagem) {
    bagagemAviao.push(bagagem);
}

/**
 * Remove cada bagagem que esteja na stack bagagemAviao.
 */
void Voo::removeStackAviao() {
    bagagemAviao.pop();
}