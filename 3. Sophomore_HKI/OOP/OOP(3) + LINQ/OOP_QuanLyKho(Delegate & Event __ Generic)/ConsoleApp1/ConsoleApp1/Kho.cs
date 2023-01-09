using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{ 

    public class Kho<T> where T : SanPham
    {
        public Kho() 
        {

        }
        public delegate void Handler_Nhap(Kho<T> sender, KhoEvent e);
        public delegate void Handler_Tra(Kho<T> sender, KhoEvent e);
        public delegate void Handler_Ban(Kho<T> sender, KhoEvent e);
        public event Handler_Nhap nhap;
        public event Handler_Tra tra;
        public event Handler_Ban ban;


        public double tienmat;
        public int tongao;
        public int tongquan;

        public void TaoKhoHang(T ao, T quan)
        {
            Console.WriteLine("--------------------QUA TRINH TAO KHO HANG--------------------\n");

            Console.WriteLine("SAN PHAM AO:");
            ao.TaoHang(ao);
            

            Console.WriteLine("SAN PHAM QUAN:");
            quan.TaoHang(quan);

            Console.WriteLine("KHAI BAO SO HANG TRONG KHO:\n");
            Console.Write("Nhap so ao hien tai trong kho: ");
            tongao = int.Parse(Console.ReadLine());
            Console.Write("Nhap so quan hien tai trong kho: ");
            tongquan = int.Parse(Console.ReadLine());
            Console.Write("Nhap so tien hien co: ");
            tienmat = double.Parse(Console.ReadLine());

            Xuat(ao, quan);

        }
        public void ThucHienNhapSanPham(double tien, int ao, int quan)
        {
            KhoEvent ev = new KhoEvent("THEM SAN PHAM VAO KHO", tien, ao, quan);
            if (nhap != null)
            {
                nhap(this, ev);
            }
        }
        public void ThucHienTraSanPham(double tien, int ao, int quan)
        {
            KhoEvent ev = new KhoEvent("THEM SAN PHAM VAO KHO", tien, ao, quan);
            if (tra != null)
            {
                tra(this, ev);
            }
        }
        public void ThucHienBanSanPham(double tien, int ao, int quan)
        {
            KhoEvent ev = new KhoEvent("THEM SAN PHAM VAO KHO", tien, ao, quan);
            if (ban != null)
            {
                ban(this, ev);
            }
        }
        public void Xuat(T ao, T quan)
        {
            Console.WriteLine();
            Console.WriteLine($"Tong so ao: {tongao,-20}|Tong so quan: {tongquan,-20}|Tong tien hien co: {tienmat,-20}|Tong tai san: {(tienmat + tongao * ao.gia_goc + tongquan * quan.gia_goc),-20}");
            Console.WriteLine();
        }

    }
}
