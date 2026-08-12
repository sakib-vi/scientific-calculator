#ifndef calculator_h
#define calculator_h

/* Menu & Program Flow */
void showMenu(void);
void showWelcomeBanner(void);
void showGoodbyeMessage(void);

/* Calculator Modules */
void basicCalculator(void);
void powerCalculator(void);
void squareRootCalculator(void);
void trigonometryCalculator(void);
void logarithmCalculator(void);
void factorialCalculator(void);
void percentageCalculator(void);

/* Utility / Input Validation */
int getValidInt(const char *prompt);
double getValidDouble(const char *prompt);
char getValidOperator(const char *prompt);
void clearInputBuffer(void);

#endif /* CALCULATOR_H */