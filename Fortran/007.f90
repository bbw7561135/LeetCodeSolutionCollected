program leetcode07
    implicit none
    integer(kind=4) :: a=89321
    call reverse_int(a)
    write(*,*) 'The reverse number is', a
end program leetcode07

subroutine reverse_int(a)
    implicit none
    integer(kind=4) :: a
    integer(kind=4) :: temp=0
    integer(kind=4) :: tx
    tx = abs(a)
    do while(abs(tx)>0)
        temp = temp*10+mod(tx,10)
        tx=tx/10
    end do

    if(temp>2147483647 .or. temp<-2147483647) then
        a=0
    else if (a>0) then
        a=temp
    else
        a=-temp
    end if

    return
end subroutine reverse_int
!gfortran 004.f90
!./a.out
!output 12398
