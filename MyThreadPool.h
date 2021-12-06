class MyTask
{
public:
  virtual void operator()=0;
}

class PrimeNumTask : public MyTask
{
public:
  PrimeNumTask(int st, int end): mStart(st), mEnd(end){}
  virtual std::vector<int> void operator()
  {
   std::vector<int> vec;
   if (a <= 2) {
        a = 2;
        if (b >= 2) {
            cout << a << " ";
            a++;
        }
    }
 
    if (a % 2 == 0)
        a++;
       
    for (i = a; i <= b; i = i + 2) {
 
        bool flag = 1;
 
        for (j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
 
        if (flag == 1)
        {
          vec.push_back(i);
        }
    }
 
    return vec;
  }
  
private:
  int mStart;
  int mEnd;
}

class MyThreadPool
{
  MyThreadPool(int size): mPoolsize(size){}
  void AddTasktoQ(MyTask& obj)
  {
    mPkgQ.push_back(obj);
  }
private:
  std::vector<std::thread> mThreadQ;
  std::queue<MyTask> mPkdQ;
  int mPoolSize;
}
