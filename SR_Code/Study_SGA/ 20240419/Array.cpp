

void lowNum(int X[]) //������������������������������������ �������� �Լ�����?
{
    int min;    //������������������������������������ �� �������� ����
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (X[i] < X[j])    //������������i��°�� j��°���� ���ٸ�
            {
                min = X[j];     //����������׸��� j��° �� �ֱ�
                X[j] = X[i];    //��������j��°�� i��° �� �ֱ�
                X[i] = min;     //��������i��°�� ��׸������ j�� �ֱ�
            }
        }

    }

};

void highNum(int X[])//������������������������������������ �������� �Լ�����?
{
    int min;    //������������������������������������ �� �������� ����
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (X[i] > X[j])    //������������i��°�� j��°���� ���ٸ�
            {
                min = X[j];     //����������׸��� j��° �� �ֱ�
                X[j] = X[i];    //��������j��°�� i��° �� �ֱ�
                X[i] = min;     //��������i��°�� ��׸������ j�� �ֱ�
            }
        }

    }

};