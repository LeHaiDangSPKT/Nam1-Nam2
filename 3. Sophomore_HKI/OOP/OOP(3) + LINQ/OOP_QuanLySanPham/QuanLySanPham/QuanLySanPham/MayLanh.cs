using System;
using System.Collections.Generic;
using System.Text;

namespace QuanLySanPham
{
    class MayLanh:SanPham
    {
        public double CongSuat { get; set; }
        public MayLanh() : base()
        {

        }
        public MayLanh(string masp, string tensp, string mau, double gia, double congSuat) : base(masp, tensp, mau, gia)
        {
            this.CongSuat = congSuat;
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
            Console.Write("Nhap cong suat: ");
            this.CongSuat = Convert.ToDouble(Console.ReadLine());
        }
        public override void TinhGiaTien()
        {
            this.GiaTien = this.giaCoBan + this.CongSuat * 0.1;
        }
        public override void Xuat()
        {
            Console.WriteLine("\n");
            Console.WriteLine($"{this.MaSP,20}|{this.TenSP,20}|{this.Mau,20}|{this.GiaTien,20}");
            Console.WriteLine("Cong suat: {0}", this.CongSuat);
        }
    }
}
