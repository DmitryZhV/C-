#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <iostream>


struct String {
        String(const char *str = "");
        String(size_t n, char c);
        ~String();


    /* Реализуйте конструктор копирования */
        String(const String &other)
		: size(other.size), str(new char[size])
        {
		for(size_t i=0; i!=size; ++i)
			str[i]=other.str[i];
             

        }

        void append(const String &other);

        size_t size;
        char *str;
};

    /* Реализуйте этот конструктор */
String::String(const char *str)
    {
          if(str!="")
                {
                  this->size=strlen(str);
                  this->str=new char [(this->size+1)];
                  for(size_t i = 0; i <= size; ++i)
                        this->str[i] = str[i];
                }
    }

String::String(size_t n, char c)
        {

                  this->size=(n);

                  this->str=new char [(this->size+1)];
                  for(size_t i=0;i<this->size;++i)
                          this->str[i]=c;
                  this->str[(this->size)]=0;
        }

    /* и деструктор */
String::~String()
        {
                delete [] str;
        }

void String::append(const String &other)
    {
         char * p=new char [(size+other.size+1)];
          size_t i=0;
          for(;i<size;++i)
                  p[i]=str[i];
          for(size_t y=0;y<other.size;++i)
          {
                 p[i]=other.str[y];
                  ++y;
          }
           p[other.size+size]=0;
          delete [] str;
          str=p;
          size+=other.size;
     }



struct Foo {
    void say() const { std::cout << "Foo says: " << msg << "\n"; }
protected:
    Foo(const char *msg) : msg(msg) { }
private:
    const char *msg;
};

 void foo_says(const Foo &foo) { foo.say(); }


 struct Foose : public Foo
{
	Foose(const char*msg) : Foo(msg) {}
};

Foo get_foo(const char *msg)
{
	return Foose(msg);
}


int main()
{
  const char *ch="String"; 
  //void foo_says(const Foo &foo) { foo.say(); }
  foo_says(get_foo("Hello!"));
  // Foo a( *ch);
  //a.say; 


}

