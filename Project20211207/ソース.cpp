#include <iostream>
#include <string>

class person
{
private:

	//����J
	int id;
	std::string name; //���O
	int gender;		//����
	int age;

public:
	//��N���X���쐬���Ă��G���[���o�Ȃ��悤�ɂ���
	//���ۂ��̓�����K�v��������B
	person() {
		this->id = 0;
		this->name = "���ݒ�";
		this->age = 0;
		this->gender = 0;
	}

	person(int id,std::string n,int a,int g) {
		this->id= id;
		this->name= n;
		this->age= a;
		this->gender= g;
	}
	//���J
	void setId(int id) {
		this->id = id;
	}
	void getName() {
		std::cout << "���O " << this->name << "\n";
	}
};
//�ۑ�1-1
class item
{
private:

	int id;
	std::string name;
	int price;

public:

	item() {
		this->id = 0;
		this->name = "���ݒ�";
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
		std::cout << "���O-> " << this->name << "\n";
	}

	void getPrice(){
		std::cout << "���i-> " << this->price << "\n";
	}
};

int main() {

	person tanaka = { 1,"�c��",29,0 };
	tanaka.getName();

	//�G���[���N���Ȃ�
	person kimura = {};
	kimura.getName();

	item test;

	item pen = { 1,"����҂�" , 50 };
	pen.getId();
	pen.getName();
	pen.getPrice();
	//�l�̕ύX
	pen.setId(3);
	pen.setName("�ԉ��M");
	pen.setPrice(150);
	//�ύX�m�F
	pen.getId();
	pen.getName();
	pen.getPrice();

	system("pause");
	return 0;
}