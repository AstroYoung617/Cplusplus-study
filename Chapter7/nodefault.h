#ifndef NODEFAULT_H
#define NODEFAULT_H

class NoDefault {
public:
	NoDefault(int i){}
};
class C {
public:
	C():def(0) {}
private:
	NoDefault def;
};

#endif // !NODEFAULT
