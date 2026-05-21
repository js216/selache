// SPDX-License-Identifier: MIT
// cctest_csmith_52777434.c --- cctest case csmith_52777434 (csmith seed 1383560244)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1d202b40 */

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

// Options:   -s 1383560244 -o /tmp/csmith_gen_yhnuulvn/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   const uint32_t  f1;
   const int16_t  f2;
};

struct S1 {
   const int8_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   const int8_t  f3;
   uint64_t  f4;
};

struct S2 {
   const int32_t  f0;
   int32_t  f1;
   const struct S1  f2;
   uint64_t  f3;
   uint32_t  f4;
   struct S1  f5;
};

union U3 {
   uint8_t  f0;
};


static int32_t g_4 = 0xBF2121F9L;
static const struct S1 g_20 = {0xF2L,0xA10F40BFL,65535UL,0x70L,0x1731D497C242EA6ALL};
static uint32_t g_22 = 4UL;
static uint8_t g_24 = 0UL;
static int16_t g_25 = 4L;
static struct S0 g_29[1] = {{4L,0xD8E2DC66L,0x6A86L}};
static int32_t g_40[2][3] = {{0L,0L,1L},{0L,0L,1L}};
static int64_t g_61 = 5L;
static int32_t g_63 = 0x7E5F3B42L;
static uint64_t g_65 = 1UL;
static int8_t g_72 = 0x40L;
static uint8_t g_103 = 1UL;
static uint16_t g_137 = 0x085BL;
static union U3 g_138 = {255UL};
static uint64_t g_270 = 0xD9C95290A3C8533CLL;
static int64_t g_282[3] = {(-1L),(-1L),(-1L)};



static int32_t  func_1(void);
static uint16_t  func_5(uint64_t  p_6);
static uint64_t  func_7(int32_t  p_8, uint8_t  p_9, uint32_t  p_10);
static int16_t  func_15(struct S2  p_16, const struct S1  p_17, uint64_t  p_18);




static int32_t  func_1(void)
{ 
    struct S2 l_19 = {0xB0866193L,0xE6966EF3L,{1L,0x9E6A4137L,0x6C50L,0L,8UL},0x1C84132D38CA8C98LL,6UL,{0xE0L,0x758FC567L,8UL,0x2DL,9UL}};
    uint32_t l_213 = 0x0979C41AL;
    uint32_t l_255 = 4294967295UL;
    if (((safe_lshift_func_uint8_t_u_s(g_4, 6)) == func_5(func_7((safe_mul_func_int16_t_s_s((0x6572L || ((safe_rshift_func_int16_t_s_s(func_15(l_19, ((((l_19.f5.f1 & g_4) > g_4) , 9L) , g_20), l_19.f5.f1), l_213)) > g_20.f0)), g_22)), g_138.f0, l_19.f5.f0))))
    { 
        uint32_t l_245 = 1UL;
        int32_t l_246 = (-3L);
        uint64_t l_256 = 9UL;
        int32_t l_257 = 0xEEF1BC82L;
        g_29[0].f0 = (l_246 = (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((((l_19.f2.f1 | (+(((g_20.f3 >= 0x1FAAB555L) && ((g_103 &= ((safe_sub_func_int32_t_s_s((65535UL | l_19.f3), 4294967287UL)) >= g_20.f1)) || l_245)) | g_22))) , g_20.f0) ^ (-1L)), 7)), (-10L))));
        l_257 = (l_246 ^= (18446744073709551606UL ^ (safe_div_func_int64_t_s_s((((safe_mod_func_uint16_t_u_u(g_29[0].f1, (g_137++))) == ((safe_mul_func_int16_t_s_s(g_29[0].f0, (l_255 < g_40[0][0]))) & g_63)) > l_256), l_19.f2.f3))));
    }
    else
    { 
        struct S1 l_268 = {0x4AL,0x8D7EE5ECL,0UL,0xEAL,0x253B305B964CB03ELL};
        if (((!0xCCL) >= g_25))
        { 
            if (g_4)
            { 
                int32_t l_259 = (-4L);
                g_40[1][0] = l_259;
            }
            else
            { 
                int16_t l_267 = 0xE30FL;
                g_29[0].f0 = (g_61 | (safe_rshift_func_uint16_t_u_s((!0x030DFCB1L), (g_25 = (safe_add_func_int32_t_s_s(((g_20.f2 ^ (((safe_mul_func_uint16_t_u_u(g_20.f2, 0xD998L)) != l_267) < g_29[0].f0)) ^ 0x60E98C55L), 0x5B11AA55L))))));
            }
        }
        else
        { 
            uint32_t l_281 = 7UL;
            g_40[0][2] = (l_268 , (!(((g_65 >= (++g_270)) ^ (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(g_61, 4)) < (g_282[0] = ((((((safe_mod_func_uint32_t_u_u((g_40[1][0] <= l_19.f2.f2), l_19.f2.f2)) <= l_281) ^ 0x3FAFD430L) && g_20.f0) >= 0x773B8873L) , l_268.f3))), 5UL)), g_138.f0))) & g_72)));
        }
    }
    return g_20.f1;
}



static uint16_t  func_5(uint64_t  p_6)
{ 
    int32_t l_215[2][1];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_215[i][j] = 0xE4B5579BL;
    }
    for (g_24 = 0; (g_24 <= 1); g_24 += 1)
    { 
        int8_t l_237 = 0xE5L;
        g_40[0][1] ^= l_215[0][0];
        for (g_65 = 0; (g_65 <= 1); g_65 += 1)
        { 
            union U3 l_216[3] = {{251UL},{251UL},{251UL}};
            uint8_t l_223 = 255UL;
            uint32_t l_229 = 0x5517A028L;
            int i, j;
            for (g_22 = 0; (g_22 <= 1); g_22 += 1)
            { 
                int i, j;
                g_40[g_22][(g_65 + 1)] = (l_216[2] , ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((g_40[g_24][(g_24 + 1)] ^ (g_20.f1 <= (safe_div_func_int32_t_s_s(g_138.f0, l_223)))), 5)), 1)) < p_6));
                g_40[g_24][(g_65 + 1)] = l_215[0][0];
            }
            g_40[g_24][(g_24 + 1)] = (safe_mod_func_uint16_t_u_u(((0L == ((safe_lshift_func_uint16_t_u_s((((g_72 != (~(p_6 >= l_216[2].f0))) , l_223) | p_6), 15)) != (-9L))) <= g_24), l_229));
            for (g_103 = (-11); (g_103 != 47); g_103++)
            { 
                struct S0 l_232 = {0x9811396CL,0x6EF8A683L,0L};
                g_29[0].f0 |= (((l_232 , g_137) & g_40[g_24][(g_24 + 1)]) == ((g_61 = (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((l_237 || l_215[0][0]), 6)), g_40[1][0]))) && l_237));
                g_40[1][2] = (l_232.f1 , 0x50BE3B63L);
            }
        }
    }
    return p_6;
}



static uint64_t  func_7(int32_t  p_8, uint8_t  p_9, uint32_t  p_10)
{ 
    int32_t l_214 = 0x8847EDA4L;
    return l_214;
}



static int16_t  func_15(struct S2  p_16, const struct S1  p_17, uint64_t  p_18)
{ 
    int8_t l_21 = 0x46L;
    int32_t l_23 = 0x28F0FC5AL;
    int32_t l_99[5][2][2] = {{{0x8101EF9CL,0xB2F6CA1BL},{0xCA447F7BL,0xB2F6CA1BL}},{{0x8101EF9CL,0xCA447F7BL},{0L,0L}},{{0L,0xCA447F7BL},{0x8101EF9CL,0xB2F6CA1BL}},{{0xCA447F7BL,0xB2F6CA1BL},{0x8101EF9CL,0xCA447F7BL}},{{0L,0L},{0L,0xCA447F7BL}}};
    int64_t l_100 = 0xCA8444AC55104165LL;
    int16_t l_136[1][2];
    uint64_t l_139 = 0xBD6EBF7B4E91CA70LL;
    const int8_t l_171 = 0L;
    uint32_t l_182[2][5] = {{4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL},{0xFBB9B6F4L,0xFBB9B6F4L,0xFBB9B6F4L,0xFBB9B6F4L,0xFBB9B6F4L}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_136[i][j] = 1L;
    }
    l_23 = (((0x0A061FA46B4C01F9LL > (l_21 ^ (p_16 , ((((((0x0953B224L || g_20.f3) >= l_21) ^ l_21) , 0x28C4F412L) != g_20.f3) , g_22)))) <= p_16.f5.f2) <= g_20.f3);
    g_25 = (0x91BF520FL != g_24);
    if ((safe_mod_func_int32_t_s_s(p_16.f2.f2, (((((~(g_29[0] , g_25)) >= l_23) >= g_20.f1) < l_23) || (-7L)))))
    { 
        int8_t l_41 = (-1L);
        int32_t l_42 = 0L;
        int32_t l_43 = 0xE8CE1F6DL;
        l_43 = (safe_rshift_func_int8_t_s_s((l_42 = (((safe_mod_func_uint16_t_u_u((g_40[0][1] &= (p_17 , ((((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((g_29[0].f0 = g_29[0].f1), g_22)), (safe_mod_func_uint32_t_u_u(g_29[0].f2, p_16.f4)))) <= 0x7AL) ^ l_23) == l_21))), g_29[0].f1)) != 1L) , l_41)), 6));
    }
    else
    { 
        union U3 l_56 = {248UL};
        int32_t l_77 = 0x332F7F6FL;
        int32_t l_88 = 2L;
        int32_t l_91 = 0x11D2751BL;
        int32_t l_92 = 0x87C28FDDL;
        int32_t l_93 = 0x1D698337L;
        int32_t l_95[2];
        struct S1 l_147 = {-1L,1UL,1UL,0x38L,1UL};
        int16_t l_197 = 8L;
        uint32_t l_204 = 18446744073709551615UL;
        union U3 l_211 = {0x23L};
        int i;
        for (i = 0; i < 2; i++)
            l_95[i] = 0L;
        if (g_20.f0)
        { 
            uint8_t l_62 = 1UL;
            int8_t l_64 = (-1L);
            int32_t l_73 = 0x6ED2767FL;
            int32_t l_80 = 4L;
            int32_t l_94 = 1L;
            int32_t l_97[5] = {0xDFAB55DAL,0xDFAB55DAL,0xDFAB55DAL,0xDFAB55DAL,0xDFAB55DAL};
            int8_t l_98 = 0x67L;
            int32_t l_140[5][2] = {{0x56403DF3L,0x40BCE341L},{0x2AF5FF99L,0x40BCE341L},{0x56403DF3L,0x2AF5FF99L},{8L,8L},{8L,0x2AF5FF99L}};
            int i, j;
            if (((g_65 = ((safe_rshift_func_uint8_t_u_s((p_16.f1 ^ (((g_63 = ((3UL & (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((((l_56 , (g_61 = (safe_add_func_uint8_t_u_u((g_24 |= (safe_sub_func_uint8_t_u_u((18446744073709551615UL >= 0x28E342BA517386F7LL), 0x10L))), 1L)))) || p_16.f5.f3) <= p_16.f4), p_16.f2.f2)) , l_56.f0), p_16.f5.f1)), 12)), g_22)), l_62))) ^ g_29[0].f0)) >= g_20.f4) && 255UL)), 6)) , l_64)) , g_25))
            { 
                int64_t l_67 = 3L;
                l_73 = (g_29[0].f0 = (((+(l_67 <= (safe_add_func_int32_t_s_s(0x4F7295DFL, ((safe_add_func_uint32_t_u_u(((0xE040L || (p_16.f5.f2 || l_56.f0)) >= g_29[0].f0), 0x7A386FCCL)) && g_72))))) <= g_20.f0) ^ g_4));
                l_80 = ((+(safe_rshift_func_uint8_t_u_u(g_61, (g_24 |= ((l_77 = g_20.f2) && ((((safe_lshift_func_int8_t_s_s(l_62, 7)) || (l_73 = ((l_21 , g_40[0][0]) > l_64))) || l_77) < l_77)))))) <= g_25);
            }
            else
            { 
                const int32_t l_87[2][3] = {{(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L)}};
                int32_t l_89 = 0x79C9DB8DL;
                int32_t l_90 = 0L;
                int32_t l_96[3][1][3] = {{{0x439C88BFL,0x439C88BFL,0x439C88BFL}},{{0x3B02FF5FL,6L,0x3B02FF5FL}},{{0x439C88BFL,0x439C88BFL,0x439C88BFL}}};
                int32_t l_101 = 0L;
                int8_t l_102 = 0xEAL;
                int i, j, k;
                g_40[0][1] = ((((p_17.f1 <= (((l_77 = 0L) , ((safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(p_16.f4, (safe_rshift_func_uint8_t_u_s(0UL, l_77)))) , 0L), 1UL)) ^ g_25)) > l_56.f0)) == p_17.f0) ^ l_87[0][1]) >= l_62);
                --g_103;
                l_77 = g_29[0].f2;
            }
            if (((safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((((p_16.f5.f3 ^ ((safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint8_t_u_u(1UL, 3)) | 0x5DL) | ((g_25 |= g_40[0][1]) <= g_40[0][0])), g_29[0].f1)) | 0x91F83F8AD03F8387LL)) ^ l_56.f0) == 0x2A89L), g_40[0][1])) ^ 0x97L), l_97[3])) && g_29[0].f0) >= 0x75BC96B2L), l_62)) ^ p_16.f0))
            { 
                l_140[4][1] = ((safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((((safe_unary_minus_func_uint32_t_u((l_97[3] = (g_137 = (p_16 , (0x71L & (p_16.f3 >= ((l_93 ^= (safe_unary_minus_func_int32_t_s((((safe_lshift_func_int8_t_s_s(((l_95[0] = ((l_88 = ((safe_mul_func_uint16_t_u_u(0UL, l_97[0])) >= 0UL)) , 0x86L)) , (-7L)), l_80)) > l_136[0][1]) & l_73)))) || p_17.f2)))))))) , g_138) , l_95[0]), 1L)) || g_22), g_40[1][1])), l_56.f0)), p_16.f0)), l_91)), l_139)), l_64)) | l_140[4][1]);
            }
            else
            { 
                const struct S0 l_164 = {0x4F2A5F76L,18446744073709551608UL,0x47D8L};
                l_23 &= (safe_sub_func_uint64_t_u_u(((l_95[1] ^= ((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((l_147 , (safe_mul_func_uint16_t_u_u(65535UL, (safe_mul_func_uint16_t_u_u(g_20.f3, (g_137 = ((safe_mul_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((g_65 &= (safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u((l_164 , p_16.f4), g_20.f3)), 0x23A6D7AE1D0CBB2BLL))), g_20.f4)), p_17.f3)), 0x02L)) > l_100) > p_16.f2.f0), g_25)) < g_138.f0))))))), l_164.f0)), 0xEF38C781L)) | l_99[1][1][0])) != 0x85DD0340L), 0x2F4C2597332F4EEELL));
                l_140[4][1] |= g_72;
            }
        }
        else
        { 
            int32_t l_173 = (-5L);
            int32_t l_175 = 0x24070B36L;
            int32_t l_179[2];
            int i;
            for (i = 0; i < 2; i++)
                l_179[i] = (-1L);
            for (p_18 = 0; (p_18 <= 1); p_18 += 1)
            { 
                uint32_t l_172 = 0xC68B7B37L;
                int32_t l_174 = 1L;
                int32_t l_176 = 0xFAA0CEB8L;
                int32_t l_177 = 0x3D5E54CFL;
                int32_t l_178 = 0x39471759L;
                int32_t l_180 = 0xB008311EL;
                int32_t l_181[3][5] = {{1L,1L,0xC8C8FA0CL,1L,1L},{0x2B6535DDL,1L,0x2B6535DDL,0x2B6535DDL,1L},{1L,0x2B6535DDL,0x2B6535DDL,1L,0x2B6535DDL}};
                int i, j;
                g_40[0][1] = ((safe_add_func_uint64_t_u_u(g_138.f0, (((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((((g_137 | 65527UL) , (l_92 ^= ((((l_172 = (0x34840841L ^ l_171)) , l_172) && g_20.f3) ^ p_16.f5.f2))) , g_40[0][0]), l_147.f2)), p_17.f2)) || 4UL) | 255UL))) & 1L);
                --l_182[1][0];
            }
            l_179[1] &= ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((g_72 = p_17.f3), ((((p_17.f1 & ((safe_add_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(p_16.f2.f0, ((((safe_mul_func_int16_t_s_s(l_91, l_92)) < 2L) && p_17.f1) && p_16.f2.f1))), l_182[0][3])) == p_17.f0), 1L)) < (-6L))) <= 0x42AD1B8BL) , l_173) || p_16.f1))) ^ g_25), 7)) | 1UL);
            for (l_92 = 0; (l_92 <= 1); l_92 += 1)
            { 
                int64_t l_198[1];
                uint32_t l_199 = 0x3267F2E3L;
                int i;
                for (i = 0; i < 1; i++)
                    l_198[i] = (-10L);
                l_199++;
                return l_179[l_92];
            }
        }
        for (l_91 = 4; (l_91 > 7); ++l_91)
        { 
            uint32_t l_212 = 4294967291UL;
            l_204 = g_25;
            g_40[1][0] = (safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_16.f1, l_136[0][1])), ((l_99[1][1][0] &= (l_77 |= l_23)) , (l_211 , g_29[0].f1)))) == 4294967287UL), g_103));
            if (l_212)
                continue;
        }
    }
    return p_18;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_20.f1, "g_20.f1", print_hash_value);
    transparent_crc(g_20.f2, "g_20.f2", print_hash_value);
    transparent_crc(g_20.f3, "g_20.f3", print_hash_value);
    transparent_crc(g_20.f4, "g_20.f4", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_29[i].f0, "g_29[i].f0", print_hash_value);
        transparent_crc(g_29[i].f1, "g_29[i].f1", print_hash_value);
        transparent_crc(g_29[i].f2, "g_29[i].f2", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_40[i][j], "g_40[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_282[i], "g_282[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
