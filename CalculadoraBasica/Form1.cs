using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace CalculadoraBasica
{
    public partial class frmPrincipal : Form
    {
        public frmPrincipal()
        {
            InitializeComponent();
        }

        private void btnSomar_Click(object sender, EventArgs e)
        {
            double Valor1 = System.Convert.ToDouble(txbValor1.Text);
            double Valor2 = System.Convert.ToDouble(txbValor2.Text);
            double Resposta;
            String resp;

            Resposta = Valor1 + Valor2;
            resp = "A Soma é igual a: " + Resposta;
            lblResultado.Text = resp;
        }

        private void btnSubtrair_Click(object sender, EventArgs e)
        {

            double Valor1 = System.Convert.ToDouble(txbValor1.Text);
            double Valor2 = System.Convert.ToDouble(txbValor2.Text);
            double Resposta;
            String resp;


            Resposta = Valor1 - Valor2;
            resp = "A Subtração é igual a: " + Resposta;
            lblResultado.Text = resp;
            
        }

        private void btnMult_Click(object sender, EventArgs e)
        {
            double Valor1 = System.Convert.ToDouble(txbValor1.Text);
            double Valor2 = System.Convert.ToDouble(txbValor2.Text);
            double Resposta;
            String resp;

            Resposta = Valor1 * Valor2;

            resp = "A Multiplicação é igual a: " + Resposta;
            lblResultado.Text = resp;
        }

        private void btnDividir_Click(object sender, EventArgs e)
        {
            double Valor1 = System.Convert.ToDouble(txbValor1.Text);
            double Valor2 = System.Convert.ToDouble(txbValor2.Text);
            double Resposta;
            String resp;

            if (Valor2 == 0)
            {
                resp = "Não podemos dividir numeros por zero";
                lblResultado.Text = resp;
            }
            else
            {
                Resposta = Valor1 / Valor2;
                resp = "A Divisão é igual a: " + Resposta;
                lblResultado.Text = resp;
            }

        }
    }
}
