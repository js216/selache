// SPDX-License-Identifier: MIT
// cctest_csmith_c4c568cf.c --- cctest case csmith_c4c568cf (csmith seed 3301271759)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa419c03a */

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

// Options:   -s 3301271759 -o /tmp/csmith_gen_h698fvkd/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int32_t  f0;
   uint16_t  f1;
   uint64_t  f2;
   const int32_t  f3;
   uint16_t  f4;
};

union U1 {
   struct S0  f0;
};

union U2 {
   uint64_t  f0;
   const struct S0  f1;
};

union U3 {
   const int32_t  f0;
   int16_t  f1;
   uint32_t  f2;
};


static int32_t g_2[6] = {(-6L),(-2L),(-6L),(-6L),(-2L),(-6L)};
static uint32_t g_56 = 0x46B7D869L;
static uint64_t g_70 = 0xAB372C247AFAE861LL;
static int8_t g_83 = 0x84L;
static union U2 g_86[7] = {{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL}};
static int32_t *g_102[6][3][6] = {{{&g_2[2],(void*)0,&g_2[2],&g_2[2],(void*)0,&g_2[2]},{(void*)0,&g_2[2],&g_2[2],(void*)0,&g_2[2],&g_2[2]},{&g_2[2],&g_2[2],&g_2[2],(void*)0,(void*)0,&g_2[1]}},{{(void*)0,&g_2[2],(void*)0,&g_2[2],(void*)0,&g_2[2]},{&g_2[4],&g_2[2],(void*)0,&g_2[2],(void*)0,&g_2[2]},{&g_2[2],&g_2[1],&g_2[2],&g_2[2],&g_2[1],&g_2[3]}},{{(void*)0,&g_2[2],&g_2[0],&g_2[2],&g_2[3],&g_2[2]},{&g_2[1],&g_2[4],&g_2[0],&g_2[1],&g_2[2],&g_2[2]},{&g_2[1],(void*)0,&g_2[2],(void*)0,&g_2[2],&g_2[1]}},{{&g_2[1],(void*)0,&g_2[2],&g_2[2],&g_2[2],&g_2[2]},{&g_2[2],&g_2[2],&g_2[2],&g_2[2],&g_2[1],&g_2[2]},{&g_2[2],(void*)0,(void*)0,&g_2[1],(void*)0,&g_2[1]}},{{&g_2[2],&g_2[2],&g_2[2],&g_2[1],(void*)0,&g_2[1]},{&g_2[2],(void*)0,&g_2[3],&g_2[1],&g_2[1],(void*)0},{&g_2[0],&g_2[2],&g_2[2],&g_2[4],&g_2[2],(void*)0}},{{&g_2[2],(void*)0,&g_2[2],&g_2[1],&g_2[2],(void*)0},{&g_2[3],(void*)0,&g_2[1],&g_2[2],&g_2[2],&g_2[2]},{&g_2[2],&g_2[4],&g_2[2],&g_2[2],&g_2[3],&g_2[1]}}};
static int32_t **g_101[5][3] = {{(void*)0,(void*)0,&g_102[5][0][4]},{&g_102[2][1][0],&g_102[2][1][0],&g_102[2][1][0]},{(void*)0,(void*)0,&g_102[5][0][4]},{&g_102[2][1][0],&g_102[2][1][0],&g_102[2][1][0]},{(void*)0,(void*)0,&g_102[5][0][4]}};
static uint16_t g_104 = 0UL;
static uint32_t *g_111 = &g_56;
static uint32_t **g_110 = &g_111;
static int32_t g_114 = (-1L);
static union U3 g_121[6] = {{1L},{1L},{1L},{1L},{1L},{1L}};
static union U1 g_126 = {{0xD8298C98L,4UL,0xE463D7759B496B13LL,0xC178791AL,0UL}};
static uint32_t ***g_161 = &g_110;
static uint32_t g_168 = 0x9E08EB9DL;
static union U2 g_209 = {0x1348666C92315917LL};
static uint16_t *g_240 = (void*)0;
static uint16_t g_272 = 0x6552L;
static int32_t *g_293 = &g_114;
static const uint32_t *g_304 = &g_56;
static const uint32_t **g_303 = &g_304;
static uint8_t g_333 = 0UL;
static uint8_t *g_337[7][7] = {{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333}};
static uint8_t **g_336 = &g_337[5][2];
static uint32_t g_365 = 0x62E18FD1L;
static int64_t g_367 = 0L;
static uint16_t g_369 = 65535UL;
static struct S0 g_370[4][3] = {{{1L,0x671FL,3UL,-1L,1UL},{1L,0x671FL,3UL,-1L,1UL},{1L,0x671FL,3UL,-1L,1UL}},{{1L,0x671FL,3UL,-1L,1UL},{1L,0x671FL,3UL,-1L,1UL},{1L,0x671FL,3UL,-1L,1UL}},{{1L,0x671FL,3UL,-1L,1UL},{1L,0x671FL,3UL,-1L,1UL},{1L,0x671FL,3UL,-1L,1UL}},{{1L,0x671FL,3UL,-1L,1UL},{1L,0x671FL,3UL,-1L,1UL},{1L,0x671FL,3UL,-1L,1UL}}};
static union U2 *g_484 = &g_86[5];
static union U2 **g_483 = &g_484;
static int8_t g_511 = 0L;
static int8_t *g_510 = &g_511;
static const int8_t g_514 = 4L;
static const union U2 g_552[7] = {{0x3A5DC26513F886E5LL},{0x3A5DC26513F886E5LL},{0x3A5DC26513F886E5LL},{0x3A5DC26513F886E5LL},{0x3A5DC26513F886E5LL},{0x3A5DC26513F886E5LL},{0x3A5DC26513F886E5LL}};
static union U3 *g_569[3] = {&g_121[4],&g_121[4],&g_121[4]};
static union U3 **g_568 = &g_569[1];
static uint16_t g_576 = 0x553FL;
static int32_t g_579 = 0xF75D4CFEL;
static uint64_t *g_737[1] = {(void*)0};
static uint64_t **g_736 = &g_737[0];
static uint64_t ***g_735 = &g_736;
static uint64_t **** const g_734 = &g_735;
static uint64_t **** const *g_733 = &g_734;
static union U1 *g_810 = (void*)0;
static uint64_t ** const *g_827 = &g_736;
static uint64_t ** const * const *g_826 = &g_827;
static uint64_t ** const * const **g_825 = &g_826;
static const uint8_t ***g_966 = (void*)0;



static int32_t  func_1(void);
static uint8_t  func_12(int8_t  p_13, uint32_t  p_14, uint64_t  p_15);
static uint32_t  func_16(int16_t  p_17, uint16_t  p_18, int32_t  p_19, struct S0  p_20, uint64_t  p_21);
static uint32_t  func_30(union U1  p_31, uint8_t  p_32, int8_t  p_33, int32_t  p_34, uint16_t  p_35);
static union U1  func_36(uint8_t  p_37);
static int32_t  func_38(union U3  p_39);
static union U3  func_40(uint8_t  p_41);
static uint8_t  func_42(int32_t  p_43, int32_t  p_44);




static int32_t  func_1(void)
{ 
    uint64_t l_9 = 3UL;
    int64_t l_136 = 0x10AB7D55596E0544LL;
    uint64_t ** const * const **l_742 = (void*)0;
    int32_t l_769[6] = {0x6207F2B0L,0x6207F2B0L,0xCA8932FAL,0x6207F2B0L,0x6207F2B0L,0xCA8932FAL};
    uint32_t ** const *l_856 = &g_110;
    uint32_t ** const **l_855 = &l_856;
    union U2 l_895 = {0UL};
    const uint32_t l_908 = 7UL;
    int16_t l_921 = 0x4E47L;
    union U1 *l_949 = &g_126;
    uint16_t l_1002 = 65526UL;
    struct S0 *l_1018 = (void*)0;
    int i;
lbl_927:
    for (g_2[2] = 29; (g_2[2] != (-16)); --g_2[2])
    { 
        uint32_t l_22 = 0x6FDD8FB8L;
        int32_t l_23 = 0x1E60E779L;
        int64_t *l_366 = &g_367;
        uint16_t *l_368 = &g_369;
        uint64_t ***l_740[3];
        uint64_t ***l_741 = (void*)0;
        uint64_t **** const l_739[7] = {(void*)0,(void*)0,&l_740[0],(void*)0,(void*)0,&l_740[0],(void*)0};
        uint64_t **** const *l_738 = &l_739[3];
        uint64_t ** const * const l_745 = (void*)0;
        uint64_t ** const * const *l_744 = &l_745;
        uint64_t ** const * const **l_743 = &l_744;
        uint64_t l_766 = 0xB6BFB0A337A9695BLL;
        int16_t *l_767 = &g_121[1].f1;
        int32_t *l_768 = &g_370[3][1].f0;
        int32_t l_774 = 0xB1D60CEBL;
        int32_t l_775 = 1L;
        int32_t l_776 = 0xF862AE27L;
        int32_t l_777 = (-1L);
        int32_t l_778 = (-1L);
        int32_t l_779 = 0xB4650D37L;
        uint64_t l_780 = 18446744073709551611UL;
        int64_t l_787 = 0xEA59F14A716A95D6LL;
        uint8_t *l_851 = &g_333;
        struct S0 l_859 = {0L,0x7A82L,0x6B6E9D5660E98AEALL,1L,0x8AD2L};
        int i;
        for (i = 0; i < 3; i++)
            l_740[i] = &g_736;
    }
    if ((0UL | (*g_304)))
    { 
        int32_t l_896 = 0x00B6D0C8L;
        union U3 l_899[4] = {{-1L},{-1L},{-1L},{-1L}};
        int16_t *l_905[1];
        int64_t l_907 = 7L;
        int32_t l_923 = 0x93BC978FL;
        int32_t l_934 = (-6L);
        int32_t l_935 = 0xC6043A9FL;
        int32_t l_936 = 0x0FE3438FL;
        int64_t l_938 = 1L;
        int32_t l_939 = (-1L);
        int32_t l_940 = 0xD9FDCF43L;
        int32_t l_941 = 1L;
        int32_t l_943[7] = {1L,1L,1L,1L,1L,1L,1L};
        int32_t *l_954 = (void*)0;
        int8_t l_1011 = (-2L);
        int i;
        for (i = 0; i < 1; i++)
            l_905[i] = &l_899[3].f1;
        for (g_272 = 2; (g_272 <= 6); g_272 += 1)
        { 
            return g_370[3][1].f3;
        }
        if ((((safe_mul_func_int16_t_s_s((+((*g_293) = (((safe_div_func_uint32_t_u_u(0xAEAA22D7L, (+(safe_lshift_func_int8_t_s_u((*g_510), (((*g_826) != (void*)0) , ((((**g_336) == ((safe_unary_minus_func_uint32_t_u((+(l_895 , l_896)))) >= l_9)) , (*g_483)) != (*g_483)))))))) >= g_209.f0) ^ 0L))), l_895.f0)) & l_9) , l_136))
        { 
            uint16_t l_906 = 5UL;
            int64_t l_912 = 0x22489478DA861127LL;
            int32_t l_924[4] = {(-4L),(-4L),(-4L),(-4L)};
            int32_t *l_928 = &g_2[3];
            int32_t *l_929 = &g_2[2];
            int32_t *l_930 = (void*)0;
            int32_t *l_931 = &g_2[2];
            int32_t *l_932 = &l_923;
            int32_t *l_933[2];
            int32_t l_937[1][3];
            int16_t l_942 = 2L;
            uint16_t l_944 = 0xFB2DL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_933[i] = (void*)0;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_937[i][j] = 9L;
            }
            for (g_126.f0.f2 = (-19); (g_126.f0.f2 >= 47); g_126.f0.f2 = safe_add_func_uint64_t_u_u(g_126.f0.f2, 9))
            { 
                uint64_t **l_909 = &g_737[0];
                int32_t l_920 = 0x62F84413L;
                for (g_369 = 0; (g_369 <= 0); g_369 += 1)
                { 
                    uint16_t *l_913[1][7] = {{&g_370[3][1].f1,&g_370[3][1].f4,&g_370[3][1].f4,&g_370[3][1].f1,&g_370[3][1].f4,&g_370[3][1].f4,&g_370[3][1].f1}};
                    int32_t l_922 = (-1L);
                    int i, j;
                    l_907 = (l_899[3] , (+(func_36((--(**g_336))) , ((*g_293) = (((**g_336) , ((((((safe_mod_func_int16_t_s_s((0UL | (g_240 != (g_114 , l_905[0]))), g_168)) , g_737[g_369]) == g_737[g_369]) | 65535UL) == l_895.f0) || (*g_510))) > l_906)))));
                    if (l_908)
                        continue;
                    (*g_293) ^= ((l_909 != (void*)0) != (l_924[3] = ((l_906 == (l_912 ^ (**g_336))) > ((g_370[3][1].f4 = 1UL) > (l_923 = (safe_add_func_uint64_t_u_u(((((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint8_t_u_u((l_899[3].f2 < 65535UL), l_920)) > l_921) , (*g_510)), l_907)) > l_922) | l_920) & l_920), 0xF0A72372C26D513FLL)))))));
                }
                for (g_365 = 0; (g_365 > 12); g_365 = safe_add_func_uint32_t_u_u(g_365, 4))
                { 
                    if (l_924[3])
                        break;
                    if (l_896)
                        goto lbl_927;
                }
            }
            l_944++;
        }
        else
        { 
            int32_t *l_952[4];
            uint32_t l_962[6] = {0x8E2C9B6DL,0x8E2C9B6DL,0x8E2C9B6DL,0x8E2C9B6DL,0x8E2C9B6DL,0x8E2C9B6DL};
            const uint8_t ***l_965 = (void*)0;
            uint64_t l_989 = 0UL;
            uint32_t l_1003[2];
            int32_t l_1008 = 0x8C808A0DL;
            int32_t l_1010 = (-7L);
            uint16_t *l_1033 = &g_576;
            uint8_t l_1042 = 0x81L;
            int i;
            for (i = 0; i < 4; i++)
                l_952[i] = &l_943[3];
            for (i = 0; i < 2; i++)
                l_1003[i] = 2UL;
            if ((safe_rshift_func_int16_t_s_u((g_121[1].f1 |= ((l_938 > 1L) > l_943[1])), ((((void*)0 == l_949) , &g_568) != (void*)0))))
            { 
                uint32_t l_955 = 0UL;
                int32_t *l_956 = &l_934;
lbl_961:
                for (l_895.f0 = 0; (l_895.f0 > 10); ++l_895.f0)
                { 
                    int32_t **l_953[6][5];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_953[i][j] = &g_293;
                    }
                    l_954 = l_952[0];
                    return l_955;
                }
                for (g_272 = 0; (g_272 <= 5); g_272 += 1)
                { 
                    int i;
                    return g_2[g_272];
                }
                for (l_940 = 0; (l_940 <= 2); l_940 += 1)
                { 
                    l_956 = &l_943[6];
                    (*g_293) = 0L;
                    return g_126.f0.f4;
                }
                if ((1UL && (g_121[1].f1 |= g_209.f0)))
                { 
                    uint16_t *l_957 = &g_370[3][1].f4;
                    (*l_956) = ((((*l_957)++) | g_579) || (~(*l_956)));
                }
                else
                { 
                    if (g_126.f0.f2)
                        goto lbl_961;
                    --l_962[3];
                    (*g_483) = (*g_483);
                }
                g_966 = l_965;
            }
            else
            { 
                uint64_t ** const **l_991[3];
                uint64_t ** const ***l_990 = &l_991[0];
                const int32_t l_992[5][3][6] = {{{(-1L),0x12995BDDL,1L,1L,0x12995BDDL,(-1L)},{(-4L),(-1L),1L,(-1L),(-4L),(-4L)},{6L,(-1L),(-1L),6L,0x12995BDDL,6L}},{{6L,0x12995BDDL,6L,(-1L),(-1L),6L},{(-4L),(-4L),(-1L),1L,(-1L),(-4L)},{(-1L),0x12995BDDL,1L,1L,0x12995BDDL,(-1L)}},{{(-4L),(-1L),1L,(-1L),(-4L),(-4L)},{6L,(-1L),(-1L),6L,0x12995BDDL,6L},{6L,0x12995BDDL,6L,(-1L),(-1L),6L}},{{(-4L),(-4L),(-1L),1L,(-1L),(-4L)},{(-1L),0x12995BDDL,1L,1L,0x12995BDDL,(-1L)},{(-4L),(-1L),1L,(-1L),(-4L),(-4L)}},{{6L,(-1L),(-1L),6L,0x12995BDDL,6L},{6L,0x12995BDDL,6L,(-1L),(-1L),6L},{(-4L),(-4L),(-1L),1L,(-1L),(-4L)}}};
                union U1 l_1001 = {{0xD228D659L,4UL,18446744073709551607UL,0x556D6F91L,65535UL}};
                uint16_t *l_1009[3];
                int32_t l_1012 = 0xAF18E62BL;
                struct S0 *l_1017 = &g_370[2][2];
                uint16_t *l_1035[5];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_991[i] = &g_827;
                for (i = 0; i < 3; i++)
                    l_1009[i] = &g_272;
                for (i = 0; i < 5; i++)
                    l_1035[i] = &g_369;
                for (l_940 = (-1); (l_940 >= (-30)); l_940 = safe_sub_func_int8_t_s_s(l_940, 2))
                { 
                    uint32_t l_984 = 0xF13B0F6EL;
                    int64_t *l_993 = &l_136;
                    int32_t l_994[2][7][1];
                    uint16_t *l_995 = (void*)0;
                    uint16_t *l_996[2];
                    const int32_t *l_998[7][3] = {{&l_943[6],&l_943[6],&l_943[6]},{&g_2[1],&g_2[1],&g_2[1]},{&l_943[6],&l_943[6],&l_943[6]},{&g_2[1],&g_2[1],&g_2[1]},{&l_943[6],&l_943[6],&l_943[6]},{&g_2[1],&g_2[1],&g_2[1]},{&l_943[6],&l_943[6],&l_943[6]}};
                    const int32_t **l_997 = &l_998[1][2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_994[i][j][k] = 0xE7E956C5L;
                        }
                    }
                    for (i = 0; i < 2; i++)
                        l_996[i] = &g_370[3][1].f4;
                    (*g_293) ^= ((g_126.f0.f1 = (((safe_unary_minus_func_uint64_t_u((l_994[1][2][0] = (safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_div_func_int64_t_s_s(((*l_993) &= (safe_mul_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s(((l_984 | ((**g_336) && (*g_510))) == 3L), (safe_sub_func_int32_t_s_s((((((safe_add_func_uint8_t_u_u(0x8AL, l_989)) , l_990) != &g_826) == l_984) | 0x4DE7394AL), 0xEBEC6995L)))), l_769[1])), l_992[2][0][0])) & 1UL) && (-6L)), 0xEC94L))), l_984)), l_895.f0)), l_984))))) || l_984) && 0UL)) && l_994[1][2][0]);
                    (*g_293) = (*g_293);
                    (*l_997) = &l_992[4][1][2];
                }
                if ((((func_36(l_136) , (~((((l_895.f0 & ((((((~l_992[1][0][5]) && (l_1001 , l_1002)) & g_126.f0.f1) || 1L) || l_1001.f0.f1) , l_992[2][0][2])) > 5UL) != 0x18L) , (*g_510)))) , 0x84L) , 0x021F8C14L))
                { 
                    uint32_t l_1013 = 0xE12667EDL;
                    int32_t l_1016 = (-1L);
                    (*g_568) = (*g_568);
                    (*g_293) = (((((l_1003[1] != (**g_110)) && ((safe_sub_func_uint8_t_u_u(0xA9L, ((safe_div_func_uint64_t_u_u(0xD62C7E5C84EACA65LL, l_1008)) == (&g_104 == l_1009[0])))) <= (**g_336))) <= 1UL) ^ 0x7BD0035BL) == l_921);
                    l_1013--;
                    l_1016 = l_1013;
                }
                else
                { 
                    int32_t **l_1019[3];
                    uint16_t **l_1032 = &l_1009[0];
                    uint16_t **l_1034 = (void*)0;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1019[i] = &g_102[2][1][0];
                    (*g_293) = (*g_293);
                    if (l_895.f0)
                        goto lbl_1020;
                    l_1018 = l_1017;
lbl_1020:
                    l_952[1] = &l_934;
                    (*g_293) |= (safe_mod_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s((safe_add_func_uint16_t_u_u(((*l_1033) = ((safe_lshift_func_int16_t_s_u(0x90D6L, (g_365 == (safe_mul_func_int8_t_s_s((((*l_1032) = l_1009[2]) == ((*g_510) , (l_1035[3] = l_1033))), (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(l_992[3][1][5], 2L)), (**g_336))), 0UL))))))) ^ 0L)), 1L)))) || 1UL), l_1042)) , 1L), l_1012));
                }
                (*g_293) = 1L;
            }
        }
    }
    else
    { 
        return g_370[3][1].f3;
    }
    return l_9;
}



static uint8_t  func_12(int8_t  p_13, uint32_t  p_14, uint64_t  p_15)
{ 
    int8_t l_631[5] = {0x8EL,0x8EL,0x8EL,0x8EL,0x8EL};
    int32_t l_639[2];
    union U2 * const * const l_640 = &g_484;
    union U2 **l_641 = &g_484;
    uint8_t l_646 = 7UL;
    int32_t l_661 = 3L;
    int32_t l_662 = 0x05ED7703L;
    union U3 **l_670 = &g_569[1];
    uint64_t *l_714 = &g_370[3][1].f2;
    uint64_t **l_713 = &l_714;
    uint64_t ***l_712 = &l_713;
    uint64_t ****l_711 = &l_712;
    uint32_t l_722 = 4294967295UL;
    uint64_t *****l_730[4] = {&l_711,&l_711,&l_711,&l_711};
    int64_t l_732[5];
    int i;
    for (i = 0; i < 2; i++)
        l_639[i] = 0x031442B3L;
    for (i = 0; i < 5; i++)
        l_732[i] = 0xA9DE90A0FD47910ELL;
    if ((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(l_631[2], (safe_add_func_uint32_t_u_u((0x91L & (safe_mul_func_int16_t_s_s((!(((safe_add_func_int32_t_s_s(l_631[3], l_631[2])) , (**g_483)) , (p_13 || ((((l_639[1] ^= (p_13 & g_370[3][1].f0)) >= g_168) , l_640) != l_641)))), p_15))), l_631[4])))), p_15)))
    { 
        int32_t *l_642 = &g_114;
        int32_t *l_643[3];
        int64_t l_644 = 0x1DCE72DFB2EEA22FLL;
        int64_t l_645 = (-1L);
        int16_t *l_660[5] = {&g_121[1].f1,&g_121[1].f1,&g_121[1].f1,&g_121[1].f1,&g_121[1].f1};
        uint64_t *l_665 = &g_126.f0.f2;
        int64_t l_719[4];
        int32_t l_720 = 0x5C948132L;
        int i;
        for (i = 0; i < 3; i++)
            l_643[i] = &g_579;
        for (i = 0; i < 4; i++)
            l_719[i] = 0x86DB550C7C3DA476LL;
        --l_646;
        l_643[1] = &l_639[1];
        if (p_15)
            goto lbl_649;
lbl_649:
        (*l_641) = (*g_483);
        if ((safe_mul_func_int16_t_s_s(((((safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(l_639[1], p_15)), (*l_642))), (p_15 && (l_662 = (l_661 |= l_639[0]))))), ((*g_111) = (safe_div_func_uint64_t_u_u(p_13, ((*l_665) |= ((7L < p_15) & 1L))))))) , 4L) < l_646) && l_631[3]), p_14)))
        { 
            int32_t *l_666 = &l_662;
            uint64_t * const *l_689 = &l_665;
            uint64_t * const **l_688 = &l_689;
            uint32_t l_700 = 4294967295UL;
            int32_t *l_705 = &l_639[0];
            struct S0 l_710 = {-3L,0xFC41L,0xC9E12E63FC7476B6LL,-1L,1UL};
            int32_t l_718 = (-8L);
            int32_t l_721 = 0xE2C74967L;
            int32_t l_725[2];
            uint64_t *****l_729 = &l_711;
            int i;
            for (i = 0; i < 2; i++)
                l_725[i] = 5L;
            l_666 = l_642;
            for (l_646 = 0; (l_646 <= 2); l_646 += 1)
            { 
                uint16_t *l_675[3];
                int32_t *l_676 = &l_662;
                int32_t **l_677[5][4] = {{&l_642,(void*)0,&g_102[2][1][0],&g_102[2][1][0]},{&l_676,&l_676,&l_642,&g_102[2][1][0]},{&l_666,(void*)0,&l_666,&l_642},{&l_666,&l_642,&l_642,&l_666},{&l_676,&l_642,&g_102[2][1][0],&l_642}};
                uint64_t * const **l_691[7][2][5] = {{{&l_689,(void*)0,&l_689,(void*)0,(void*)0},{&l_689,&l_689,&l_689,&l_689,&l_689}},{{(void*)0,&l_689,&l_689,(void*)0,&l_689},{(void*)0,(void*)0,&l_689,&l_689,(void*)0}},{{&l_689,&l_689,&l_689,&l_689,&l_689},{(void*)0,&l_689,&l_689,&l_689,(void*)0}},{{&l_689,&l_689,(void*)0,&l_689,&l_689},{&l_689,&l_689,&l_689,(void*)0,&l_689}},{{&l_689,&l_689,&l_689,&l_689,(void*)0},{&l_689,&l_689,(void*)0,&l_689,&l_689}},{{(void*)0,&l_689,(void*)0,(void*)0,&l_689},{&l_689,&l_689,(void*)0,&l_689,(void*)0}},{{&l_689,&l_689,(void*)0,&l_689,&l_689},{&l_689,&l_689,(void*)0,(void*)0,&l_689}}};
                uint64_t **l_693[3];
                uint64_t ***l_692[2];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_675[i] = &g_126.f0.f4;
                for (i = 0; i < 3; i++)
                    l_693[i] = &l_665;
                for (i = 0; i < 2; i++)
                    l_692[i] = &l_693[0];
                l_643[1] = (l_642 = ((p_15 , func_36((((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_s((l_661 = ((void*)0 != l_670)), 7)))) && g_126.f0.f3) , (((*l_642) ^= (safe_mod_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u((g_576 = (&g_83 != &l_631[3])), (0xE08940D1L ^ 0xDE22C0DEL))) & p_14), g_579))) >= g_272)))) , l_676));
                for (g_369 = 0; (g_369 <= 2); g_369 += 1)
                { 
                    uint64_t * const ***l_690[4][2] = {{&l_688,&l_688},{&l_688,&l_688},{&l_688,&l_688},{&l_688,&l_688}};
                    int i, j;
                    (*l_676) &= (safe_mod_func_int16_t_s_s(p_14, ((safe_add_func_uint8_t_u_u((p_13 && (safe_lshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u((p_15 , ((safe_sub_func_int8_t_s_s((((l_691[1][0][2] = l_688) != l_692[0]) ^ p_14), (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(0x0EL, 255UL)), g_168)), g_56)))) && p_13)), g_126.f0.f1)), g_114))), (-9L))) || 0x7DL)));
                    if (p_15)
                        continue;
                    ++l_700;
                }
            }
            for (g_367 = 0; (g_367 <= (-29)); g_367--)
            { 
                int32_t **l_706 = &l_643[1];
                int8_t **l_707 = &g_510;
                int8_t **l_715[1];
                int32_t l_717[1];
                uint32_t l_726[3];
                int i;
                for (i = 0; i < 1; i++)
                    l_715[i] = &g_510;
                for (i = 0; i < 1; i++)
                    l_717[i] = 0xF41D2A77L;
                for (i = 0; i < 3; i++)
                    l_726[i] = 0UL;
                (*l_706) = l_705;
                for (g_104 = 1; (g_104 <= 6); g_104 += 1)
                { 
                    int8_t l_716 = 0x5BL;
                    if ((*l_705))
                        break;
                    l_707 = &g_510;
                    l_639[1] = (((&g_70 != l_665) | ((((safe_add_func_uint8_t_u_u(((l_710 , l_711) == (void*)0), p_15)) , ((l_707 == l_715[0]) >= p_14)) <= p_13) > 1UL)) < l_716);
                    if (l_716)
                        break;
                    if (l_639[0])
                        break;
                }
                ++l_722;
                (*l_670) = (*g_568);
                --l_726[1];
            }
            l_730[1] = l_729;
            (*l_642) ^= (&p_14 == &l_700);
        }
        else
        { 
            (*l_642) = ((**l_670) , p_13);
        }
    }
    else
    { 
        int32_t **l_731 = &g_102[2][1][0];
        (*l_731) = &l_639[1];
    }
    return l_732[1];
}



static uint32_t  func_16(int16_t  p_17, uint16_t  p_18, int32_t  p_19, struct S0  p_20, uint64_t  p_21)
{ 
    int32_t *l_371 = &g_114;
    int32_t *l_372 = &g_114;
    int32_t *l_373 = &g_114;
    int32_t *l_374 = &g_114;
    int32_t *l_375[2];
    int32_t l_376 = 0xEF88663BL;
    int16_t l_377 = 0x60B8L;
    uint8_t l_378 = 1UL;
    int32_t **l_381 = &g_102[2][1][0];
    int8_t *l_418 = (void*)0;
    int8_t * const l_419 = &g_83;
    union U1 l_521 = {{-1L,0x50B7L,18446744073709551615UL,0xE21B30C6L,0x659CL}};
    int16_t l_540 = 5L;
    const union U2 *l_549 = (void*)0;
    int32_t l_567[1];
    int i;
    for (i = 0; i < 2; i++)
        l_375[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_567[i] = 0x037D8E3CL;
    ++l_378;
    (*l_371) ^= p_20.f1;
lbl_475:
    (*l_381) = &l_376;
    for (g_168 = 0; (g_168 <= 6); g_168 += 1)
    { 
        uint32_t l_382 = 4294967295UL;
        uint16_t *l_408 = (void*)0;
        uint16_t *l_409[1][7][4] = {{{&g_104,&g_104,&g_272,&g_369},{&g_104,&g_369,&g_370[3][1].f4,&g_104},{(void*)0,&g_369,(void*)0,&g_370[3][1].f4},{&g_126.f0.f1,&g_369,&g_272,&g_104},{&g_369,&g_369,&g_369,&g_369},{(void*)0,&g_104,&g_369,&g_370[3][1].f4},{&g_369,&g_126.f0.f1,&g_272,&g_126.f0.f1}}};
        int8_t *l_412 = (void*)0;
        int8_t *l_413[5][7] = {{&g_83,(void*)0,&g_83,(void*)0,&g_83,&g_83,(void*)0},{&g_83,&g_83,&g_83,(void*)0,(void*)0,&g_83,&g_83},{(void*)0,&g_83,&g_83,&g_83,&g_83,(void*)0,&g_83},{&g_83,(void*)0,(void*)0,&g_83,&g_83,&g_83,(void*)0},{&g_83,&g_83,(void*)0,&g_83,(void*)0,&g_83,&g_83}};
        int32_t l_414 = 0x052055CDL;
        int8_t **l_417[1];
        uint32_t **l_430 = (void*)0;
        int32_t l_431 = (-4L);
        int32_t l_432 = 3L;
        int32_t l_433 = 0L;
        int8_t l_457 = 0xB4L;
        int32_t l_458 = (-10L);
        int32_t l_459[1][7][6] = {{{(-7L),(-5L),(-7L),(-1L),(-7L),(-5L)},{0x626F0A07L,(-5L),0x7D8FBD36L,(-5L),0x626F0A07L,(-5L)},{(-7L),(-1L),(-7L),(-5L),(-7L),(-1L)},{0x626F0A07L,(-1L),0x7D8FBD36L,(-1L),0x626F0A07L,(-1L)},{(-7L),(-5L),(-7L),(-1L),(-7L),(-5L)},{0x626F0A07L,(-5L),0x7D8FBD36L,(-5L),0x626F0A07L,(-5L)},{(-7L),(-1L),(-7L),(-5L),(-7L),(-1L)}}};
        uint8_t l_462 = 9UL;
        int32_t l_508 = 0x24FD4D22L;
        const uint64_t *l_519[2];
        const uint64_t **l_518[2];
        int32_t *l_522 = (void*)0;
        const union U2 l_564 = {0x0EC9D6DFFC1D8BEDLL};
        uint16_t l_573 = 65531UL;
        int64_t l_601 = 0x03DAD9E1F006597ELL;
        int32_t l_612 = 0x4CA70926L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_417[i] = &l_412;
        for (i = 0; i < 2; i++)
            l_519[i] = &g_70;
        for (i = 0; i < 2; i++)
            l_518[i] = &l_519[1];
        (*l_374) ^= l_382;
        for (p_20.f2 = 0; (p_20.f2 <= 6); p_20.f2 += 1)
        { 
            uint16_t l_403 = 65530UL;
            if (p_20.f0)
                break;
            for (g_126.f0.f4 = 0; (g_126.f0.f4 <= 2); g_126.f0.f4 += 1)
            { 
                int32_t *l_396 = &g_370[3][1].f0;
                int32_t l_404 = 0L;
                int i, j;
                (*l_372) ^= (safe_add_func_uint16_t_u_u((1UL | (safe_add_func_uint64_t_u_u(p_20.f1, (safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(0x1AF774C9L, (safe_mod_func_int32_t_s_s((~(safe_sub_func_uint32_t_u_u((((*l_396) = 4L) , (safe_add_func_uint64_t_u_u(((p_20.f2 != ((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(p_18, 2)), 0xC6EA5808736BB284LL)) > 2L)) < l_403), p_20.f4))), p_19))), 0xBBFF3FBBL)))) <= 0x65L), l_404))))), p_20.f3));
                return l_403;
            }
        }
        if (l_382)
            break;
        (*l_374) |= (l_433 &= (l_432 = ((l_414 = (safe_div_func_int16_t_s_s(p_20.f0, (+(g_369--))))) || ((safe_mul_func_int16_t_s_s((((-9L) != (((g_370[3][1].f1 , ((g_83 = (((l_418 = &g_83) != l_419) || (safe_add_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u(g_83, 12)) && (safe_div_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(l_414, p_21)) >= l_414) || p_21), p_20.f4)) && p_19) , 5UL), g_370[3][1].f4))) || 65529UL), p_20.f2)))) != 2L)) , l_430) == l_430)) && l_431), g_86[5].f0)) , g_370[3][1].f0))));
        for (g_126.f0.f2 = 0; (g_126.f0.f2 <= 6); g_126.f0.f2 += 1)
        { 
            int64_t l_434 = 0x820D95D459A4C5D2LL;
            union U3 *l_439 = &g_121[1];
            for (g_209.f0 = 0; (g_209.f0 <= 2); g_209.f0 += 1)
            { 
                int32_t l_435 = (-9L);
                for (p_19 = 6; (p_19 >= 2); p_19 -= 1)
                { 
                    uint16_t l_436 = 0x3BD0L;
                    ++l_436;
                }
            }
            (*l_381) = (void*)0;
            for (l_378 = 0; (l_378 <= 6); l_378 += 1)
            { 
                for (l_376 = 0; (l_376 <= 1); l_376 += 1)
                { 
                    union U3 **l_440 = &l_439;
                    int i, j;
                    l_375[l_376] = &l_376;
                    (*l_440) = l_439;
                    return p_21;
                }
            }
        }
        for (g_83 = 6; (g_83 >= 0); g_83 -= 1)
        { 
            union U2 l_442 = {18446744073709551610UL};
            int32_t l_452 = (-1L);
            int32_t l_460 = 0x04F1598DL;
            uint8_t l_472 = 1UL;
            union U2 **l_485 = &g_484;
            uint16_t *l_496 = &g_126.f0.f4;
            uint8_t l_497 = 0x8AL;
            int32_t *l_523 = (void*)0;
            int32_t l_532 = 0x3C297416L;
            int32_t l_534 = 0x1EB56D42L;
            int32_t l_535[6][4][3] = {{{0L,1L,0x00A10461L},{0L,0xD2539F30L,0x82AFBBB4L},{0xF1577998L,0xB869FEBCL,0xF1577998L},{0xCC2D0981L,(-1L),0x2FF4B271L}},{{0L,0xB869FEBCL,0x4767FBA4L},{0xD2539F30L,0xD2539F30L,8L},{0xDF544292L,1L,0xF1577998L},{0xD2539F30L,0x82AFBBB4L,(-1L)}},{{0L,0L,0x00A10461L},{0xCC2D0981L,0xD2539F30L,(-1L)},{0xF1577998L,0L,0xF1577998L},{0L,(-1L),8L}},{{0L,0L,0x4767FBA4L},{(-1L),0xD2539F30L,0x2FF4B271L},{0xDF544292L,0L,0xF1577998L},{(-1L),0x82AFBBB4L,0x82AFBBB4L}},{{0L,1L,0x00A10461L},{0L,0xD2539F30L,0x82AFBBB4L},{0xF1577998L,0xB869FEBCL,0xF1577998L},{0xCC2D0981L,(-1L),0x2FF4B271L}},{{0L,0xB869FEBCL,0x4767FBA4L},{0xD2539F30L,0xD2539F30L,8L},{0xDF544292L,1L,0xF1577998L},{0xD2539F30L,0x82AFBBB4L,(-1L)}}};
            int64_t l_539 = 4L;
            uint64_t l_542 = 0x4C0E781344D759F0LL;
            int32_t l_596[7] = {0x6E318724L,0x6E318724L,0xD9775CD9L,0x6E318724L,0x6E318724L,0xD9775CD9L,0x6E318724L};
            int32_t l_607 = 0xDBF1B769L;
            int i, j, k;
            if ((~(((*l_371) = (((((l_442 , (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((~(g_126 , p_20.f0)), (safe_lshift_func_int8_t_s_u((((l_452 = (p_20.f4 = (0x7CL | p_17))) < ((0x7C153BD5B5AC59ABLL == (((0xD0D20FDDF2EE573CLL > 0xD33D1DC410662D8ELL) ^ p_20.f2) && l_432)) == (-1L))) , p_20.f1), (*l_373))))), p_19))) == l_442.f0) || p_18) ^ l_442.f0) && p_20.f2)) <= (*g_111))))
            { 
                int64_t l_453 = 0x77189A7CE775CA79LL;
                int32_t l_454 = 6L;
                int32_t l_455 = 0xF2A18127L;
                int32_t l_456[2][3];
                int8_t l_461 = 0x13L;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_456[i][j] = (-4L);
                }
                l_462++;
                (*l_381) = &l_460;
                if (((*l_372) = (g_369 > (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_19, (+0x90L))), (safe_unary_minus_func_int32_t_s((((l_452 |= p_20.f2) == l_442.f0) , (*l_372)))))))))
                { 
                    int32_t *l_471[7][4][1] = {{{&l_456[1][2]},{&l_459[0][2][4]},{&l_456[1][2]},{(void*)0}},{{&l_433},{(void*)0},{&l_456[1][2]},{&l_459[0][2][4]}},{{&l_456[1][2]},{(void*)0},{&l_433},{(void*)0}},{{&l_456[1][2]},{&l_459[0][2][4]},{&l_456[1][2]},{(void*)0}},{{&l_433},{(void*)0},{&l_456[1][2]},{&l_459[0][2][4]}},{{&l_456[1][2]},{(void*)0},{&l_433},{(void*)0}},{{&l_456[1][2]},{&l_459[0][2][4]},{&l_456[1][2]},{(void*)0}}};
                    int i, j, k;
                    (*l_381) = l_471[4][2][0];
                }
                else
                { 
                    ++l_472;
                    if (p_20.f4)
                        continue;
                }
                if (g_369)
                    goto lbl_475;
            }
            else
            { 
                int32_t l_491 = 0xE4EF5B7BL;
                int32_t l_498 = 0x3193D3CCL;
                for (p_17 = 2; (p_17 >= 0); p_17 -= 1)
                { 
                    int i, j;
                    if (p_18)
                        break;
                }
                for (l_462 = 0; (l_462 <= 6); l_462 += 1)
                { 
                    int32_t l_480 = 1L;
                    (*g_293) = (safe_sub_func_uint32_t_u_u((0x790C82AE2A51389ELL != (((safe_lshift_func_uint16_t_u_u((*l_371), ((l_480 <= (((safe_rshift_func_uint8_t_u_u((g_483 == l_485), 6)) > 1UL) <= ((safe_sub_func_int32_t_s_s((p_21 ^ 0L), 0xC1FE6ABAL)) , p_17))) <= p_20.f1))) != 0x69L) >= p_20.f3)), l_480));
                    l_498 &= (p_20.f4 , ((g_126.f0.f2 < (safe_unary_minus_func_int8_t_s((safe_sub_func_int16_t_s_s((l_491 <= (l_460 < ((safe_mul_func_int16_t_s_s(p_21, ((safe_mod_func_int16_t_s_s((g_121[1].f1 ^= ((((*g_111) , ((void*)0 == l_496)) , p_20.f1) && l_432)), g_370[3][1].f4)) > l_497))) == 8L))), p_20.f4))))) || 0x432E1B75L));
                }
            }
            for (l_452 = 4; (l_452 >= 2); l_452 -= 1)
            { 
                int32_t l_507 = 2L;
                int8_t *l_509 = (void*)0;
                int64_t *l_524 = &g_367;
                union U2 l_531[3] = {{0xBADA4DBC5B65ADA8LL},{0xBADA4DBC5B65ADA8LL},{0xBADA4DBC5B65ADA8LL}};
                int32_t l_538 = 4L;
                int32_t l_541 = 0x0751B961L;
                const union U2 *l_551 = &g_552[2];
                union U1 l_559 = {{1L,4UL,18446744073709551615UL,0x4D4733C2L,1UL}};
                uint64_t *l_566[3];
                uint64_t **l_565[1][1];
                int32_t l_603 = 0xBD0FE779L;
                int32_t l_604 = 0x5B2DBF3EL;
                int32_t l_605 = 1L;
                int32_t l_606 = 0x49B9F8D8L;
                int32_t l_608 = 0x95810383L;
                int32_t l_609[1][4];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_566[i] = (void*)0;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_565[i][j] = &l_566[1];
                }
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_609[i][j] = 0xBD76AC43L;
                }
                if ((safe_mod_func_int64_t_s_s(l_442.f0, (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((l_507 < (l_508 | ((*g_303) == (void*)0))), 14)), 0x50B3L)), l_442.f0)))))
                { 
                    const int8_t *l_513[5][3][4] = {{{&g_514,&g_514,&g_514,&g_514},{(void*)0,&g_514,&g_514,&g_514},{&g_514,&g_514,&g_514,&g_514}},{{&g_514,&g_514,(void*)0,&g_514},{&g_514,&g_514,&g_514,&g_514},{&g_514,(void*)0,(void*)0,(void*)0}},{{&g_514,&g_514,&g_514,&g_514},{&g_514,&g_514,&g_514,&g_514},{(void*)0,&g_514,&g_514,&g_514}},{{&g_514,&g_514,&g_514,&g_514},{&g_514,&g_514,&g_514,&g_514},{(void*)0,&g_514,&g_514,(void*)0}},{{&g_514,(void*)0,&g_514,&g_514},{&g_514,&g_514,&g_514,&g_514},{&g_514,&g_514,&g_514,&g_514}}};
                    const int8_t **l_512 = &l_513[1][0][3];
                    int64_t *l_515 = (void*)0;
                    int64_t *l_516 = &g_367;
                    const int32_t l_517[6] = {0xD7582D03L,0xFE33EB19L,0xD7582D03L,0xD7582D03L,0xFE33EB19L,0xD7582D03L};
                    const uint64_t ***l_520 = &l_518[0];
                    int i, j, k;
                    l_460 = ((*l_371) &= p_20.f1);
                    l_433 ^= ((((g_121[1] , (l_509 = &g_83)) == (void*)0) >= ((g_510 = (void*)0) == ((*l_512) = &g_83))) || ((((((*l_516) = ((&g_121[1] == &g_121[1]) & 1L)) | l_458) | p_20.f2) == 0UL) & l_517[1]));
                    (*l_520) = l_518[0];
                }
                else
                { 
                    l_460 &= (l_521 , p_18);
                }
                l_523 = l_522;
                if (((((void*)0 == l_524) , g_370[3][1].f0) , ((safe_rshift_func_uint16_t_u_s(65526UL, ((p_17 == ((((safe_lshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s(p_17, (l_531[0] , (*g_304)))) & (*l_372)), 3)) && p_20.f2) != l_507) == (**g_110))) , p_20.f0))) , p_20.f0)))
                { 
                    int64_t l_533 = (-9L);
                    int32_t l_536 = 0xEEC281CBL;
                    int32_t l_537[3];
                    const union U2 **l_550[6];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_537[i] = 0xFA370FA9L;
                    for (i = 0; i < 6; i++)
                        l_550[i] = (void*)0;
                    l_542--;
                    (*l_374) ^= (((**g_483) , (((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_18, 0)), ((l_551 = l_549) != (void*)0))) && ((((g_126.f0.f3 && (((((*l_524) = (2UL && (+p_20.f0))) && p_21) >= 0UL) && p_20.f2)) , 18446744073709551615UL) >= p_20.f1) > p_20.f2)) | 3UL) | (-1L)) <= p_19)) == l_507);
                    (*g_293) |= (~(((safe_div_func_uint32_t_u_u((1UL & (((((((p_20 , ((safe_div_func_int32_t_s_s(p_20.f1, ((p_18 && p_20.f3) && (l_559 , (safe_mul_func_uint16_t_u_u((((safe_add_func_int64_t_s_s(((l_564 , (void*)0) == l_565[0][0]), l_567[0])) == 0xF1E7A2F8F2E04018LL) == l_536), 0x9947L)))))) ^ 0L)) ^ 0x0AB8A4D47F1AAC4CLL) & p_20.f0) <= 0x6A9FAFFAL) != 0x715AL) & p_20.f1) <= 0x71EB833DL)), 4294967293UL)) , 0x3DD11BC2L) <= l_533));
                }
                else
                { 
                    union U3 ***l_570 = &g_568;
                    int32_t l_571 = 0xEBAB6740L;
                    int32_t l_572[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_572[i] = (-1L);
                    (*l_570) = g_568;
                    ++l_573;
                    g_576--;
                }
                for (l_532 = 0; (l_532 <= 6); l_532 += 1)
                { 
                    uint8_t *l_580 = &l_462;
                    int32_t l_584 = 0xA25F04B0L;
                    int32_t l_599 = 8L;
                    int32_t l_600 = (-1L);
                    int32_t l_602 = 0L;
                    int32_t l_610 = 0x41581588L;
                    int32_t l_611[3][1][6] = {{{0x84256A8BL,0L,0xB3A53488L,0x741AC7F4L,0x741AC7F4L,0xB3A53488L}},{{0x84256A8BL,0x84256A8BL,0x741AC7F4L,0x4921F5F9L,0L,0x4921F5F9L}},{{0L,0x84256A8BL,0L,0xB3A53488L,0x741AC7F4L,0x741AC7F4L}}};
                    uint32_t l_613 = 0xE8D94317L;
                    int i, j, k;
                    g_579 |= p_20.f1;
                    l_602 ^= ((((*l_371) = 0x84L) < ((*l_580)++)) & (((!((((0xD70B3F90L <= (((l_584 = p_20.f2) | (l_601 = ((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((~(safe_mod_func_uint8_t_u_u((((l_432 ^= l_596[5]) > (l_600 &= (p_20.f3 , (safe_lshift_func_int8_t_s_s((l_507 = p_20.f3), (l_599 <= (*g_304))))))) == p_19), 0x4CL))), 7)) , l_559.f0.f0), 0x92L)), p_20.f1)) , p_18), l_559.f0.f3)) != l_599))) , 0L)) , 0x8317DD1DE5960AA1LL) , 0xB690733FL) , p_18)) != 0x213A67B0L) == p_20.f4));
                    l_613--;
                }
            }
            if ((safe_sub_func_int16_t_s_s((((0xA854AE15AA89EB60LL & p_20.f0) >= (&l_522 != ((safe_unary_minus_func_int32_t_s((-8L))) , &l_523))) || 0xC8C1L), (p_20.f1 != 1UL))))
            { 
                union U1 *l_621 = &g_126;
                union U1 **l_622 = &l_621;
                int32_t l_623 = (-1L);
                l_460 = ((*l_374) = p_20.f0);
                (*l_622) = l_621;
                if (l_623)
                    continue;
            }
            else
            { 
                uint8_t l_624 = 0x6EL;
                (*l_372) = p_20.f4;
                if (p_20.f4)
                    break;
                (*l_381) = &l_459[0][2][4];
                l_624++;
            }
            return p_20.f3;
        }
    }
    return (**g_303);
}



static uint32_t  func_30(union U1  p_31, uint8_t  p_32, int8_t  p_33, int32_t  p_34, uint16_t  p_35)
{ 
    union U2 l_147 = {0x48BD332100D8DAA7LL};
    int32_t l_151 = (-8L);
    int32_t l_153 = 0x744F0CC1L;
    int32_t ***l_196 = &g_101[3][1];
    uint32_t *l_241 = &g_56;
    int8_t l_270 = (-1L);
    int32_t l_277 = (-8L);
    union U1 l_352 = {{0xC2D6C3E2L,5UL,0x326A7AC40B794A91LL,0x75BBB6EDL,0UL}};
    for (p_31.f0.f2 = 0; (p_31.f0.f2 == 19); p_31.f0.f2++)
    { 
        uint64_t l_139 = 0UL;
        uint16_t *l_140 = &g_126.f0.f1;
        const union U1 l_141 = {{-6L,0UL,8UL,6L,0x37C9L}};
        const int64_t l_148[6][2] = {{(-7L),1L},{1L,(-7L)},{1L,1L},{(-7L),1L},{1L,(-7L)},{1L,1L}};
        int32_t l_152[6] = {0x533B9DB7L,0x533B9DB7L,0x533B9DB7L,0x533B9DB7L,0x533B9DB7L,0x533B9DB7L};
        int32_t l_154[5][6][6] = {{{0L,(-8L),0x21BC6241L,0x75827F4EL,0L,7L},{0x1F4BA9CCL,0L,(-9L),0x75827F4EL,(-9L),0L},{0L,1L,(-1L),0L,0x439A01C8L,0L},{0x191EB41DL,7L,(-9L),(-9L),0xD78F8258L,0x8BEDB779L},{0x439A01C8L,7L,0x21BC6241L,7L,0x439A01C8L,0x75827F4EL},{0x1F4BA9CCL,1L,0x191EB41DL,0x8BEDB779L,(-9L),1L}},{{0x439A01C8L,0L,(-1L),1L,0L,1L},{0x191EB41DL,(-8L),0x191EB41DL,0L,0xD78F8258L,0x75827F4EL},{0L,0x75827F4EL,0x21BC6241L,(-8L),0L,0x8BEDB779L},{0x1F4BA9CCL,0L,(-9L),(-8L),(-9L),0L},{0L,(-9L),(-1L),0L,0x439A01C8L,0L},{0x191EB41DL,0x8BEDB779L,(-9L),1L,0xD78F8258L,7L}},{{0x439A01C8L,0x8BEDB779L,0x21BC6241L,0x8BEDB779L,0x439A01C8L,(-8L)},{0x1F4BA9CCL,(-9L),0x191EB41DL,7L,(-9L),(-9L)},{0x439A01C8L,0L,(-1L),(-9L),0L,(-9L)},{0x191EB41DL,0x75827F4EL,0x191EB41DL,0L,0xD78F8258L,(-8L)},{0L,(-8L),0x21BC6241L,0x75827F4EL,0L,7L},{0x1F4BA9CCL,0L,(-9L),0x75827F4EL,(-9L),0L}},{{0L,1L,(-1L),0L,0x439A01C8L,0L},{0x191EB41DL,7L,(-9L),(-9L),0xD78F8258L,0x8BEDB779L},{0x439A01C8L,7L,0x21BC6241L,7L,0x439A01C8L,0x75827F4EL},{0x1F4BA9CCL,1L,0x191EB41DL,0x8BEDB779L,(-9L),1L},{0x439A01C8L,0L,(-1L),1L,0L,1L},{0x191EB41DL,(-8L),0x191EB41DL,0L,0xD78F8258L,0x75827F4EL}},{{0L,0x75827F4EL,0x21BC6241L,(-8L),0L,0x8BEDB779L},{0x1F4BA9CCL,0L,(-9L),(-8L),(-9L),0L},{0L,(-9L),(-1L),0L,0x439A01C8L,0L},{0x191EB41DL,0x8BEDB779L,(-9L),1L,0xD78F8258L,7L},{0x439A01C8L,0x8BEDB779L,0x21BC6241L,0x8BEDB779L,0x439A01C8L,(-8L)},{0x1F4BA9CCL,(-9L),0x191EB41DL,7L,(-9L),(-9L)}}};
        uint32_t l_176 = 4294967291UL;
        union U2 *l_208 = &g_209;
        int32_t l_267 = (-1L);
        int32_t *l_315 = &l_151;
        uint8_t l_342 = 1UL;
        int32_t ***l_353 = &g_101[0][0];
        int32_t l_354[5];
        int16_t *l_355 = &g_121[1].f1;
        int16_t *l_356 = &g_121[1].f1;
        int16_t *l_357 = &g_121[1].f1;
        int16_t *l_358 = (void*)0;
        int16_t *l_359 = &g_121[1].f1;
        int16_t *l_360 = &g_121[1].f1;
        int16_t *l_361 = (void*)0;
        int16_t *l_362 = &g_121[1].f1;
        int16_t *l_363 = &g_121[1].f1;
        int16_t *l_364 = &g_121[1].f1;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_354[i] = 0x4EC4609CL;
        if ((((*l_140) |= l_139) >= (l_141 , (0xC37BL >= ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0L, ((+((l_147 , p_31.f0.f1) ^ (((l_141.f0.f2 ^ g_56) < 0x1FL) == l_147.f0))) < g_121[1].f0))), 10)) , l_148[0][1])))))
        { 
            int32_t *l_149 = &g_114;
            int32_t *l_150[2][1];
            uint8_t l_155 = 0xF9L;
            uint32_t ***l_160 = (void*)0;
            int32_t **l_171 = &g_102[2][1][0];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_150[i][j] = (void*)0;
            }
            l_155++;
            for (g_126.f0.f2 = 0; (g_126.f0.f2 <= 2); g_126.f0.f2 += 1)
            { 
                int32_t l_166 = 0L;
                for (g_114 = 0; (g_114 <= 2); g_114 += 1)
                { 
                    p_34 = (safe_sub_func_uint8_t_u_u((l_160 != (g_161 = l_160)), (safe_unary_minus_func_uint8_t_u(1UL))));
                }
                for (p_34 = 0; (p_34 <= 2); p_34 += 1)
                { 
                    uint32_t l_163 = 0x85EEBD79L;
                    int32_t l_167[4][6][4] = {{{0x69C0FF02L,0x19CEE7FFL,0xCE70BD27L,0x7156C71AL},{(-1L),0x19CEE7FFL,(-7L),0x3DA3A2BDL},{0x19CEE7FFL,(-3L),1L,0x526AD981L},{0L,0xEB52631FL,0x69C0FF02L,(-3L)},{0x1D234652L,0x92DACD49L,0x03D5BD35L,0x1D234652L},{0x526AD981L,0x6C989A69L,1L,(-1L)}},{{0xB1C1D097L,1L,(-1L),0x868CF8CBL},{(-3L),0xB1C1D097L,(-6L),0xB1C1D097L},{0x2559B54CL,0x03A7F814L,(-8L),(-3L)},{(-7L),(-8L),0x868CF8CBL,0x5D95BAE7L},{(-1L),0x2559B54CL,0x92DACD49L,0x69C0FF02L},{(-1L),(-8L),0x868CF8CBL,0x6C989A69L}},{{(-7L),0x69C0FF02L,(-8L),0x071DA066L},{0x2559B54CL,0L,(-6L),(-1L)},{(-3L),9L,(-1L),(-8L)},{9L,0x69C0FF02L,0L,(-8L)},{0x6C989A69L,(-1L),0x1D234652L,0x69C0FF02L},{0x7156C71AL,0x3064252AL,0x3064252AL,0x7156C71AL}},{{(-8L),(-8L),0L,(-1L)},{0L,1L,(-8L),0xB1C1D097L},{(-3L),0x868CF8CBL,0x12AFED2EL,0xB1C1D097L},{0x3064252AL,1L,(-8L),(-1L)},{0xC7CB7DFEL,(-8L),0x19CEE7FFL,0x7156C71AL},{(-1L),0x3064252AL,0x03D5BD35L,0x69C0FF02L}}};
                    int i, j, k;
                    --l_163;
                    --g_168;
                }
            }
            (*l_171) = &l_151;
            for (g_70 = 7; (g_70 <= 57); g_70++)
            { 
                for (p_35 = 12; (p_35 >= 25); p_35 = safe_add_func_uint32_t_u_u(p_35, 6))
                { 
                    l_176 |= p_35;
                }
            }
        }
        else
        { 
            int32_t *l_200[3];
            uint32_t l_231 = 1UL;
            uint64_t l_278 = 18446744073709551612UL;
            int32_t **l_294 = &l_200[1];
            int32_t **l_295 = &g_102[2][1][0];
            uint64_t *l_339 = &g_126.f0.f2;
            int i;
            for (i = 0; i < 3; i++)
                l_200[i] = &g_114;
            for (g_104 = 0; (g_104 != 10); ++g_104)
            { 
                union U1 l_195 = {{0x7D5A15B5L,8UL,0x808C03050764EF90LL,0x5A97A0B3L,1UL}};
                int32_t *l_201 = &g_2[3];
                uint16_t **l_239 = &l_140;
                uint64_t l_242 = 18446744073709551609UL;
                union U3 l_252 = {1L};
                uint64_t l_256[4] = {5UL,5UL,5UL,5UL};
                int32_t l_275 = 0x3C9D250EL;
                int32_t l_276[1];
                uint16_t *l_283 = (void*)0;
                uint16_t *l_284 = &l_195.f0.f4;
                int32_t * const *l_290 = &g_102[2][1][0];
                int32_t * const **l_289 = &l_290;
                uint32_t *l_291 = (void*)0;
                uint32_t *l_292 = &l_176;
                int i;
                for (i = 0; i < 1; i++)
                    l_276[i] = 0x686306A9L;
                for (g_83 = 0; (g_83 <= (-10)); g_83 = safe_sub_func_uint16_t_u_u(g_83, 2))
                { 
                    uint64_t *l_188 = (void*)0;
                    uint64_t *l_189 = &l_147.f0;
                    int32_t l_194 = 1L;
                    int32_t *l_197 = &l_154[1][0][3];
                    int32_t **l_198 = (void*)0;
                    int32_t **l_199[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_199[i] = &g_102[5][0][3];
                    l_200[1] = ((func_40((safe_add_func_uint64_t_u_u(0xD100AB29EDB27232LL, ((((safe_mod_func_uint64_t_u_u((+p_35), (safe_add_func_uint64_t_u_u(((*l_189) = 18446744073709551610UL), ((((safe_mod_func_int8_t_s_s(((&g_70 != &g_70) , (safe_rshift_func_uint16_t_u_s(l_194, 7))), l_151)) <= 0xE92035A7L) >= 4294967288UL) & g_83))))) , l_195) , l_196) == &g_101[1][0])))) , g_121[2]) , l_197);
                }
                if (p_33)
                { 
                    int32_t **l_202 = (void*)0;
                    int32_t **l_203 = (void*)0;
                    int32_t **l_204 = &g_102[2][1][0];
                    int32_t *l_205 = (void*)0;
                    union U2 *l_207 = (void*)0;
                    union U2 **l_206[4];
                    union U1 l_212 = {{-9L,0x4290L,18446744073709551615UL,9L,0xCEE0L}};
                    uint16_t *l_230 = &l_195.f0.f4;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_206[i] = &l_207;
                    l_205 = ((*l_204) = l_201);
                    if ((*l_201))
                        break;
                    if (p_31.f0.f3)
                        break;
                    l_208 = &g_86[6];
                    p_34 |= (((safe_lshift_func_int16_t_s_u(((p_31.f0.f1 || (l_212 , 0xBF44B9ECC4F20DA1LL)) != (((~(safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s(g_126.f0.f1, 14)) != (safe_add_func_int16_t_s_s((-1L), ((*l_230) = (safe_add_func_int16_t_s_s(g_104, ((safe_mod_func_uint16_t_u_u(0x3F9EL, 0x1334L)) < p_31.f0.f4))))))) || g_121[1].f2), 0x598AF31AL)), p_31.f0.f0)), (*l_201))), 0xACL))) != 0x93L) & l_231)), g_126.f0.f1)) == (**g_110)) >= 0x4B8BL);
                }
                else
                { 
                    int32_t **l_232 = &g_102[2][1][0];
                    (*l_232) = &p_34;
                }
                if ((l_153 = (((((safe_mul_func_int16_t_s_s((((*l_201) == g_86[5].f0) || (p_31.f0.f4 & (65526UL ^ (safe_lshift_func_uint8_t_u_s(((safe_add_func_int64_t_s_s((((g_240 = ((*l_239) = (void*)0)) != &g_104) & ((l_241 == (void*)0) < p_32)), p_31.f0.f2)) < p_31.f0.f2), g_209.f0))))), p_31.f0.f0)) & l_242) ^ p_31.f0.f2) <= (*g_111)) == p_31.f0.f2)))
                { 
                    l_151 &= (-6L);
                }
                else
                { 
                    int64_t l_243 = 4L;
                    uint64_t *l_244 = (void*)0;
                    uint64_t *l_245[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    const int64_t l_253 = 0xBF38DE2D49E9B30FLL;
                    int32_t l_254 = 0x5208B081L;
                    int32_t l_255 = 0x22DBA5B9L;
                    int i;
                    l_254 |= (p_34 = ((l_243 , ((g_209.f0--) , 0x5F751341D71C5381LL)) || (l_195.f0 , (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((void*)0 == &l_201), (l_252 , l_253))), p_31.f0.f3)))));
                    ++l_256[1];
                }
                for (l_195.f0.f4 = 0; (l_195.f0.f4 <= 4); l_195.f0.f4 += 1)
                { 
                    int32_t l_266 = 0x7033876EL;
                    int8_t *l_268 = &g_83;
                    int32_t l_269 = 0x1F39B6BEL;
                    int8_t l_271 = 3L;
                    int i, j, k;
                    l_154[l_195.f0.f4][(l_195.f0.f4 + 1)][(l_195.f0.f4 + 1)] ^= ((((((*l_201) , p_33) ^ p_31.f0.f1) ^ (1L >= ((safe_add_func_uint32_t_u_u((((safe_sub_func_int64_t_s_s(p_34, ((safe_rshift_func_uint8_t_u_s(p_31.f0.f4, ((*l_268) = ((!(((((void*)0 == &p_35) & l_266) >= l_267) & 0xB6L)) > p_33)))) , g_104))) & p_33) >= (**g_110)), 0x9AA3DB18L)) > g_126.f0.f4))) != g_121[1].f2) <= l_266);
                    --g_272;
                    if (p_33)
                        continue;
                    ++l_278;
                }
                l_267 &= ((((**g_110) | (safe_div_func_uint16_t_u_u(((*l_284) = 0UL), p_31.f0.f2))) | ((safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((void*)0 != l_289), g_121[1].f0)) > ((*l_292) &= l_154[0][3][4])), 0UL)) < 7L)) | 0x30L);
            }
            if (p_33)
                continue;
            (*l_295) = ((*l_294) = g_293);
            if (((safe_sub_func_int64_t_s_s(p_31.f0.f2, 0x795524EEA1D02706LL)) != g_126.f0.f3))
            { 
                const uint32_t ***l_305[1];
                const uint32_t **l_306[5];
                int32_t l_314 = 0x75E79889L;
                int i;
                for (i = 0; i < 1; i++)
                    l_305[i] = &g_303;
                for (i = 0; i < 5; i++)
                    l_306[i] = (void*)0;
                (*g_293) &= (p_34 = ((safe_unary_minus_func_int64_t_s((safe_add_func_int16_t_s_s(g_2[1], (safe_div_func_int16_t_s_s(((l_306[4] = g_303) != (void*)0), ((safe_unary_minus_func_int16_t_s((g_209.f0 ^ ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((((void*)0 == &p_35) > p_34), l_314)), p_31.f0.f3)), 0)) && 0x49C9A20BL)))) || l_141.f0.f0))))))) ^ g_272));
                l_315 = ((*l_295) = (void*)0);
            }
            else
            { 
                uint32_t l_316 = 0xD35495EAL;
                int8_t *l_317 = (void*)0;
                int8_t *l_318 = &l_270;
                int32_t l_325 = 0x57E26C6CL;
                int32_t l_330 = (-1L);
                uint8_t *l_332[2][4];
                uint8_t **l_331[1];
                uint64_t **l_338 = (void*)0;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_332[i][j] = &g_333;
                }
                for (i = 0; i < 1; i++)
                    l_331[i] = &l_332[1][2];
                if (l_316)
                    break;
                if (p_31.f0.f3)
                    continue;
                if (((*g_293) = (((*l_318) |= (p_33 = p_32)) , 1L)))
                { 
                    uint8_t ***l_334 = (void*)0;
                    uint8_t ***l_335 = (void*)0;
                    (**l_294) &= ((safe_mod_func_uint64_t_u_u((g_209.f0 = 0x91A71D5EAB3F58FCLL), 0x00A9DAF5CFC6F7FALL)) <= ((safe_mod_func_uint8_t_u_u(g_56, (-1L))) , (0x6B14C68AL & (((l_325 | (l_330 = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(4L, 12)), 7)))) == g_121[1].f2) >= g_126.f0.f3))));
                    g_336 = l_331[0];
                    if (p_35)
                        continue;
                    if ((*l_315))
                        break;
                }
                else
                { 
                    return g_333;
                }
                (*g_293) |= (&l_139 == (l_339 = (void*)0));
                if (p_35)
                    continue;
            }
            l_342 = ((**l_294) |= (safe_rshift_func_uint8_t_u_u(p_31.f0.f3, 3)));
        }
        (*g_293) = (+((g_365 = ((safe_mod_func_uint16_t_u_u((((((&p_32 == &l_342) , p_31.f0.f2) >= p_32) <= (safe_div_func_uint32_t_u_u((*g_111), (((((safe_add_func_uint16_t_u_u(0x1B88L, (safe_add_func_int32_t_s_s(((l_352 , l_353) != (void*)0), p_31.f0.f4)))) & g_121[1].f1) > l_277) , l_354[2]) | (-1L))))) != g_104), 0xE91FL)) , g_121[1].f0)) <= g_121[1].f0));
    }
    return p_33;
}



static union U1  func_36(uint8_t  p_37)
{ 
    uint32_t *l_55[6][5] = {{&g_56,&g_56,&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56,&g_56,(void*)0},{&g_56,&g_56,&g_56,&g_56,&g_56},{(void*)0,&g_56,&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56,&g_56,&g_56},{(void*)0,&g_56,&g_56,&g_56,(void*)0}};
    int32_t l_57[4][5] = {{(-1L),0L,(-1L),(-1L),0L},{0L,(-1L),(-1L),0L,(-1L)},{0L,0L,0xE5316D00L,0L,0L},{(-1L),0L,(-1L),(-1L),0L}};
    uint8_t l_58 = 2UL;
    int32_t *l_122 = (void*)0;
    uint8_t *l_125 = &l_58;
    int32_t *l_129 = (void*)0;
    int32_t *l_130 = &g_114;
    int32_t *l_131[7] = {&g_114,&g_114,&g_114,&g_114,&g_114,&g_114,&g_114};
    int64_t l_132 = 6L;
    uint8_t l_133 = 4UL;
    int i, j;
    l_57[1][0] = (func_38(func_40(func_42(g_2[5], (safe_mod_func_int64_t_s_s((((g_2[3] != (p_37 <= (safe_sub_func_int64_t_s_s((-5L), (safe_add_func_uint64_t_u_u((g_2[2] , ((safe_sub_func_uint32_t_u_u(p_37, (safe_sub_func_uint32_t_u_u((l_58++), p_37)))) & 0L)), 1UL)))))) | p_37) , (-8L)), l_57[2][0]))))) == p_37);
    if ((g_2[2] > (((*l_125) = ((&g_102[4][2][1] == &l_122) ^ 0x4C35ED1F7F3E9DA8LL)) < (&l_57[2][0] != (void*)0))))
    { 
        return g_126;
    }
    else
    { 
        int32_t *l_127 = &l_57[1][0];
        int32_t **l_128 = &g_102[1][1][2];
        (*l_128) = l_127;
    }
    ++l_133;
    (*l_130) = 0x195FD4EEL;
    return g_126;
}



static int32_t  func_38(union U3  p_39)
{ 
    return p_39.f1;
}



static union U3  func_40(uint8_t  p_41)
{ 
    uint64_t l_118 = 18446744073709551607UL;
    l_118--;
    return g_121[1];
}



static uint8_t  func_42(int32_t  p_43, int32_t  p_44)
{ 
    uint16_t l_109 = 0xD870L;
    int32_t *l_117 = &g_114;
    for (p_44 = 0; (p_44 < (-15)); p_44 = safe_sub_func_int32_t_s_s(p_44, 2))
    { 
        int32_t l_69 = 0x9428F8A5L;
        uint32_t *l_72[1][7] = {{&g_56,&g_56,&g_56,&g_56,&g_56,&g_56,&g_56}};
        uint32_t **l_71 = &l_72[0][1];
        int16_t l_91 = 0x1EF0L;
        int32_t *l_99 = &g_2[2];
        int32_t **l_98 = &l_99;
        uint32_t ***l_112 = &g_110;
        int32_t *l_113 = &g_114;
        int i, j;
        if (p_43)
        { 
            g_70 ^= (safe_sub_func_uint16_t_u_u(g_2[2], (p_43 == (safe_sub_func_uint64_t_u_u(((((safe_rshift_func_uint8_t_u_s(p_43, 3)) , l_69) , &g_56) == &g_56), (p_43 < 0x799626DAL))))));
        }
        else
        { 
            uint32_t ***l_73 = &l_71;
            int32_t l_82 = 0x70C68704L;
            (*l_73) = l_71;
            for (g_70 = 8; (g_70 < 29); g_70++)
            { 
                int32_t *l_87 = &l_82;
                int32_t l_88 = 8L;
                int32_t *l_89 = &l_88;
                int32_t **l_90 = &l_89;
                int16_t *l_96[6][4] = {{(void*)0,(void*)0,&l_91,(void*)0},{&l_91,&l_91,&l_91,&l_91},{&l_91,&l_91,&l_91,&l_91},{(void*)0,&l_91,(void*)0,&l_91},{&l_91,&l_91,(void*)0,(void*)0},{(void*)0,(void*)0,&l_91,(void*)0}};
                union U3 l_97[2][7][4] = {{{{0xEE7B07E0L},{0xEE7B07E0L},{0xCDB24405L},{0xEE7B07E0L}},{{0xEE7B07E0L},{-2L},{-2L},{0xEE7B07E0L}},{{-2L},{0xEE7B07E0L},{-2L},{-2L}},{{0xEE7B07E0L},{0xEE7B07E0L},{0xCDB24405L},{0xEE7B07E0L}},{{0xEE7B07E0L},{-2L},{-2L},{0xEE7B07E0L}},{{-2L},{0xEE7B07E0L},{0xCDB24405L},{0xCDB24405L}},{{-2L},{-2L},{0xEE7B07E0L},{-2L}}},{{{-2L},{0xCDB24405L},{0xCDB24405L},{-2L}},{{0xCDB24405L},{-2L},{0xCDB24405L},{0xCDB24405L}},{{-2L},{-2L},{0xEE7B07E0L},{-2L}},{{-2L},{0xCDB24405L},{0xCDB24405L},{-2L}},{{0xCDB24405L},{-2L},{0xCDB24405L},{0xCDB24405L}},{{-2L},{-2L},{0xEE7B07E0L},{-2L}},{{-2L},{0xCDB24405L},{0xCDB24405L},{-2L}}}};
                int32_t ***l_100 = &l_90;
                uint16_t *l_103 = &g_104;
                int i, j, k;
                (*l_89) = (safe_div_func_int32_t_s_s(((*l_87) = ((-1L) >= (((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_56, l_82)), (g_83 ^= 255UL))) > l_69) , (safe_div_func_int32_t_s_s((g_86[5] , (((l_82 >= g_2[2]) <= l_82) ^ p_44)), g_70))) , p_44) != 0xE9L))), l_88));
                (*l_90) = l_72[0][1];
                if (l_91)
                    break;
                l_109 &= ((p_43 > (safe_add_func_int16_t_s_s((l_82 ^= (safe_lshift_func_uint8_t_u_s(g_86[5].f0, 3))), (((*l_100) = (l_97[1][4][0] , l_98)) == g_101[3][2])))) || (g_56 <= ((--(*l_103)) , (safe_sub_func_uint32_t_u_u(0UL, l_82)))));
            }
            if (p_43)
                break;
            return g_70;
        }
        (*l_112) = g_110;
        if (p_43)
            break;
        (*l_113) = (**l_98);
        return (*l_113);
    }
    (*l_117) ^= (safe_div_func_uint32_t_u_u(0x58CFF8D1L, 0x53246B6DL));
    return (*l_117);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_86[i].f0, "g_86[i].f0", print_hash_value);

    }
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_121[i].f1, "g_121[i].f1", print_hash_value);

    }
    transparent_crc(g_126.f0.f0, "g_126.f0.f0", print_hash_value);
    transparent_crc(g_126.f0.f1, "g_126.f0.f1", print_hash_value);
    transparent_crc(g_126.f0.f2, "g_126.f0.f2", print_hash_value);
    transparent_crc(g_126.f0.f3, "g_126.f0.f3", print_hash_value);
    transparent_crc(g_126.f0.f4, "g_126.f0.f4", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_209.f0, "g_209.f0", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_370[i][j].f0, "g_370[i][j].f0", print_hash_value);
            transparent_crc(g_370[i][j].f1, "g_370[i][j].f1", print_hash_value);
            transparent_crc(g_370[i][j].f2, "g_370[i][j].f2", print_hash_value);
            transparent_crc(g_370[i][j].f3, "g_370[i][j].f3", print_hash_value);
            transparent_crc(g_370[i][j].f4, "g_370[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_552[i].f0, "g_552[i].f0", print_hash_value);

    }
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
