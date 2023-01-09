using System;

namespace ConsoleApp1
{
    public class Program
    {
        public static void Main(string[] args)
        {

            SanPham ao = new SanPham();
            SanPham quan = new SanPham();
            Kho<SanPham> kho = new Kho<SanPham>();
            kho.TaoKhoHang(ao, quan);

            ThaoTacBanSP<SanPham> ban = new ThaoTacBanSP<SanPham>(kho);
            ThaoTacTraSP<SanPham> tra = new ThaoTacTraSP<SanPham>(kho);
            ThaoTacNhapSP<SanPham> nhap = new ThaoTacNhapSP<SanPham>(kho);


            int hd = 1;
            int num_quan;
            int num_ao;

            while (hd != 0)
            {
                Console.WriteLine("--------------------LUA CHON HANH DONG NAO !--------------------");
                Console.WriteLine("0. Thoat.");
                Console.WriteLine("1. Nhap hang.");
                Console.WriteLine("2. Tra hang.");
                Console.WriteLine("3. Ban hang.");
                Console.WriteLine("4. Xuat ket qua.");
                Console.Write("Lua chon cua ban la: ");
                hd = int.Parse(Console.ReadLine());
                switch (hd)
                {
                    case 0:
                        goto KETTHUC;
                    case 1:
                        Console.Write("Nhap so ao muon nhap: ");
                        num_ao = int.Parse(Console.ReadLine());
                        Console.Write("Nhap so quan muon nhap: ");
                        num_quan = int.Parse(Console.ReadLine());
                        if ((num_quan * quan.gia_goc + num_ao * ao.gia_goc) > kho.tienmat)
                        {
                            Console.WriteLine("So tien hien co khong du.");
                            break;
                        }
                        kho.ThucHienNhapSanPham(num_quan*quan.gia_goc + num_ao*ao.gia_goc, num_ao, num_quan);
                        break;
                    case 2:
                        Console.Write("Nhap so luong ao muon tra: ");
                        num_ao = int.Parse(Console.ReadLine());
                        Console.Write("Nhap so luong quan muon tra: ");
                        num_quan = int.Parse(Console.ReadLine());

                        if (num_ao > kho.tongao || num_quan > kho.tongquan)
                        {
                            Console.WriteLine("San pham (ao hoac quan) trong kho con it (hoac nhieu) hon so luong da nhap");
                            break;
                        }
                        kho.ThucHienTraSanPham(num_quan * quan.gia_goc + num_ao * ao.gia_goc, num_ao, num_quan);
                        break;
                    case 3:
                        Console.Write("Nhap so luong ao ban duoc: ");
                        num_ao = int.Parse(Console.ReadLine());
                        Console.Write("Nhap so luong quan ban duoc:  ");
                        num_quan = int.Parse(Console.ReadLine());
                        if (num_ao > kho.tongao || num_quan > kho.tongquan)
                        {
                            Console.WriteLine("San pham (ao hoac quan) trong kho con it (hoac nhieu) hon so luong da nhap");
                            break;
                        }
                        kho.ThucHienBanSanPham(num_quan * quan.gia_ban + num_ao * ao.gia_ban, num_ao, num_quan);
                        break;
                    case 4:
                        kho.Xuat(ao, quan);
                        break;
                }
            }

        KETTHUC:
            {
                Console.WriteLine("Qua trinh ket thuc....");
            }
        }
    }
}
