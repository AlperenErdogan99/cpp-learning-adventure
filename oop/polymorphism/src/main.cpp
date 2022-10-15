#include <iostream>
#include <string>

using namespace std;

class ComputerInterface{
    public:
        void setCpuModel(string cpuModel) { cout << "This method not implemented" << endl; }
        string cpuModel() { cout << "This method not implemented" << endl; return "";  }
        void setGpuModel(string gpuModel) { cout << "This method not implemented" << endl; }
        string gpuModel() { cout << "This method not implemented" << endl; return "";  }
        void setBenchmark(int benchmark) { cout << "This method not implemented" << endl; }
        int benchmark() { cout << "This method not implemented" << endl; return 0;  }

    protected:
        string m_cpuModel;
        string m_gpuModel;
        int m_benchmark;

};


class MyComputer : public ComputerInterface{

    public:
        void setCpuModel(string cpuModel) { m_cpuModel = cpuModel; }
        string cpuModel() { return m_cpuModel; }
        void setGpuModel(string gpuModel) { m_gpuModel = gpuModel; }
        string gpuModel() { return m_gpuModel; }
        void setBenchmark(int benchmark) { m_benchmark = benchmark; }
        int benchmark() { return m_benchmark; }

};




int main(){
    MyComputer *cmp1 = new MyComputer();
    cmp1->setCpuModel("8th Generation i5");
    cmp1->setGpuModel("940MX");
    cmp1->setBenchmark(45);


    cout << "Cpu Model: " << cmp1->cpuModel() << endl;
    cout << "Gpu model: " << cmp1->gpuModel() << endl;
    cout << "Benchmark: " << cmp1->benchmark() << endl;


    delete cmp1;
    return 0;
}
