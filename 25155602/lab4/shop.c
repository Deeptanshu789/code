#include <stdio.h>
int main() {
	float bp, mp, discount, selling_price, profit_loss, profit_percentage, loss_percentage;
	printf("Enter buying price: ");
	scanf("%f", &bp);
	printf("Enter marked price: ");
	scanf("%f", &mp);
	printf("Enter discount percentage: ");
	scanf("%f", &discount);
	selling_price = mp - (mp * discount / 100);
	profit_loss = selling_price - bp;
        profit_percentage = (profit_loss / bp ) * 100;
        loss_percentage = (profit_loss / selling_price) * 100;
	(profit_loss > 0) ? (printf("Profit: %.2f\nProfit Percentage: %.2f%%\n", profit_loss, profit_percentage)) :
		(profit_loss < 0 ? printf("Loss: %.2f\nLoss Percentage: %.2f%%\n", -profit_loss, loss_percentage) : printf("No profit, no loss.\n"));
	return 0;
}
