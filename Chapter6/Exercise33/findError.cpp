//const int LEN = 32;
//struct Foo
//{
//	char* ding;
//	char* dong;
//};
//
//char* f1(void)
//{
//	char carray[LEN];
//	carray[0] = 'a';
//	return carray;
//}
//
//char* f2(void)
//{
//	char* cp;
//	int i = LEN;
//	cp = new char[i];
//	while (i) cp[i--] = '\0';
//	return cp;
//}
//
//char* f3()
//{
//	return new char[1024];
//}
//
//int main(void)
//{
//	char* cp1;
//	char* cp2;
//	char* cp3;
//	Foo* f;
//	f = new Foo();
//	f->ding = new char[128];
//	f->dong = new char[128];
//	cp1 = f1();
//	cp1[0] = 0x01;
//	cp2 = f2();
//	cp3 = f3();
//	cp3 = nullptr;
//	delete f;
//	delete[] cp3;
//	return 0;
//}