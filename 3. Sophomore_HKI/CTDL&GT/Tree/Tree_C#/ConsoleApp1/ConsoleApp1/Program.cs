using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            NODE root, p1, p2, p3, p4, p5, p6;
            BinaryTree myTree = new BinaryTree();
            root = myTree.CreateNode(7);
            p1 = myTree.CreateNode(5);
            p2 = myTree.CreateNode(10);
            p3 = myTree.CreateNode(9);
            p4 = myTree.CreateNode(2);
            p5 = myTree.CreateNode(3);
            p6 = myTree.CreateNode(1);

            root.left = p1;
            root.right = p2;
            p1.left = p3;
            p2.left = p4;
            p2.right = p5;

            Console.Write("Duyet tien tu: ");
            myTree.PreOrder(root);
            Console.Write("\nDuyet trung tu: ");
            myTree.InOrder(root);
            Console.Write("\nDuyet hau tu: ");
            myTree.PostOrder(root);

            Console.WriteLine("\n--------------------- ");
            Console.WriteLine("Them phan tu 1 vao cay!!");
            myTree.InsertNode(root, p6);
            Console.Write("Duyet tien tu: ");
            myTree.PreOrder(root);
            Console.Write("\nDuyet trung tu: ");
            myTree.InOrder(root);
            Console.Write("\nDuyet hau tu: ");
            myTree.PostOrder(root);

            Console.WriteLine("\n--------------------- ");
            Console.WriteLine("Tim phan tu 5 co trong cay hay khong?");
            if (myTree.SearchOnTree(root, 5) == null)
                Console.WriteLine("\tKhong co phan tu 5 trong cay");
            else
                Console.WriteLine("\tDa tim thay phan tu 5 trong cay");

            Console.WriteLine("--------------------- ");
            Console.WriteLine("Sau khi xoa phan tu 7 khoi cay");
            myTree.DeleteNode(ref root, 7);
            Console.Write("Duyet tien tu: ");
            myTree.PreOrder(root);
            Console.Write("\nDuyet trung tu: ");
            myTree.InOrder(root);
            Console.Write("\nDuyet hau tu: ");
            myTree.PostOrder(root);
            Console.ReadKey();
        }
        public class NODE
        {
            public int data;
            public NODE left, right;
        }
        public class BinaryTree
        {
            public NODE CreateNode(int x)
            {
                NODE p = new NODE();
                if (p == null)
                    Console.WriteLine("khong du bo nho");
                else
                {
                    p.data = x;
                    p.left = p.right = null;
                }
                return p;
            }
            // duyệt tiền tự
            public void PreOrder(NODE root)
            {
                if (root != null)
                {
                    Console.Write(" " + root.data);
                    PreOrder(root.left);
                    PreOrder(root.right);
                }
            }
            //duyệt trung tự
            public void InOrder(NODE root)
            {
                if (root != null)
                {
                    InOrder(root.left);
                    Console.Write(" " + root.data);
                    InOrder(root.right);
                }
            }
            // duyệt hậu tự
            public void PostOrder(NODE root)
            {
                if (root != null)
                {
                    PostOrder(root.left);
                    PostOrder(root.right);
                    Console.Write(" " + root.data);
                }
            }
            // thêm phần tử
            public NODE InsertNode(NODE root, NODE p)
            {
                if (root == null)
                    return p;
                if (root.data == p.data)
                    return null;
                if (root.data > p.data)
                    root.left = InsertNode(root.left, p);
                else
                    root.right = InsertNode(root.right, p);
                return root;
            }
            // tìm kiếm phần tử
            public NODE SearchOnTree(NODE root, int p)
            {
                if (root == null)
                    return null;
                if (root.data == p)
                    return root;
                if (root.data > p)
                    return SearchOnTree(root.left, p);
                else
                    return SearchOnTree(root.right, p);
            }

            public NODE MoveLeftMostNode(NODE root)
            {
                while (root.left != null)
                {
                    root = root.left;
                }
                return root;
            }
            // xóa phần tử
            public void DeleteNode(ref NODE root, int p)
            {
                if (root == null)
                    return;
                if (root.data > p)
                    DeleteNode(ref root.left, p);
                else if (root.data < p)
                    DeleteNode(ref root.right, p);
                else
                {
                    if (root.left == null)
                    {
                        root = root.right;
                    }
                    else if (root.right == null)
                    {
                        root = root.left;
                    }
                    else
                    {
                        NODE temp = MoveLeftMostNode(root.right);
                        root.data = temp.data;
                        DeleteNode(ref root.right, temp.data);
                    }
                }
            }
        }
    }
}
