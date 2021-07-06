#include<stdio.h>

//第１問
//x, y座標を持つ構造体Vector2を作ってください。
//x, yはpublicで作成し、外部で値を設定して、
//値が表示されることを確認してください。
/*
struct Vector2
{
public:
	int x;
	int y;
};
*/

//第２問
//x, y座標を持つ構造体Vector2を作ってください。
//x, yはprivateで作成し、関数を介して値を設定できるようにして、
//値が表示されることを確認してください。
/*
struct Vector2
{
private:
	int x;
	int y;
public:
	int SetX(int num) { return x = num; }
	int SetY(int num) { return y = num; }
	int GetX() { return x; }
	int GetY() { return y; }
};
*/

//第３問
//x, y, z座標を持つ構造体Vector3を作ってください。
//x, y, zはprivateで作成し、関数を介して値を設定できるようにして、
//値が表示されることを確認してください。
/*
struct Vector3
{
private:
	int x;
	int y;
	int z;
public:
	int SetX(int num) { return x = num; }
	int SetY(int num) { return y = num; }
	int SetZ(int num) { return z = num; }
	int GetX() { return x; }
	int GetY() { return y; }
	int GetZ() { return z; }
};
*/

//以下テスト用
int main()
{
	//第１問
	/*
	Vector2 vector2;
	vector2.x = 1;
	vector2.y = 2;
	printf("x = %d\n", vector2.x);
	printf("y = %d\n", vector2.y);
	*/

	//第２問
	/*
	Vector2 vector2;
	vector2.SetX(1);
	vector2.SetY(2);
	printf("x = %d\n", vector2.GetX());
	printf("y = %d\n", vector2.GetY());
	*/

	//第３問
	/*
	Vector3 vector3;
	vector3.SetX(1);
	vector3.SetY(2);
	vector3.SetZ(3);
	printf("x = %d\n", vector3.GetX());
	printf("y = %d\n", vector3.GetY());
	printf("z = %d\n", vector3.GetZ());
	*/
}