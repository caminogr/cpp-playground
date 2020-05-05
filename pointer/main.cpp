// Reference http://uhiaha888.hatenablog.com/entry/20120901/1346479685

#include <iostream>

#include <map>
#include <math.h>




class Hoge {
public:
  Hoge(){}
  ~Hoge(){
    std::cout << "Hogeのデストラクタ" << std::endl;
  }
  int number_;
};

// hoge1, hoge2: pointer
int main(int argc, char* argv[])
{
  {
    std::shared_ptr<Hoge> hoge1(new Hoge); // 初期化
    std::cout << "hoge1 : " << hoge1 << std::endl;

    // -> でpointerからクラスメンバにアクセス
    hoge1->number_ = 30;
    {
      std::shared_ptr<Hoge> hoge2 = hoge1;

      std::cout << "hoge1->number_ : " << hoge1->number_ << std::endl;
      std::cout << "hoge2->number_ : " << hoge2->number_ << std::endl;
      std::cout << "hoge2 : " << hoge2 << std::endl;

    } // ここでhoge2はスコープから抜けるけどhoge1はまだ生きてる
    std::cout << "hoge1->number_ : " << hoge1->number_ << std::endl;

  } // ここでhoge1もスコープから抜けるためHogeのデストラクタが呼ばれる
  return 0;
}

// ------------------------------------------------------------------------------

// #include <iostream>

// class Hoge {
// public:
	// Hoge(){}
	// ~Hoge(){
		// std::cout << "Hogeのデストラクタだよ" << std::endl;
	// }
	// int number_;
// };

// int main(int argc, char* argv[])
// {
	// {
		// Hoge* hoge1 = new Hoge;


		// hoge1->number_ = 30;
		// {
			// Hoge* hoge2 = hoge1;

			// std::cout << "hoge1->number_ : " << hoge1->number_ << std::endl;
			// std::cout << "hoge2->number_ : " << hoge2->number_ << std::endl;

		// }
		// std::cout << "hoge1->number_ : " << hoge1->number_ << std::endl;

	// } // ここでhoge1がスコープを抜けるけどデストラクタは呼ばれない
	// return 0;
// }

// ------------------------------------------------------------------------------



