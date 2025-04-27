/*
*
* xóa các phần tử trùng nhau của 1 mãng só nguyên và chỉ giữ lại duy nhất 1 phần tử
a | mang
n | soLuongPhanTu
i | chiSoPhanTu / chiSoDangXet / chiSo
j | chiSoSoSanh
x | viTriCanXoa
    cin là Nhập dữ liệu từ bàn phím (input)
    cout là In ra màn hình (output)




*/

#include <iostream>
using namespace std;

// Hàm nhập dữ liệu cho mảng
void nhapMang(int mang[], int soLuongPhanTu) {
    for (int chiSoPhanTu = 0; chiSoPhanTu < soLuongPhanTu; chiSoPhanTu++) {
        cout << "Nhap gia tri mang[" << chiSoPhanTu << "] = ";
        cin >> mang[chiSoPhanTu];
    }
}

// Hàm xuất dữ liệu của mảng
void xuatMang(int mang[], int soLuongPhanTu) {
    for (int chiSoPhanTu = 0; chiSoPhanTu < soLuongPhanTu; chiSoPhanTu++) {
        cout << "\t" << mang[chiSoPhanTu];
    }
}

// Hàm xóa 1 phần tử trong mảng tại vị trí chiSoCanXoa
void xoaMotPhanTu(int mang[], int& soLuongPhanTu, int viTriCanXoa) {
    for (int chiSo = viTriCanXoa; chiSo < soLuongPhanTu - 1; chiSo++) {
        mang[chiSo] = mang[chiSo + 1];
    }
    soLuongPhanTu--;
}

// Hàm xóa các phần tử bị trùng trong mảng
void xoaPhanTuTrungNhau(int mang[], int& soLuongPhanTu) {
    for (int chiSoDangXet = 0; chiSoDangXet < soLuongPhanTu; chiSoDangXet++) {
        for (int chiSoSoSanh = chiSoDangXet + 1; chiSoSoSanh < soLuongPhanTu; chiSoSoSanh++) {
            if (mang[chiSoDangXet] == mang[chiSoSoSanh]) {
                xoaMotPhanTu(mang, soLuongPhanTu, chiSoSoSanh);
                chiSoSoSanh--;
            }
        }
    }
}

// Hàm chính
int main()
{
    int mang[100];
    int soLuongPhanTu;

    cout << "Nhap so luong phan tu cua mang: ";
    cin >> soLuongPhanTu;

    nhapMang(mang, soLuongPhanTu);

    cout << "Mang vua nhap la: ";
    xuatMang(mang, soLuongPhanTu);

    xoaPhanTuTrungNhau(mang, soLuongPhanTu);

    cout << "\nMang sau khi xoa cac phan tu trung nhau la: ";
    xuatMang(mang, soLuongPhanTu);

    return 0;
}

