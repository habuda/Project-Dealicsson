#include "Product.hh"

void Product::seedWeed(){
    
    amount++;
    
//    if(timeWeed==0){
//    timer = new WTimer();
//    timer->setInterval(100);
//    timer->timeout().connect(this, &Product::countTimeWeed);
//    timer->start();   
//    }
}

void Product::increaseWeed(){
//    m_pController->m_ModelData.m_ModelGame.increaseScore(); 
//    textWeed->setText(intToString(m_pController->m_ModelData.m_ModelGame.getScore()));  
}

void Product::countTimeWeed(){
    timeWeed++;
    std::cout << timeWeed << std::endl;
    if(timeWeed>=10){
        timeWeed=0;
        timer->stop();
        amount++;
      //  increaseWeed();
        
      //  std::cout << m_pController->m_ModelData.m_ModelGame.getScore() << std::endl;
    }
}

Product::Product():timeWeed(0),amount(0){};