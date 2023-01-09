using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLyShopQuanAo
{
    public class ThuongHieu
    {
        public string maThuongHieu { get; set; }     // primary key
        public string tenThuongHieu { get; set; }

        // constructor
        public ThuongHieu() { }
        public ThuongHieu(ThuongHieu thuongHieu)
        {
            this.maThuongHieu = thuongHieu.maThuongHieu;
            this.tenThuongHieu = thuongHieu.tenThuongHieu;
        }
        public ThuongHieu(string maThuongHieu, string tenThuongHieu)
        {
            this.maThuongHieu = maThuongHieu;
            this.tenThuongHieu = tenThuongHieu;
        }
    }
}
