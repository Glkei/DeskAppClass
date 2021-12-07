#include <iostream>
#include <string>

class person
{
private:

	//非公開
	int id;
	std::string name; //名前
	int gender;		//性別
	int age;

public:
	//空クラスを作成してもエラーが出ないようにする
	//実際この二つを作る必要性がある。
	person() {
		this->id = 0;
		this->name = "未設定";
		this->age = 0;
		this->gender = 0;
	}

	person(int id,std::string n,int a,int g) {
		this->id= id;
		this->name= n;
		this->age= a;
		this->gender= g;
	}
	//公開
	void setId(int id) {
		this->id = id;
	}
	void getName() {
		std::cout << "名前 " << this->name << "\n";
	}
};
//課題1-1
class item
{
private:

	int id;
	std::string name;
	int price;

public:

	item() {
		this->id = 0;
		this->name = "未設定";
		this->price = 0;
	};

	item(int id, std::string n, int p) {

		this->id = id;
		this->name = n;
		this->price = p;
	};


	void setId(int id) {
		this->id = id;
	}

	void setName(std::string name) {
		this->name = name;
	}

	void setPrice(int p) {
		this->price = p;
	}

	void getId() {
		std::cout << "ID-> " << this->id << "\n";
	}

	void getName() {
		std::cout << "名前-> " << this->name << "\n";
	}

	void getPrice(){
		std::cout << "価格-> " << this->price << "\n";
	}
};

int main() {

	person tanaka = { 1,"田中",29,0 };
	tanaka.getName();

	//エラーが起きない
	person kimura = {};
	kimura.getName();

	item test;

	item pen = { 1,"えんぴつ" , 50 };
	pen.getId();
	pen.getName();
	pen.getPrice();
	//値の変更
	pen.setId(3);
	pen.setName("赤鉛筆");
	pen.setPrice(150);
	//変更確認
	pen.getId();
	pen.getName();
	pen.getPrice();

	system("pause");
	return 0;
}