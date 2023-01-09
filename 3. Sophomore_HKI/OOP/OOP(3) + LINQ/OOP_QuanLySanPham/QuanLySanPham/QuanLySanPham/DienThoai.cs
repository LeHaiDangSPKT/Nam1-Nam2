using System;
using System.Collections.Generic;
using System.Text;

namespace QuanLySanPham
{
    public class DienThoai : SanPham
    {
        public double BoNho { get; set; }
        public DienThoai() : base()
        {

        }
        public DienThoai(string masp, string tensp, string mau, double gia, double boNho) : base(masp, tensp, mau, gia)
        {
            this.BoNho = boNho;
        }
        public override void Nhap()
        {
            Console.Write("Nhap ma sp: ");
            this.MaSP = Console.ReadLine();
            Console.Write("Nhap ten san pham: ");
            this.TenSP = Console.ReadLine();
            Console.Write("Nhap mau san pham: ");
            this.Mau = Console.ReadLine();
            Console.Write("Nhap gia ban co ban: ");
            this.GiaCoBan = Double.Parse(Console.ReadLine());
            Console.Write("Nhap bo nho: ");
            this.BoNho = Convert.ToDouble(Console.ReadLine());
        }
        public override void TinhGiaTien()
        {
            this.GiaTien = this.giaCoBan + this.BoNho * 0.2;
        }
        public override void Xuat()
        {
            Console.WriteLine("\n");
            Console.WriteLine($"{this.MaSP,20}|{this.TenSP,20}|{this.Mau,20}|{this.GiaTien,20}");
            Console.WriteLine("Bo nho: {0}", this.BoNho);

        }
    }
}
