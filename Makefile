all : main.o LinkedList/LinkedList.o LinkedStack/LinkedStack.o ChainNode/ChainNode.o
	g++ main.o LinkedList/LinkedList.o LinkedStack/LinkedStack.o ChainNode/ChainNode.o -o LinkedMe

main.o : main.cpp
	g++ -c main.cpp -o main.o

LinkedList/LinkedList.o : LinkedList/LinkedList.cpp
	g++ -c LinkedList/LinkedList.cpp -o LinkedList/LinkedList.o

LinkedStack/LinkedStack.o : LinkedStack/LinkedStack.cpp
	g++ -c LinkedStack/LinkedStack.cpp -o LinkedStack/LinkedStack.o

ChainNode/ChainNode.o : ChainNode/ChainNode.cpp
	g++ -c ChainNode/ChainNode.cpp -o ChainNode/ChainNode.o

clean :
	rm -f *.o LinkedList/LinkedList.o LinkedStack/LinkedStack.o ChainNode/ChainNode.o LinkedMe
