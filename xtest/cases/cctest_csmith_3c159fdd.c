// SPDX-License-Identifier: MIT
// cctest_csmith_3c159fdd.c --- cctest case csmith_3c159fdd (csmith seed 1008050141)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa9825ae5 */

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

// Options:   -s 1008050141 -o /tmp/csmith_gen_acm4806h/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int32_t  f1;
   const int16_t  f2;
   uint32_t  f3;
};

union U1 {
   const int8_t  f0;
   int32_t  f1;
   uint32_t  f2;
   const uint32_t  f3;
};

union U2 {
   struct S0  f0;
   uint16_t  f1;
   struct S0  f2;
   int16_t  f3;
};


static uint8_t g_2 = 0x18L;
static uint16_t g_31 = 0UL;
static uint64_t g_32 = 0xD535453F201F9D99LL;
static const union U1 g_45[4][1] = {{{0xCFL}},{{0xCFL}},{{0xCFL}},{{0xCFL}}};
static int8_t g_62 = 0xD5L;
static union U2 g_84 = {{1UL,0x15EE0523L,0xF742L,18446744073709551613UL}};
static uint8_t g_118 = 0xF7L;
static uint32_t g_135[5] = {0x108C9EE7L,0x108C9EE7L,0x108C9EE7L,0x108C9EE7L,0x108C9EE7L};
static int8_t g_139[5] = {0xE1L,0xE1L,0xE1L,0xE1L,0xE1L};
static int64_t g_141 = 4L;
static int32_t g_142 = 0xA4C82FA9L;
static int32_t g_144[5] = {1L,1L,1L,1L,1L};
static int64_t g_171 = 0x4ECFE5F798932A73LL;
static uint32_t g_210 = 0xDD1E5F54L;
static uint8_t g_254[5] = {0x39L,0x39L,0x39L,0x39L,0x39L};
static int8_t g_262[4] = {0x5DL,0x5DL,0x5DL,0x5DL};



static struct S0  func_1(void);
static int32_t  func_6(int32_t  p_7, int8_t  p_8, const int64_t  p_9);
static union U1  func_10(union U2  p_11, const union U1  p_12, int64_t  p_13);
static int16_t  func_26(union U2  p_27, int16_t  p_28);




static struct S0  func_1(void)
{ 
    int8_t l_3 = (-1L);
    union U2 l_14[1] = {{{0xF38D927FL,8L,-4L,1UL}}};
    int i;
    l_3 = g_2;
    for (l_3 = (-11); (l_3 > (-25)); l_3 = safe_sub_func_int8_t_s_s(l_3, 4))
    { 
        const union U1 l_15 = {-1L};
    }
    for (g_118 = 0; g_118 < 4; g_118 += 1)
    {
        g_262[g_118] = 0L;
    }
    return g_84.f0;
}



static int32_t  func_6(int32_t  p_7, int8_t  p_8, const int64_t  p_9)
{ 
    uint32_t l_241 = 0x56832936L;
    int32_t l_242 = 0x64C46BD8L;
    int32_t l_243 = 1L;
    int32_t l_244 = 0xCFCFEE40L;
    for (g_84.f3 = 0; (g_84.f3 >= (-13)); g_84.f3 = safe_sub_func_uint8_t_u_u(g_84.f3, 8))
    { 
        const union U2 l_237 = {{1UL,6L,-10L,0x178F1F42L}};
        g_144[0] = (!((l_244 = ((safe_lshift_func_int16_t_s_u((l_243 ^= (((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((!(safe_rshift_func_int16_t_s_s((l_237 , (0UL | (safe_lshift_func_uint8_t_u_s(((+(g_45[1][0] , ((l_242 = ((g_118 = ((l_241 < 6UL) & p_9)) | l_237.f0.f3)) != 0x0ACD65F59F456E7BLL))) & g_142), 7)))), 2))), g_31)), l_237.f0.f2)) < 0xD3EA817EE1CDBD8BLL) & g_135[0])), 5)) >= 1UL)) , (-1L)));
    }
    for (g_171 = 28; (g_171 < 26); g_171 = safe_sub_func_uint64_t_u_u(g_171, 5))
    { 
        int32_t l_253 = 1L;
        g_144[2] = (safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s(0x66L, (safe_add_func_uint32_t_u_u(8UL, (p_8 , (p_9 && l_253)))))), l_241));
        g_254[0]--;
        g_144[2] |= (l_244 | ((((p_7 > 0UL) , (safe_add_func_int16_t_s_s((!g_210), g_254[2]))) , l_241) , g_171));
    }
    l_242 = (safe_rshift_func_int8_t_s_u(1L, 2));
    return p_8;
}



static union U1  func_10(union U2  p_11, const union U1  p_12, int64_t  p_13)
{ 
    int32_t l_16 = 0xE9AB5C29L;
    int32_t l_21 = 0x34CB4417L;
    int32_t l_30[3];
    uint32_t l_87[1];
    uint64_t l_102[1][3][4] = {{{0xEB140366BBB0B75ALL,0x7286844AA6C347B9LL,0x7286844AA6C347B9LL,0xEB140366BBB0B75ALL},{0x7286844AA6C347B9LL,0xEB140366BBB0B75ALL,0x7286844AA6C347B9LL,0x7286844AA6C347B9LL},{0xEB140366BBB0B75ALL,0xEB140366BBB0B75ALL,0x4B258E78D8C438F6LL,0xEB140366BBB0B75ALL}}};
    uint8_t l_104 = 0xF2L;
    union U1 l_115 = {1L};
    int8_t l_133 = 0xB3L;
    uint16_t l_147[5];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_30[i] = 0x8F9F0AC7L;
    for (i = 0; i < 1; i++)
        l_87[i] = 0xA80DD4D5L;
    for (i = 0; i < 5; i++)
        l_147[i] = 0x690FL;
    if (((l_16 || (g_31 = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(65530UL, (l_21 &= 0xA0B5L))), (l_30[1] |= ((safe_lshift_func_int16_t_s_s(((p_11.f3 = ((safe_lshift_func_int16_t_s_s(func_26(p_11, g_2), l_16)) == 0xE235BD639B6AF4A9LL)) > l_16), 2)) , p_11.f1)))))) & g_2))
    { 
        uint32_t l_46[5];
        int32_t l_47 = 0x8D803B56L;
        int i;
        for (i = 0; i < 5; i++)
            l_46[i] = 0x753CA6AFL;
        g_32--;
        l_47 ^= (((safe_mul_func_uint8_t_u_u((((g_32 = (((safe_mul_func_int16_t_s_s((p_11.f3 = 1L), (((((safe_mod_func_uint16_t_u_u((p_13 || ((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((p_12.f0 || (((g_45[3][0] , l_46[3]) >= l_21) >= g_45[3][0].f0)) >= g_2), l_46[3])), 0xA66F8A59L)) && l_46[2])), 0x6449L)) || (-1L)) > g_32) > l_46[1]) || g_45[3][0].f0))) | l_21) || l_46[4])) , g_32) , p_12.f0), g_2)) == l_21) , g_2);
        if ((safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((l_30[1] = g_45[3][0].f0), (l_21 = (g_62 = (safe_div_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(g_32, (safe_mod_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u(0x6F957EEBE8445995LL, 1L)) & p_12.f0), p_11.f1)))) , 0x0AF1L), g_32)))))), g_32)) , (-1L)), 5)))
        { 
            uint8_t l_74 = 6UL;
            int32_t l_75 = (-6L);
            for (g_32 = 0; (g_32 < 56); ++g_32)
            { 
                return g_45[3][0];
            }
            l_75 = (l_21 = (((((p_13 & (safe_add_func_int64_t_s_s((safe_div_func_uint32_t_u_u(((l_21 , p_11.f3) != (safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((!(0xB087L == 65531UL)), 10)) == l_21), l_74))), l_16)), (-6L)))) && 0x8388L) < 5L) <= 0x16FBB8A9L) == 0x2D6DL));
        }
        else
        { 
            l_30[1] = ((safe_unary_minus_func_int8_t_s((safe_sub_func_uint8_t_u_u(l_30[1], ((safe_div_func_int16_t_s_s(((safe_div_func_uint64_t_u_u(0x431BEC191E6A7F8ELL, (((g_32 <= ((~(g_84 , 255UL)) , l_46[3])) && g_31) & p_11.f1))) <= g_45[3][0].f0), p_11.f3)) , p_11.f3))))) && l_30[1]);
            l_47 = g_84.f0.f1;
            l_30[1] = ((l_16 && ((safe_div_func_int8_t_s_s(l_87[0], 0x1FL)) > (((safe_lshift_func_uint16_t_u_u(65535UL, 3)) && p_13) , g_62))) != 0x525EL);
        }
    }
    else
    { 
        const int64_t l_103 = 1L;
        int32_t l_105[3][5] = {{0xCD08EF1BL,0x6BE207B9L,0xCD08EF1BL,0x6BE207B9L,0xCD08EF1BL},{9L,9L,9L,9L,9L},{0xCD08EF1BL,0x6BE207B9L,0xCD08EF1BL,0x6BE207B9L,0xCD08EF1BL}};
        union U2 l_154 = {{0x0BCAFD48L,0xC4C324ABL,-10L,0x72C582E5L}};
        uint16_t l_196[5][2][2] = {{{65535UL,0x474EL},{65531UL,1UL}},{{0x474EL,1UL},{65531UL,0x474EL}},{{65535UL,65535UL},{65535UL,0x474EL}},{{65531UL,1UL},{0x474EL,1UL}},{{65531UL,0x474EL},{65535UL,65535UL}}};
        int i, j, k;
        l_21 = (safe_mod_func_uint16_t_u_u(g_84.f0.f0, (safe_add_func_uint8_t_u_u(((l_87[0] ^ (safe_mod_func_uint64_t_u_u((g_32 &= ((safe_mod_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_s((l_105[0][1] = ((safe_div_func_uint64_t_u_u(((l_102[0][2][3] || (255UL & l_103)) >= l_103), p_13)) || l_104)), p_12.f0)) <= 0x28541D7298C4F2CDLL) >= 0x2604L), g_84.f0.f0)) != l_30[0])), p_13))) != 0x344571AEE78B5E36LL), l_30[1]))));
        if ((!(g_84.f0.f2 && (safe_lshift_func_int16_t_s_u(g_45[3][0].f0, ((safe_mod_func_int16_t_s_s(l_103, (safe_lshift_func_int8_t_s_u((((-4L) == l_105[1][3]) & 249UL), l_87[0])))) >= p_13))))))
        { 
            int8_t l_134 = 0xBBL;
            int32_t l_143 = (-1L);
            int32_t l_145[4][3] = {{0x8875C3FAL,0x8875C3FAL,0xD939DEF6L},{0x8875C3FAL,0x8875C3FAL,0xD939DEF6L},{0x8875C3FAL,0x8875C3FAL,0xD939DEF6L},{0x8875C3FAL,0x8875C3FAL,0xD939DEF6L}};
            int i, j;
            if ((safe_div_func_uint64_t_u_u(((l_115 , (safe_mul_func_uint8_t_u_u(((((l_105[1][3] = (g_118--)) , ((((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(0x6C7FL, (((safe_add_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u((g_84.f0.f0 < (safe_mul_func_uint8_t_u_u((p_13 ^ g_45[3][0].f0), p_12.f0))), 0xCE8EL)) != 0UL), 0L)) | p_12.f0) && l_87[0]))) | l_133), p_13)), 5)) || 0x9CL) < l_134) , p_13)) && l_105[0][1]) || p_12.f0), g_32))) > (-2L)), 1UL)))
            { 
                int16_t l_138 = (-8L);
                int32_t l_140 = 1L;
                int32_t l_146[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_146[i] = (-1L);
                --g_135[0];
                --l_147[0];
            }
            else
            { 
                int64_t l_155 = (-6L);
                l_155 &= (p_13 , (safe_sub_func_int8_t_s_s((p_13 , ((safe_lshift_func_int8_t_s_s((l_154 , 8L), 0)) == g_84.f0.f3)), 0xF6L)));
            }
            l_105[1][1] = (((g_171 = (safe_lshift_func_uint8_t_u_s(((((l_30[1] , (((safe_add_func_uint32_t_u_u((((+(safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((g_84.f2.f0 = (0x169C2045L <= (((((++g_32) && (safe_sub_func_int8_t_s_s(((l_145[2][1] > g_2) || p_13), g_62))) & g_84.f0.f3) || 0x04L) | 0x1DL))) || l_147[0]) > g_144[4]), g_118)), l_154.f0.f0)), p_13))) > g_144[2]) , 0xFB355C91L), 0x06DED90BL)) == p_12.f0) ^ 4294967288UL)) && 0UL) || g_84.f0.f2) | g_142), g_31))) || g_142) , (-1L));
        }
        else
        { 
            int32_t l_189 = (-6L);
            int32_t l_191[3][2] = {{0x893D1EF5L,0x893D1EF5L},{0x188B84FAL,0x893D1EF5L},{0x893D1EF5L,0x188B84FAL}};
            int i, j;
            for (g_84.f2.f1 = (-9); (g_84.f2.f1 == (-29)); g_84.f2.f1 = safe_sub_func_uint16_t_u_u(g_84.f2.f1, 7))
            { 
                uint8_t l_187 = 7UL;
                int32_t l_188 = 1L;
                int32_t l_190 = 0xD72E9D2DL;
                int32_t l_192 = 6L;
                int32_t l_193 = 0x118C4A8BL;
                int32_t l_194 = 1L;
                int32_t l_195 = 0x2FC393A4L;
                g_144[0] = (((safe_rshift_func_uint8_t_u_u((p_12.f0 == 0x8824DB70L), (safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(p_13, (!(((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(l_21, l_187)), 0xFA29L)), 3)) <= p_13) >= 1L)))), g_84.f0.f0)))) , l_105[0][1]) , g_45[3][0].f0);
                if (g_171)
                    continue;
                l_196[2][1][0]++;
            }
        }
        for (l_154.f2.f3 = 0; (l_154.f2.f3 < 6); l_154.f2.f3 = safe_add_func_uint8_t_u_u(l_154.f2.f3, 9))
        { 
            uint32_t l_209 = 0x4AA4CFADL;
            g_144[1] |= (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((0x77L & ((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(p_13, (l_21 = 255UL))), (((p_11.f2.f0 = (p_11 , l_209)) > p_13) | 0x1EECL))) , 0L)) , 0x0DL), g_84.f0.f2)), p_13));
        }
    }
    g_210++;
    if ((((l_30[2] = ((safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((((((l_21 = l_30[2]) && ((++g_31) | ((safe_mul_func_int8_t_s_s(1L, l_147[2])) <= ((((((p_13 == 1L) ^ p_12.f0) == p_13) > l_30[1]) , l_87[0]) & 0x41L)))) > p_12.f0) ^ g_118) | g_139[0]), (-1L))), g_32)) ^ l_30[0]), g_84.f0.f2)) | 0xF03AL)) || g_139[4]) <= p_12.f0))
    { 
        for (l_115.f2 = 0; (l_115.f2 < 32); l_115.f2 = safe_add_func_uint64_t_u_u(l_115.f2, 9))
        { 
            return l_115;
        }
    }
    else
    { 
        return p_12;
    }
    return g_45[2][0];
}



static int16_t  func_26(union U2  p_27, int16_t  p_28)
{ 
    int64_t l_29[5][4][5] = {{{7L,0x1E341F56A6D983A5LL,(-2L),0x1E7587697AB83DE3LL,0x69FF98E47BEBA6E3LL},{(-1L),0x015869B92B2C22B6LL,(-10L),4L,(-1L)},{0x1E7587697AB83DE3LL,(-9L),(-2L),0x69FF98E47BEBA6E3LL,(-2L)},{0L,0L,0xE69CD17CD9532955LL,(-7L),0x05B3B6AC8918CB0BLL}},{{0L,0xCEB8A064F5774D2ALL,0xC264F89C894628AELL,0xEF5EAD4A2B52F109LL,(-9L)},{1L,0x81E214356E3F0E26LL,0L,0xB5C4CE10B49F2B78LL,0xFB41CE094BF7D69FLL},{8L,0xCEB8A064F5774D2ALL,0x84ABF0A644184EB3LL,0x84ABF0A644184EB3LL,0xCEB8A064F5774D2ALL},{(-1L),0L,4L,(-1L),0xFDF20BE86DE1F171LL}},{{0x25A955069097D93CLL,(-9L),0x1BB1300CA3C47AA2LL,8L,0xEF5EAD4A2B52F109LL},{(-7L),0x015869B92B2C22B6LL,0xFB41CE094BF7D69FLL,0x81E214356E3F0E26LL,0x34437F0D30663B8BLL},{0x25A955069097D93CLL,0x1E341F56A6D983A5LL,0L,0x1E341F56A6D983A5LL,0x25A955069097D93CLL},{(-1L),0L,0x34437F0D30663B8BLL,0xFB41CE094BF7D69FLL,0L}},{{8L,7L,0x69FF98E47BEBA6E3LL,0x3EBEF27779E46ED4LL,0x6243A5D8D34108FALL},{1L,(-10L),0x845925F8A4198FE8LL,0L,0L},{0L,0x3EBEF27779E46ED4LL,0x3EBEF27779E46ED4LL,0L,0x25A955069097D93CLL},{0L,4L,(-1L),0xFDF20BE86DE1F171LL,0x34437F0D30663B8BLL}},{{0x1E7587697AB83DE3LL,0x25A955069097D93CLL,5L,(-2L),0xEF5EAD4A2B52F109LL},{(-1L),0xE69CD17CD9532955LL,0x015869B92B2C22B6LL,0xFDF20BE86DE1F171LL,0xFDF20BE86DE1F171LL},{7L,0x1E7587697AB83DE3LL,7L,0L,0xCEB8A064F5774D2ALL},{0xE69CD17CD9532955LL,(-7L),0x05B3B6AC8918CB0BLL,0L,0xFB41CE094BF7D69FLL}}};
    int i, j, k;
    return l_29[1][1][3];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_45[i][j].f0, "g_45[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_84.f0.f0, "g_84.f0.f0", print_hash_value);
    transparent_crc(g_84.f0.f1, "g_84.f0.f1", print_hash_value);
    transparent_crc(g_84.f0.f2, "g_84.f0.f2", print_hash_value);
    transparent_crc(g_84.f0.f3, "g_84.f0.f3", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_135[i], "g_135[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_139[i], "g_139[i]", print_hash_value);

    }
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_144[i], "g_144[i]", print_hash_value);

    }
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_254[i], "g_254[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_262[i], "g_262[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
