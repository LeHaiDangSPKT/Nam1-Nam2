using System;
using System.Collections.Generic;
using System.Text;

namespace QuanLySanPham
{
    public class TiVi : SanPham
    {
        public double Size { get; set; }
        public TiVi() : base()
        {

        }
        public TiVi(string masp, string tensp, string mau, double gia, double size) : base(masp, tensp, mau, gia)
        {
            this.Size = size;
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
            Console.Write("Nhap kich thuoc: ");
            this.Size = Convert.ToDouble(Console.ReadLine());
        }
        public override void TinhGiaTien()
        {
            this.GiaTien = this.giaCoBan + this.Size * 0.1;
        }
        public override void Xuat()
        {
            Console.WriteLine("\n");
            Console.WriteLine($"{this.MaSP,20}|{this.TenSP,20}|{this.Mau,20}|{this.GiaTien,20}");
            Console.WriteLine("Kich Thuoc: {0}", this.Size);

        }
    }
}
