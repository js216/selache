// SPDX-License-Identifier: MIT
// cctest_csmith_c3baaa3e.c --- cctest case csmith_c3baaa3e (csmith seed 3283790398)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9224c7cd */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 3283790398 -o /tmp/csmith_gen_9bu3ogh3/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint32_t  f0;
   uint16_t  f1;
};

union U1 {
   struct S0  f0;
   struct S0  f1;
   int64_t  f2;
   uint8_t  f3;
};

union U2 {
   uint16_t  f0;
   uint16_t  f1;
};


static uint32_t g_4[1][2][1] = {{{5UL},{5UL}}};
static int32_t g_22 = 0xC7BA3F30L;
static uint32_t g_23 = 0x2377D644L;
static uint32_t g_30 = 0x138B36CEL;
static int32_t g_32 = 0x54F86FC3L;
static int32_t g_35 = 0x7BC50133L;
static uint32_t g_39 = 0x1F3A4B44L;
static int16_t g_45 = 8L;
static uint32_t g_71 = 1UL;
static int16_t g_72[2] = {0L,0L};
static uint32_t g_84 = 0x6A28E28BL;
static int16_t g_85[1] = {0x32C9L};
static uint32_t g_86 = 0x1AA06974L;
static uint64_t g_141 = 5UL;
static uint64_t g_179 = 0xCD3375787EC679D4LL;
static union U1 g_221 = {{0xCAF346C8L,65535UL}};
static uint32_t g_226 = 4294967295UL;
static uint16_t g_272 = 0x07D2L;
static uint16_t g_273 = 0x0E0BL;
static int8_t g_324 = 0x26L;



static int32_t  func_1(void);
static uint64_t  func_7(int64_t  p_8);
static int32_t  func_10(int32_t  p_11);
static int16_t  func_12(int32_t  p_13);




static int32_t  func_1(void)
{ 
    int32_t l_2 = (-1L);
    const int32_t l_3 = (-4L);
    int32_t l_332 = 0L;
    if (((((0x8588L > (l_2 = 1UL)) < l_3) >= (g_4[0][1][0] == l_3)) , l_3))
    { 
        uint32_t l_271 = 4294967294UL;
        for (l_2 = 6; (l_2 > 1); --l_2)
        { 
            uint64_t l_9 = 18446744073709551615UL;
            int32_t l_274 = 0L;
        }
    }
    else
    { 
        int64_t l_345 = 0x99CC1797A03D4DD6LL;
        g_22 = l_332;
        for (g_179 = 0; (g_179 >= 14); g_179 = safe_add_func_int32_t_s_s(g_179, 4))
        { 
            uint32_t l_338 = 0UL;
            union U1 l_348 = {{6UL,65535UL}};
            g_35 = ((safe_div_func_int32_t_s_s(((l_338 != (safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_272, (l_345 <= (((safe_div_func_int8_t_s_s((l_348 , 0x20L), g_221.f0.f1)) | (-1L)) , l_3)))), g_86)) == g_23), 0L))) , l_338), g_45)) && g_72[0]);
        }
    }
    return g_72[0];
}



static uint64_t  func_7(int64_t  p_8)
{ 
    int64_t l_281[2];
    int32_t l_284 = (-5L);
    int32_t l_289 = (-2L);
    uint32_t l_306 = 0UL;
    int32_t l_315 = 1L;
    int32_t l_325 = 6L;
    int i;
    for (i = 0; i < 2; i++)
        l_281[i] = 0x02F24D469CA00625LL;
    l_284 = (+((safe_mul_func_int8_t_s_s((((g_71 || (safe_unary_minus_func_uint64_t_u((safe_mul_func_int8_t_s_s(((18446744073709551607UL && (l_281[1] | ((safe_div_func_int32_t_s_s(0xF1258D5DL, 7UL)) & 0L))) ^ g_71), p_8))))) != g_30) >= 1L), 0xCEL)) != p_8));
    for (l_284 = (-5); (l_284 <= (-20)); --l_284)
    { 
        int32_t l_307 = (-1L);
        int32_t l_308 = 0xA7DB7F8AL;
        int8_t l_309 = 0xB2L;
        int32_t l_310 = (-1L);
        int8_t l_323 = 1L;
        for (g_23 = (-12); (g_23 <= 1); ++g_23)
        { 
            l_289 = g_35;
            l_310 &= (safe_div_func_int32_t_s_s((p_8 > (~((p_8 & ((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((l_308 |= (safe_unary_minus_func_int64_t_s((safe_rshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((l_289 = ((0x25L ^ l_306) && l_289)), g_84)) , p_8), l_307)) ^ g_45) || l_281[1]), 6))))), l_307)), g_141)) , 1UL) , l_309) == 0UL)) & (-2L)))), l_281[0]));
            l_289 = (-9L);
        }
    }
    return g_273;
}



static int32_t  func_10(int32_t  p_11)
{ 
    int64_t l_20 = 0L;
    int32_t l_21[2][1][4];
    uint32_t l_59 = 9UL;
    int8_t l_73 = 0L;
    uint64_t l_91 = 18446744073709551615UL;
    union U1 l_114 = {{0UL,0xCED5L}};
    uint32_t l_232[5][3][4] = {{{4294967290UL,3UL,0xAF6BC739L,0x087CFFACL},{0x929257CBL,0xC91CA63CL,0xB409F4FCL,0xAF6BC739L},{3UL,4294967287UL,1UL,4294967290UL}},{{3UL,0xB409F4FCL,0xB409F4FCL,3UL},{0x929257CBL,4294967290UL,0xAF6BC739L,0xB409F4FCL},{4294967290UL,4294967287UL,0x41B74B74L,0x087CFFACL}},{{0xC91CA63CL,0x929257CBL,0xB409F4FCL,0x087CFFACL},{0x5B73C7D3L,4294967287UL,0x5B73C7D3L,0xB409F4FCL},{3UL,4294967290UL,4294967295UL,3UL}},{{0xC91CA63CL,0xB409F4FCL,0xAF6BC739L,4294967290UL},{0xB409F4FCL,0x929257CBL,0x1C6B7E16L,0x1C6B7E16L},{0xB409F4FCL,0xB409F4FCL,3UL,3UL}},{{0xAF6BC739L,4294967291UL,0x41B74B74L,0x5B73C7D3L},{0x41B74B74L,0x5B73C7D3L,1UL,0x41B74B74L},{0xB409F4FCL,0x5B73C7D3L,4294967287UL,0x5B73C7D3L}}};
    int32_t l_259 = 0xA8335178L;
    uint64_t l_261 = 0x0E336DEEBD24BBF9LL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_21[i][j][k] = 0xA04F7772L;
        }
    }
    p_11 = (g_4[0][1][0] || func_12((((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((g_30 ^= ((safe_mul_func_uint8_t_u_u((--g_23), (l_21[0][0][1] != (safe_mul_func_int8_t_s_s((g_22 >= (safe_mul_func_uint16_t_u_u((g_22 > g_22), g_22))), 0x71L))))) , p_11)), 5)), 0x65L)) != p_11) >= p_11)));
    if ((safe_rshift_func_int8_t_s_s(g_4[0][1][0], ((safe_add_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((!(++l_59)), ((g_72[0] |= (65529UL >= ((safe_lshift_func_uint8_t_u_s((g_71 = (safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(p_11, (((safe_mod_func_uint32_t_u_u((~l_21[0][0][1]), g_4[0][0][0])) < 0x40870E26L) <= p_11))) && g_30), 0x50A7L))), 4)) != 2UL))) ^ l_21[0][0][1]))) < p_11), 0xE5L)), p_11)) < 247UL), p_11)) && p_11))))
    { 
        int8_t l_74[4] = {3L,3L,3L,3L};
        int32_t l_80 = (-5L);
        struct S0 l_95 = {0x452746A0L,0UL};
        int i;
lbl_92:
        p_11 &= g_45;
        l_74[3] = (l_73 = p_11);
        if (g_45)
        { 
            return g_72[1];
        }
        else
        { 
            uint32_t l_89 = 0xAB39D48FL;
            g_22 |= 0x5A03F751L;
            if (l_74[1])
            { 
                const int32_t l_79 = 0L;
                p_11 = ((p_11 != ((l_80 &= (((safe_sub_func_uint8_t_u_u(0UL, (safe_sub_func_int32_t_s_s(l_79, p_11)))) | 0x5799F9A5L) != p_11)) && g_71)) >= l_79);
                if (g_30)
                    goto lbl_90;
lbl_90:
                l_89 = ((~p_11) < ((safe_mul_func_uint8_t_u_u((g_84 = g_4[0][1][0]), 1UL)) , (--g_86)));
                l_80 |= l_91;
            }
            else
            { 
                if (p_11)
                    goto lbl_92;
            }
            g_35 &= ((safe_mul_func_uint8_t_u_u(g_30, 0x94L)) ^ (((l_95 , (g_32 < l_74[3])) < (-1L)) , l_89));
        }
    }
    else
    { 
        int32_t l_104[3];
        const union U1 l_109 = {{0UL,0UL}};
        int32_t l_111 = 0xAFE90CC9L;
        int32_t l_155 = 0xB32EC468L;
        uint16_t l_194 = 0x7FB4L;
        int i;
        for (i = 0; i < 3; i++)
            l_104[i] = 0xE87F6124L;
        if (l_21[0][0][2])
        { 
            g_32 = ((safe_rshift_func_uint16_t_u_u(g_72[0], (l_104[0] = ((safe_lshift_func_uint8_t_u_s(g_86, 6)) & (safe_rshift_func_uint16_t_u_u((((1L != (safe_add_func_uint8_t_u_u((l_21[0][0][1] = (((g_23 < 0x53368A3BL) == 0x48L) != 4294967289UL)), l_91))) & 0x6BL) <= g_86), g_45)))))) ^ 0xAF47L);
        }
        else
        { 
            uint8_t l_110[3];
            int i;
            for (i = 0; i < 3; i++)
                l_110[i] = 0x89L;
            l_111 = (safe_mod_func_int16_t_s_s((((0x92A3EDA01CD825BCLL >= (l_104[2] = (l_110[1] = (0L >= (((safe_div_func_int64_t_s_s((0xDDE48D452736F9D8LL ^ (l_109 , g_86)), (-1L))) ^ g_71) >= g_4[0][1][0]))))) >= 0x9AL) <= 0xDFL), 0xEA79L));
            for (g_71 = (-10); (g_71 == 41); ++g_71)
            { 
                p_11 = (l_114 , (+(safe_rshift_func_int16_t_s_u(((0xD5L != l_110[2]) & (safe_div_func_uint64_t_u_u((l_21[1][0][2] = ((!((safe_mul_func_int8_t_s_s((-1L), 255UL)) != 0xFCA9L)) & g_85[0])), (-8L)))), g_85[0]))));
            }
        }
        l_104[0] = (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_u(((((safe_div_func_uint64_t_u_u(p_11, p_11)) != (g_141 = ((safe_mul_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(g_4[0][0][0], (((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(g_35, p_11)), 0x82L)) , l_20) ^ 0xBDA3L))) && g_32), 0x60A1L)) , p_11) , 0xE943L) , 0x33L), l_114.f0.f0)) , 0xC94FL))) & p_11) & 1L), g_4[0][1][0])) < p_11) == p_11) < p_11), 7)), g_30));
        if ((((l_21[1][0][1] = (safe_div_func_int32_t_s_s(((l_155 ^= (((safe_add_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s((!((safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u(4294967294UL, (p_11 = (p_11 > (0xA806100E9BDCB58CLL == (((-4L) >= l_109.f0.f0) == g_71)))))) && p_11), 4)) , g_72[0])), 7)) > l_104[0]) < l_111), 0L)) || g_86) | (-8L))) >= l_20), l_73))) & (-1L)) & l_104[0]))
        { 
            const int16_t l_171 = 0xBC3BL;
            union U2 l_174 = {3UL};
            int64_t l_189 = (-6L);
            uint32_t l_190 = 0x6246BDDAL;
            int32_t l_191 = 0x188FCF75L;
            for (l_155 = (-26); (l_155 < 14); l_155++)
            { 
                const uint32_t l_160 = 0xCBE952D2L;
                p_11 = (((((safe_add_func_int64_t_s_s(1L, l_160)) , ((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_114.f0.f0, (((safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s((p_11 || l_171), p_11)), 4L)) == l_59) > g_85[0]))), 0x44L)), l_160)) || p_11)) != l_111) > 0x5D8FL) | 18446744073709551613UL);
                g_35 = ((safe_sub_func_uint32_t_u_u(((l_155 | (l_174 , p_11)) || ((safe_add_func_int8_t_s_s((safe_add_func_uint64_t_u_u((l_160 & 0x98F8DB1BCEFE97C8LL), p_11)), l_104[0])) != p_11)), g_179)) & g_179);
                return g_39;
            }
            l_191 &= (g_71 | ((l_190 = (((safe_mul_func_int8_t_s_s(0x07L, (safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_141, (((!(g_32 || l_155)) == g_85[0]) == 0x085358ACL))), l_104[0])), p_11)))) > l_189) < 4L)) > (-2L)));
        }
        else
        { 
            uint32_t l_195 = 0xE7AC055BL;
            for (g_35 = 0; (g_35 <= 0); g_35 += 1)
            { 
                int i;
                l_104[(g_35 + 2)] = g_23;
                if (g_84)
                    break;
                l_194 = (l_104[(g_35 + 1)] = (safe_div_func_uint64_t_u_u(p_11, l_104[(g_35 + 2)])));
            }
            if ((p_11 |= (l_195 = g_39)))
            { 
                return g_45;
            }
            else
            { 
                p_11 = l_109.f0.f0;
            }
        }
    }
    if (l_21[0][0][1])
    { 
        int32_t l_212 = 0x965E8A44L;
        int32_t l_225[4][5][2] = {{{(-7L),1L},{0x72FAC39FL,0x72FAC39FL},{0x575066FEL,(-1L)},{0x4E43E4D8L,0x166276FCL},{(-3L),0x4E0A7E5BL}},{{0x81D46329L,(-3L)},{0x8E4769F2L,(-7L)},{0x8E4769F2L,(-3L)},{0x81D46329L,0x4E0A7E5BL},{(-3L),0x166276FCL}},{{0x4E43E4D8L,(-1L)},{0x575066FEL,0x72FAC39FL},{0x72FAC39FL,1L},{(-7L),0x575066FEL},{(-7L),0xBC8BFC30L}},{{(-1L),0xBC8BFC30L},{(-7L),0x575066FEL},{(-7L),1L},{0x72FAC39FL,0x72FAC39FL},{0x575066FEL,(-1L)}}};
        struct S0 l_231 = {0xCF7A0FFEL,0x5D84L};
        int i, j, k;
        if (l_21[0][0][1])
        { 
            uint16_t l_198[2][5][1] = {{{0x7397L},{0UL},{0x7397L},{65531UL},{65531UL}},{{0x7397L},{0UL},{0x7397L},{65531UL},{65531UL}}};
            int32_t l_207 = 0x2AC288FBL;
            int i, j, k;
            if ((safe_add_func_int32_t_s_s(p_11, ((l_198[1][3][0] < (safe_unary_minus_func_int64_t_s(p_11))) , (safe_add_func_uint32_t_u_u((l_21[1][0][1] = (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((0L & g_179), 6)), g_72[0]))), p_11))))))
            { 
                l_207 = (!p_11);
                p_11 = ((safe_sub_func_uint16_t_u_u((((1UL || 1UL) <= (safe_div_func_int64_t_s_s((p_11 || 0xCA7FL), l_198[0][2][0]))) ^ g_86), p_11)) <= g_22);
                return l_207;
            }
            else
            { 
                g_32 = ((l_212 , (((safe_div_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_add_func_uint64_t_u_u((g_221 , p_11), (+(((safe_rshift_func_int8_t_s_s(l_114.f0.f1, 2)) == l_207) , 1UL)))) & 1L) , p_11), 0)), l_114.f0.f0)), g_221.f0.f0)) >= p_11) | g_23)) , l_212);
            }
        }
        else
        { 
            g_226--;
        }
        l_225[0][2][1] |= ((g_221.f0.f1 = (p_11 && ((l_231 , p_11) > (g_221.f0 , l_232[2][0][1])))) > l_232[2][0][1]);
        for (l_231.f1 = (-17); (l_231.f1 != 26); l_231.f1++)
        { 
            return g_35;
        }
    }
    else
    { 
        int64_t l_260 = 0xFC4C8207CD84E662LL;
        l_261 = (p_11 = (((safe_mod_func_int32_t_s_s(((((safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((l_260 = (safe_add_func_uint64_t_u_u((g_179 = (safe_lshift_func_int8_t_s_s(p_11, 4))), ((safe_sub_func_uint16_t_u_u(p_11, ((safe_mul_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((1L < (l_21[0][0][1] &= (((safe_add_func_int8_t_s_s(l_259, 7UL)) , g_39) >= l_20))), p_11)) < 18446744073709551615UL) == p_11), 0UL)), g_23)), g_30)) ^ g_141) < 18446744073709551615UL) <= 0xD8998BE7CB556FD8LL), g_226)) || g_22))) ^ 65535UL)))), 0)), p_11)) > 0x4120DA18L) != g_84) & p_11), 0xC75D3234L)) >= g_84) , 9L));
    }
    return l_21[1][0][0];
}



static int16_t  func_12(int32_t  p_13)
{ 
    uint64_t l_31 = 0x5E13CD4FE93046AALL;
    int32_t l_41[3][1][5] = {{{0xCA4D2440L,0xA53AA480L,0xA53AA480L,0xCA4D2440L,0xA53AA480L}},{{(-9L),(-9L),(-9L),(-9L),(-9L)}},{{0xA53AA480L,0xCA4D2440L,0xA53AA480L,0xA53AA480L,0xCA4D2440L}}};
    union U1 l_46[2] = {{{0UL,0xDFE9L}},{{0UL,0xDFE9L}}};
    int i, j, k;
    if (g_30)
    { 
        int32_t l_36 = 0x5678D568L;
        int32_t l_40 = 0x3978D11EL;
        g_32 ^= (g_22 &= (l_31 || 0xD5C0L));
        g_22 = (l_40 = (g_32 = ((safe_lshift_func_uint8_t_u_u(((g_35 = g_4[0][0][0]) > 0xB4L), (l_36 = 255UL))) & (g_39 ^= (safe_div_func_uint64_t_u_u(0x3333DB9622CFB647LL, 0x2F9E84EBF8C32619LL))))));
    }
    else
    { 
        for (p_13 = 0; p_13 < 3; p_13 += 1)
        {
            for (g_22 = 0; g_22 < 1; g_22 += 1)
            {
                for (g_30 = 0; g_30 < 5; g_30 += 1)
                {
                    l_41[p_13][g_22][g_30] = 1L;
                }
            }
        }
    }
    for (g_32 = (-17); (g_32 > 12); g_32 = safe_add_func_uint8_t_u_u(g_32, 1))
    { 
        int16_t l_44 = (-1L);
        int32_t l_47[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_47[i][j] = 0x61188795L;
        }
        for (p_13 = 0; p_13 < 3; p_13 += 1)
        {
            for (g_39 = 0; g_39 < 1; g_39 += 1)
            {
                for (l_31 = 0; l_31 < 5; l_31 += 1)
                {
                    l_41[p_13][g_39][l_31] = 2L;
                }
            }
        }
        g_22 = ((((l_44 >= ((((p_13 != (p_13 >= (g_45 = g_30))) || l_41[0][0][2]) , l_46[1]) , g_4[0][1][0])) == (-5L)) <= g_23) , p_13);
        l_47[0][1] = (-1L);
    }
    return g_23;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);

    }
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_85[i], "g_85[i]", print_hash_value);

    }
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_221.f0.f0, "g_221.f0.f0", print_hash_value);
    transparent_crc(g_221.f0.f1, "g_221.f0.f1", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
