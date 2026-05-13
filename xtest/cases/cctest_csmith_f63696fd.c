// SPDX-License-Identifier: MIT
// cctest_csmith_f63696fd.c --- cctest case csmith_f63696fd (csmith seed 4130772733)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe638bf59 */

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

// Options:   -s 4130772733 -o /tmp/csmith_gen_clf5fkqs/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint8_t  f0;
   const uint16_t  f1;
   int32_t  f2;
   uint16_t  f3;
   const uint64_t  f4;
   int16_t  f5;
};

union U1 {
   uint32_t  f0;
};


static int32_t g_2 = 0x871D976FL;
static uint8_t g_4[5][4][1] = {{{1UL},{0xDBL},{1UL},{0xDBL}},{{1UL},{0xDBL},{1UL},{0xDBL}},{{1UL},{0xDBL},{1UL},{0xDBL}},{{1UL},{0xDBL},{1UL},{0xDBL}},{{1UL},{0xDBL},{1UL},{0xDBL}}};
static int32_t g_9 = (-9L);
static uint8_t g_19 = 252UL;
static int8_t g_22[3] = {0x2FL,0x2FL,0x2FL};
static uint32_t g_38 = 0x6AC8918CL;
static int16_t g_39 = (-1L);
static uint16_t g_40[3][2][1] = {{{65535UL},{0x9E46L}},{{65535UL},{65535UL}},{{0x9E46L},{65535UL}}};
static int64_t g_44 = 0L;
static struct S0 g_67[1] = {{0x32L,65530UL,0x9F33C750L,0x5145L,0x7548BA0296C032BELL,1L}};
static union U1 g_68 = {0x1DC8D5A9L};
static int8_t g_82 = 8L;
static uint64_t g_84 = 0UL;
static int32_t g_91 = (-9L);
static int8_t g_94 = (-1L);
static uint8_t g_123 = 0xF8L;
static int8_t g_125[3][1] = {{0x6BL},{0x6BL},{0x6BL}};
static int32_t g_126 = 0x5162D90DL;
static int32_t g_128[5] = {0L,0L,0L,0L,0L};
static uint32_t g_130 = 0x99312A2FL;
static uint16_t g_133[3] = {0UL,0UL,0UL};
static uint32_t g_144 = 0xA0D44C9CL;
static uint32_t g_176 = 0xF1B690FFL;
static uint32_t g_179 = 0x7DE130CBL;
static uint32_t g_215[1][5][3] = {{{4294967293UL,8UL,0xF4F8DC88L},{4294967293UL,4294967293UL,0UL},{0xF4F8DC88L,0UL,0UL},{0UL,4294967293UL,0x25DA560FL},{0xF4F8DC88L,4294967293UL,0xF4F8DC88L}}};
static uint32_t g_216 = 18446744073709551615UL;
static int64_t g_218[4] = {8L,8L,8L,8L};
static int64_t g_220 = (-7L);
static int16_t g_221 = 0xE755L;
static uint32_t g_222 = 0x658010A5L;
static int8_t g_255[5][2] = {{0x6EL,0x6EL},{0x6EL,0x6EL},{0x6EL,0x6EL},{0x6EL,0x6EL},{0x6EL,0x6EL}};
static int64_t g_256 = 0x178F1F42B0BF3EEELL;
static int32_t g_257 = 0x14C64479L;
static int8_t g_258[2][4][3] = {{{0x3BL,0x4CL,0L},{(-5L),0x4CL,(-5L)},{(-1L),0x3BL,0L},{(-1L),(-1L),0x3BL}},{{(-5L),0x3BL,0x3BL},{0x3BL,0x4CL,0L},{(-5L),0x4CL,(-5L)},{(-1L),0x3BL,0L}}};
static int16_t g_259 = 0xCCDAL;
static uint16_t g_260[4][5] = {{0xEACDL,0xEACDL,0UL,65527UL,0UL},{1UL,1UL,0xB6FBL,65526UL,0xB6FBL},{0xEACDL,0xEACDL,0UL,65527UL,0UL},{1UL,1UL,0xB6FBL,65526UL,0xB6FBL}};



static union U1  func_1(void);
static int64_t  func_14(uint8_t  p_15);
static const uint8_t  func_26(int32_t  p_27, int32_t  p_28, struct S0  p_29, const uint64_t  p_30);
static int32_t  func_45(union U1  p_46, int8_t  p_47, int32_t  p_48, int64_t  p_49, const uint16_t  p_50);




static union U1  func_1(void)
{ 
    int32_t l_3[3][5][5] = {{{8L,(-10L),0x3AEB5900L,1L,0x51CFD1F2L},{0L,0x9869EC42L,0x7E307B5CL,0x9869EC42L,0L},{0x39E3CF95L,0x96673E7EL,(-1L),0x9869EC42L,1L},{0xE1CA2961L,0x39E3CF95L,0xD2F38D92L,1L,0xA147B80BL},{0x7E307B5CL,(-1L),1L,0x96673E7EL,1L}},{{1L,1L,0xEC01E6E2L,0xD2F38D92L,0L},{1L,0xCF5A8B06L,0L,0x3AEB5900L,0x51CFD1F2L},{0x7E307B5CL,8L,0xA147B80BL,(-10L),0x9869EC42L},{0xE1CA2961L,0xCF5A8B06L,0xCF5A8B06L,0xE1CA2961L,0L},{0x39E3CF95L,1L,0xCF5A8B06L,0L,0x3AEB5900L}},{{0L,(-1L),0xA147B80BL,0x7E307B5CL,0xCF5A8B06L},{8L,0x39E3CF95L,0L,0L,0x39E3CF95L},{0x51CFD1F2L,0x96673E7EL,0xEC01E6E2L,0xE1CA2961L,0x39E3CF95L},{(-1L),0x9869EC42L,1L,(-10L),0xCF5A8B06L},{0x96673E7EL,(-10L),0xD2F38D92L,0x3AEB5900L,0x3AEB5900L}}};
    struct S0 l_32 = {1UL,0xD341L,-1L,0x7AD1L,1UL,0L};
    int32_t l_217 = 0L;
    int32_t l_267 = 0xF897EB01L;
    union U1 l_268 = {0x202CF8D8L};
    int i, j, k;
    g_4[1][0][0]--;
    for (g_2 = 25; (g_2 > 28); g_2 = safe_add_func_uint64_t_u_u(g_2, 9))
    { 
        const uint32_t l_33[3] = {0UL,0UL,0UL};
        uint64_t l_213 = 18446744073709551615UL;
        int32_t l_219 = (-10L);
        int i;
        for (g_9 = 0; (g_9 >= 0); g_9 -= 1)
        { 
            int16_t l_31 = 6L;
            int32_t l_214[4][2][4] = {{{5L,(-1L),(-1L),6L},{2L,(-1L),(-1L),2L}},{{(-1L),2L,5L,0xF9EC2223L},{(-1L),5L,(-1L),(-1L)}},{{2L,0xF9EC2223L,(-1L),(-1L)},{5L,5L,6L,0xF9EC2223L}},{{0xF9EC2223L,2L,6L,2L},{5L,(-1L),(-1L),6L}}};
            int32_t l_254 = 7L;
            int i, j, k;
            if ((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_9, (func_14(l_3[1][2][1]) , (((func_26(l_31, l_31, l_32, l_33[2]) && g_179) || 0x1918L) ^ l_213)))), g_67[0].f2)))
            { 
                l_214[2][1][1] = 1L;
            }
            else
            { 
                l_217 = ((l_33[2] ^ ((g_67[0].f0 , (g_216 = (g_215[0][0][0] = g_67[0].f3))) != 0x3A562FC3L)) >= 65535UL);
            }
            --g_222;
            if (l_33[1])
                continue;
            for (l_219 = 0; (l_219 <= 0); l_219 += 1)
            { 
                int64_t l_235 = 1L;
                int i, j, k;
                l_235 = (g_4[(g_9 + 2)][(l_219 + 2)][g_9] | (safe_mod_func_int8_t_s_s(g_67[0].f1, (safe_mod_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s(g_221, (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((g_67[0].f5 = ((g_40[0][1][0] <= l_214[1][0][2]) != l_33[0])), g_4[(g_9 + 2)][(l_219 + 2)][g_9])), l_32.f2)))) == 0x3085C728L) && g_218[1]), 0x523AF13D7B9707ECLL)))));
                g_255[4][0] &= (((safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((((safe_sub_func_int32_t_s_s((l_3[2][0][0] = l_31), (safe_div_func_int64_t_s_s(((l_214[2][1][1] > (g_67[0].f3 = ((g_4[(g_9 + 3)][(g_9 + 1)][g_9] = 253UL) ^ (safe_add_func_uint32_t_u_u((((g_19 = ((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(1UL, g_9)), 0x31L)), 4)) <= 65535UL), g_22[0])) , l_254)) < g_179) <= l_31), l_217))))) < g_218[1]), g_130)))) && g_130) && g_4[l_219][(l_219 + 2)][l_219]) || g_91) <= 8L), l_235)), g_144)) || 0xF45283C700573013LL) < 0x36L);
                --g_260[2][4];
            }
        }
        if (g_44)
            continue;
    }
    l_267 &= (((l_217 = (((((safe_mul_func_uint16_t_u_u(65529UL, l_32.f3)) , (safe_mul_func_uint16_t_u_u((((g_19 = (255UL <= ((l_32.f1 == 4294967289UL) >= l_32.f4))) & 0x26L) , g_260[1][3]), g_257))) < g_91) != l_32.f5) , l_32.f5)) == g_2) == 0xBB70L);
    return l_268;
}



static int64_t  func_14(uint8_t  p_15)
{ 
    uint32_t l_23 = 0x2C005D9CL;
    for (p_15 = 0; (p_15 == 5); ++p_15)
    { 
        uint32_t l_18 = 0xE6E40424L;
        int32_t l_20 = 4L;
        int32_t l_21 = 0x5F4B3F4BL;
        l_21 ^= (l_20 |= (g_19 = l_18));
        --l_23;
        if (l_23)
            continue;
    }
    return g_19;
}



static const uint8_t  func_26(int32_t  p_27, int32_t  p_28, struct S0  p_29, const uint64_t  p_30)
{ 
    uint32_t l_36[5][5];
    int32_t l_37 = 0L;
    union U1 l_51 = {0x4A9B8364L};
    int32_t l_193 = 0x293169C2L;
    uint16_t l_210 = 0xFD11L;
    int32_t l_211 = 1L;
    uint16_t l_212 = 65529UL;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            l_36[i][j] = 0xF56A6D98L;
    }
    if (func_14(p_29.f4))
    { 
        int64_t l_43 = 1L;
        g_40[0][1][0] &= (g_39 = (g_38 = (((l_36[3][2] = (0xEA381E16L || (0x19L < p_29.f0))) >= l_37) || (-9L))));
        g_44 = (p_29.f4 , (safe_div_func_int64_t_s_s(((0x40L < g_4[1][3][0]) || (p_29.f4 == l_43)), g_40[0][1][0])));
    }
    else
    { 
        int64_t l_60 = 0xF4693715CD22FFD3LL;
        int32_t l_61 = (-2L);
        int32_t l_62[4];
        int i;
        for (i = 0; i < 4; i++)
            l_62[i] = 0L;
        g_133[0] = func_45(l_51, l_51.f0, (l_62[1] ^= (safe_mod_func_uint16_t_u_u(((((l_37 ^= p_29.f0) && ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s(((((((((((l_60 |= 0x911FL) == g_40[0][1][0]) >= 18446744073709551609UL) <= 2UL) < (-1L)) < g_40[0][1][0]) == l_36[3][2]) <= p_28) <= g_40[2][0][0]) != l_61), 0x108D8C4114487F17LL)) > g_44) == l_51.f0), l_37)), l_61)) <= g_44)) | g_22[1]) , g_38), 1UL))), p_30, g_38);
        if (((((++g_84) < p_29.f5) && (p_29.f0 >= ((safe_add_func_int32_t_s_s(((!((+g_40[1][1][0]) , (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((g_126 , g_68.f0), l_36[3][2])), 2)) <= p_30) || 0xE01FL))) == p_29.f0), g_2)) , l_61))) < l_37))
        { 
            l_62[1] = 0x0126A6CCL;
        }
        else
        { 
            --g_144;
        }
        for (p_28 = 0; (p_28 <= 19); p_28 = safe_add_func_int32_t_s_s(p_28, 1))
        { 
            int16_t l_174[4][3][4] = {{{0x39DEL,0x39DEL,(-5L),0x3074L},{0xEFB4L,(-1L),0xEFB4L,(-5L)},{0xEFB4L,(-5L),(-5L),0xEFB4L}},{{0x39DEL,0xEFB4L,(-1L),0xEFB4L},{0xEFB4L,0x39DEL,(-1L),(-1L)},{(-5L),(-5L),0xEFB4L,(-1L)}},{{0x3074L,0x39DEL,0x3074L,0xEFB4L},{0x3074L,0xEFB4L,0xEFB4L,0x3074L},{(-5L),0xEFB4L,(-1L),0xEFB4L}},{{0xEFB4L,0x39DEL,(-1L),(-1L)},{(-5L),(-5L),0xEFB4L,(-1L)},{0x3074L,0x39DEL,0x3074L,0xEFB4L}}};
            int32_t l_178 = 0x35A6E075L;
            int i, j, k;
            for (g_84 = (-1); (g_84 == 37); ++g_84)
            { 
                uint8_t l_177[3][2];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_177[i][j] = 247UL;
                }
                l_178 = (l_177[0][0] &= (safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((l_51 , (safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(g_125[2][0], (safe_mul_func_uint8_t_u_u((g_176 ^= ((((safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u((l_174[2][2][1] & (safe_unary_minus_func_int8_t_s((0UL || p_27)))), 0xD78287FBL)), g_4[2][3][0])) > g_84) != g_128[0]) , p_29.f3)), p_29.f1)))) != g_2), 0x0FL)), g_4[1][0][0])), 11)), 5)))) <= g_67[0].f5), g_67[0].f3))) , p_29.f3), 3)) & l_62[0]), p_29.f0)));
                l_178 = p_28;
            }
            if (((-2L) & p_29.f4))
            { 
                g_179++;
            }
            else
            { 
                uint64_t l_194[3];
                int32_t l_195 = (-1L);
                int i;
                for (i = 0; i < 3; i++)
                    l_194[i] = 0x17EA376DD06A0EAFLL;
                l_193 ^= ((safe_add_func_uint8_t_u_u(p_29.f4, (safe_mod_func_int32_t_s_s((p_27 = ((safe_add_func_int32_t_s_s((~p_29.f3), p_28)) >= (safe_mod_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(p_27, l_37)), l_62[0])))), p_28)))) , g_130);
                p_27 = ((l_194[0] = 0xD8CDCC97L) , ((((((p_30 , l_195) , (l_193 = (safe_mul_func_int16_t_s_s((l_194[1] && (-10L)), l_178)))) < 0xFFL) & l_51.f0) >= l_194[2]) | 0x62L));
                p_27 &= (safe_lshift_func_int16_t_s_s((2UL < p_29.f5), ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((safe_mod_func_uint32_t_u_u((g_130++), (0xAA1D096303E4D4EBLL | 1UL))) , 0x24DB70BDD84C012CLL) || p_29.f5), 6)), 10)) , p_29.f1)));
            }
        }
    }
    l_211 &= ((((((((safe_mul_func_int16_t_s_s((l_37 = (l_36[3][2] == (l_193 < 0x8B59L))), g_133[0])) >= l_210) != l_193) , l_37) ^ p_27) | 0x259DL) <= l_193) & p_29.f4);
    l_212 = l_211;
    return l_36[0][2];
}



static int32_t  func_45(union U1  p_46, int8_t  p_47, int32_t  p_48, int64_t  p_49, const uint16_t  p_50)
{ 
    uint32_t l_69 = 18446744073709551611UL;
    int32_t l_70 = 0x515E6AD3L;
    int32_t l_71 = 0x32E7287DL;
    int32_t l_124 = 0x33710A17L;
    int32_t l_127 = 1L;
    int32_t l_129[4][1][3] = {{{0x8498979BL,0x8498979BL,0x8498979BL}},{{0x8B9EE848L,0L,0x8B9EE848L}},{{0x8498979BL,0x8498979BL,0x8498979BL}},{{0x8B9EE848L,0L,0x8B9EE848L}}};
    int i, j, k;
    if (((safe_lshift_func_uint16_t_u_u((0x2C2FL ^ (((l_71 = ((safe_add_func_int16_t_s_s(((l_70 |= (0x2727C38DL >= (l_69 &= ((g_67[0] , (g_68 , (-9L))) > p_46.f0)))) || 0x3DC2L), 0L)) <= 1L)) , p_49) , g_67[0].f4)), 15)) , g_39))
    { 
        int32_t l_76[5][2] = {{0xCD71D57AL,0x57EF93BBL},{0xCD71D57AL,0xCD71D57AL},{0x57EF93BBL,0xCD71D57AL},{0xCD71D57AL,0x57EF93BBL},{0xCD71D57AL,0xCD71D57AL}};
        int32_t l_93 = 0L;
        int i, j;
        for (g_38 = 0; (g_38 == 35); ++g_38)
        { 
            int64_t l_79 = 0xA1B12C121480219ELL;
            int32_t l_81 = 1L;
            int32_t l_83 = 0xD9E462E6L;
            for (p_47 = 0; (p_47 != (-22)); p_47--)
            { 
                int16_t l_80 = 0x3C45L;
                int32_t l_92 = (-4L);
                l_76[2][0] = l_76[2][1];
                l_70 = 0xDA2FB924L;
                g_94 = ((l_71 &= ((safe_mod_func_uint64_t_u_u((--g_84), l_80)) ^ ((((((l_83 ^ (((l_81 ^= g_4[3][2][0]) && (safe_lshift_func_int8_t_s_s((((((l_92 = ((g_91 = (safe_rshift_func_int16_t_s_s((((l_76[2][1] = l_80) , (-2L)) && 7L), 4))) <= l_70)) < p_48) || l_80) != l_93) , p_50), g_9))) || g_82)) ^ g_38) != 0x14953B525E98B508LL) , l_76[2][1]) != l_79) , l_83))) ^ p_50);
            }
            for (l_70 = 18; (l_70 <= (-8)); l_70 = safe_sub_func_int16_t_s_s(l_70, 9))
            { 
                uint8_t l_97 = 1UL;
                ++l_97;
            }
            l_83 = g_19;
        }
    }
    else
    { 
        return l_70;
    }
    for (g_39 = (-21); (g_39 != 19); g_39++)
    { 
        int64_t l_112 = 1L;
        l_71 = (safe_mod_func_int64_t_s_s(g_40[2][0][0], (((safe_lshift_func_uint16_t_u_s(g_67[0].f4, 13)) > (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(l_112, (((g_19 = g_68.f0) ^ 0x42L) || p_49))), 1)), l_112))) || l_71)));
        g_123 = ((safe_sub_func_uint64_t_u_u(l_71, (((safe_mul_func_uint16_t_u_u(((g_40[0][1][0] <= (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(g_4[1][0][0], 7)), l_112))) ^ g_82), l_71)) == p_47) == 0L))) && l_112);
    }
    --g_130;
    return g_67[0].f1;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_22[i], "g_22[i]", print_hash_value);

    }
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_40[i][j][k], "g_40[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_67[i].f0, "g_67[i].f0", print_hash_value);
        transparent_crc(g_67[i].f1, "g_67[i].f1", print_hash_value);
        transparent_crc(g_67[i].f2, "g_67[i].f2", print_hash_value);
        transparent_crc(g_67[i].f3, "g_67[i].f3", print_hash_value);
        transparent_crc(g_67[i].f4, "g_67[i].f4", print_hash_value);
        transparent_crc(g_67[i].f5, "g_67[i].f5", print_hash_value);

    }
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_125[i][j], "g_125[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_126, "g_126", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_128[i], "g_128[i]", print_hash_value);

    }
    transparent_crc(g_130, "g_130", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_133[i], "g_133[i]", print_hash_value);

    }
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_215[i][j][k], "g_215[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_216, "g_216", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_218[i], "g_218[i]", print_hash_value);

    }
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_255[i][j], "g_255[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_258[i][j][k], "g_258[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_259, "g_259", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_260[i][j], "g_260[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
