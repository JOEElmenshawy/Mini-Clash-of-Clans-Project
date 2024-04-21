#include "fence.h"

Fence::Fence() {
    health = 10;

}

void Fence::DecreaseHealth(){
    health--;
    Die();
}

void Fence::Die(){
    if(health<=0){
        scene()->removeItem(this);
        delete this;
    }

}
