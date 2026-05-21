// SPDX-License-Identifier: MIT
// cctest_csmith_c471f2fa.c --- cctest case csmith_c471f2fa (csmith seed 3295802106)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb12785e2 */

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

// Options:   -s 3295802106 -o /tmp/csmith_gen_mku4b1ds/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint8_t  f0;
   int16_t  f1;
   const uint64_t  f2;
   const int32_t  f3;
   uint16_t  f4;
   int8_t  f5;
};

union U1 {
   uint8_t  f0;
   uint64_t  f1;
};

union U2 {
   int64_t  f0;
   uint32_t  f1;
   int16_t  f2;
   int64_t  f3;
};

union U3 {
   struct S0  f0;
   const uint32_t  f1;
   struct S0  f2;
   int8_t  f3;
};

union U4 {
   int16_t  f0;
   uint32_t  f1;
};

union U5 {
   uint8_t  f0;
   int8_t  f1;
   uint64_t  f2;
   uint16_t  f3;
};

union U6 {
   int32_t  f0;
   int8_t * f1;
   const struct S0  f2;
   int8_t * f3;
   const struct S0  f4;
};


static int32_t g_5 = 7L;
static int32_t g_8 = 2L;
static int32_t g_11 = 0x652065C8L;
static int8_t g_19 = 6L;
static int8_t *g_18 = &g_19;
static uint16_t g_29 = 0xC28CL;
static uint32_t g_35 = 4294967287UL;
static int32_t g_70 = (-1L);
static uint8_t g_74 = 1UL;
static int16_t g_110 = (-2L);
static uint64_t g_131 = 0x2D83E4BC4670F823LL;
static uint64_t g_154 = 1UL;
static int32_t g_174 = 0xCBC61721L;
static int32_t *g_176 = &g_174;
static struct S0 g_178 = {6UL,8L,18446744073709551613UL,6L,0xDE68L,-1L};
static uint8_t g_199 = 252UL;
static int32_t g_227 = 0x4C8DAF8AL;
static int32_t g_228 = 0L;
static uint32_t g_229 = 1UL;
static struct S0 g_250 = {0UL,5L,0UL,3L,0x2675L,0L};
static const struct S0 g_253 = {255UL,6L,1UL,0x9D417AC9L,1UL,0x05L};
static struct S0 *g_273[3] = {(void*)0,(void*)0,(void*)0};
static struct S0 **g_272 = &g_273[1];
static union U3 g_286 = {{0xE1L,0xEA11L,1UL,-8L,0x0DCDL,0L}};
static union U4 g_304[4][5][4] = {{{{0x7FFDL},{-8L},{0x7FFDL},{-1L}},{{-7L},{-8L},{0x8FBEL},{-8L}},{{-7L},{-1L},{0x7FFDL},{-8L}},{{0x7FFDL},{-8L},{0x7FFDL},{-1L}},{{-7L},{-8L},{0x8FBEL},{-8L}}},{{{-7L},{-1L},{0x7FFDL},{-8L}},{{0x7FFDL},{-8L},{0x7FFDL},{-1L}},{{-7L},{-8L},{0x8FBEL},{-8L}},{{-7L},{-1L},{0x7FFDL},{-8L}},{{0x7FFDL},{-8L},{0x7FFDL},{-1L}}},{{{-7L},{-8L},{0x8FBEL},{-1L}},{{0x7FFDL},{0xA6ADL},{0x8FBEL},{-1L}},{{0x8FBEL},{-1L},{0x8FBEL},{0xA6ADL}},{{0x7FFDL},{-1L},{-7L},{-1L}},{{0x7FFDL},{0xA6ADL},{0x8FBEL},{-1L}}},{{{0x8FBEL},{-1L},{0x8FBEL},{0xA6ADL}},{{0x7FFDL},{-1L},{-7L},{-1L}},{{0x7FFDL},{0xA6ADL},{0x8FBEL},{-1L}},{{0x8FBEL},{-1L},{0x8FBEL},{0xA6ADL}},{{0x7FFDL},{-1L},{-7L},{-1L}}}};
static union U4 *g_303[6][5][6] = {{{&g_304[2][3][3],&g_304[3][2][0],&g_304[2][3][3],&g_304[3][2][0],&g_304[0][4][2],&g_304[2][4][0]},{&g_304[2][1][0],(void*)0,&g_304[0][4][2],&g_304[2][0][2],&g_304[0][4][2],(void*)0},{&g_304[0][4][2],&g_304[3][2][0],&g_304[0][3][1],&g_304[2][0][2],&g_304[3][2][0],&g_304[3][2][0]},{&g_304[2][1][0],&g_304[3][2][0],&g_304[0][3][1],&g_304[3][2][0],&g_304[2][1][0],(void*)0},{&g_304[2][3][3],&g_304[3][2][0],&g_304[0][4][2],&g_304[2][4][0],&g_304[3][2][0],&g_304[2][4][0]}},{{&g_304[2][3][3],&g_304[3][2][0],&g_304[2][3][3],&g_304[3][2][0],&g_304[0][4][2],&g_304[2][4][0]},{&g_304[2][1][0],(void*)0,&g_304[0][4][2],&g_304[2][0][2],&g_304[0][4][2],(void*)0},{&g_304[0][4][2],&g_304[3][2][0],&g_304[0][3][1],&g_304[2][0][2],&g_304[3][2][0],&g_304[3][2][0]},{&g_304[2][1][0],&g_304[3][2][0],&g_304[0][3][1],&g_304[3][2][0],&g_304[2][1][0],(void*)0},{&g_304[2][3][3],&g_304[3][2][0],&g_304[0][4][2],&g_304[2][4][0],&g_304[3][2][0],&g_304[2][4][0]}},{{&g_304[2][3][3],&g_304[3][2][0],&g_304[2][3][3],&g_304[3][2][0],&g_304[0][4][2],&g_304[2][4][0]},{&g_304[2][1][0],(void*)0,&g_304[0][4][2],&g_304[2][0][2],&g_304[0][4][2],(void*)0},{&g_304[0][4][2],&g_304[3][2][0],&g_304[0][3][1],&g_304[2][0][2],&g_304[3][2][0],&g_304[3][2][0]},{&g_304[2][1][0],&g_304[3][2][0],&g_304[0][3][1],&g_304[3][2][0],&g_304[2][1][0],(void*)0},{&g_304[2][3][3],&g_304[3][2][0],&g_304[0][4][2],&g_304[2][4][0],&g_304[3][2][0],&g_304[2][4][0]}},{{&g_304[2][3][3],&g_304[3][2][0],&g_304[2][3][3],&g_304[3][2][0],&g_304[0][4][2],&g_304[2][4][0]},{&g_304[2][1][0],(void*)0,&g_304[0][4][2],&g_304[2][0][2],&g_304[0][4][2],(void*)0},{&g_304[0][4][2],&g_304[3][2][0],&g_304[0][3][1],&g_304[2][0][2],&g_304[3][2][0],&g_304[3][2][0]},{&g_304[2][1][0],&g_304[3][2][0],&g_304[0][3][1],&g_304[3][2][0],&g_304[2][1][0],(void*)0},{&g_304[2][3][3],&g_304[3][2][0],&g_304[0][4][2],&g_304[2][4][0],&g_304[3][2][0],&g_304[2][4][0]}},{{&g_304[2][3][3],&g_304[3][2][0],&g_304[2][3][3],&g_304[3][2][0],&g_304[0][4][2],&g_304[2][4][0]},{&g_304[2][1][0],(void*)0,&g_304[0][4][2],&g_304[2][0][2],&g_304[0][4][2],(void*)0},{&g_304[0][4][2],&g_304[3][2][0],&g_304[0][3][1],&g_304[2][0][2],&g_304[3][2][0],&g_304[3][2][0]},{&g_304[2][1][0],&g_304[3][2][0],&g_304[0][3][1],&g_304[3][2][0],&g_304[2][1][0],(void*)0},{&g_304[2][3][3],&g_304[3][2][0],&g_304[0][4][2],&g_304[2][4][0],&g_304[3][2][0],&g_304[2][4][0]}},{{&g_304[2][3][3],&g_304[3][2][0],&g_304[2][3][3],&g_304[3][2][0],&g_304[2][3][3],&g_304[2][0][2]},{&g_304[0][4][2],&g_304[3][2][0],&g_304[2][3][3],&g_304[3][2][0],&g_304[2][3][3],&g_304[3][2][0]},{&g_304[2][3][3],(void*)0,&g_304[3][2][0],&g_304[3][2][0],&g_304[2][1][0],&g_304[2][4][0]},{&g_304[0][4][2],&g_304[2][4][0],&g_304[3][2][0],&g_304[2][4][0],&g_304[0][4][2],&g_304[3][2][0]},{&g_304[0][3][1],&g_304[2][4][0],&g_304[2][3][3],&g_304[2][0][2],&g_304[2][1][0],&g_304[2][0][2]}}};
static union U4 ***g_306 = (void*)0;
static union U2 g_322 = {-3L};
static uint32_t g_334 = 0xAABA89AFL;
static union U1 g_414 = {0x66L};
static union U5 g_422 = {0xACL};
static uint64_t g_427 = 18446744073709551612UL;
static int64_t g_447 = 0x1B261428B240CD41LL;
static int16_t g_453 = 0x7912L;
static int16_t *g_474 = &g_304[3][2][0].f0;
static const int32_t *g_486 = (void*)0;
static uint16_t *g_534 = &g_178.f4;
static int16_t g_543 = 0xBC42L;
static int8_t g_547 = 0x14L;
static int16_t g_548 = 0x5475L;
static uint32_t g_550 = 7UL;
static union U2 g_585 = {0x1DCD4565DFAA98F1LL};
static uint32_t g_625[1][1][5] = {{{0UL,0UL,0UL,0UL,0UL}}};
static int16_t g_626 = (-8L);
static uint8_t g_627 = 255UL;
static union U3 g_634 = {{0x26L,4L,0x892584349C25FBECLL,-1L,1UL,0xA7L}};
static union U6 g_653 = {0xF5782915L};
static union U1 *g_655[6][1] = {{&g_414},{&g_414},{&g_414},{&g_414},{&g_414},{&g_414}};
static union U1 **g_654 = &g_655[3][0];
static union U2 *g_803 = &g_585;
static union U2 **g_802 = &g_803;
static int64_t g_885 = (-9L);
static int8_t g_890 = 8L;
static int32_t g_891 = 0x26B49531L;
static uint32_t g_892 = 1UL;
static const int8_t *g_904 = &g_547;
static const int8_t **g_903 = &g_904;
static const int8_t ***g_902 = &g_903;
static union U5 ***g_927 = (void*)0;
static union U5 ****g_926 = &g_927;
static uint32_t g_955 = 0UL;
static union U3 *g_958[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t g_977 = 4L;
static uint8_t g_978 = 0xBCL;
static uint8_t g_997 = 8UL;
static uint64_t g_1003 = 0x94F2EE489860F96ALL;
static int32_t g_1036 = 0x006F3508L;
static int32_t g_1037 = 0x55B1F206L;
static uint32_t g_1039 = 0x1167D855L;
static uint32_t g_1048 = 4294967286UL;
static int64_t *g_1101 = &g_322.f3;
static int64_t **g_1100[6][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static int64_t g_1185 = 0x62FBD4C9119DB7A8LL;
static int32_t g_1186 = 0x8022D4C6L;
static int8_t g_1188 = (-1L);
static uint64_t g_1190 = 0x1C26FB53E2E3DCF3LL;
static int64_t ***g_1208[1] = {&g_1100[2][5]};
static union U5 g_1218 = {1UL};
static int32_t g_1230 = 8L;
static uint64_t g_1231 = 0UL;
static int32_t g_1247[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint32_t g_1248 = 4294967292UL;
static union U6 g_1331 = {0xD49D0137L};
static int32_t g_1347[1][6][4] = {{{4L,1L,0x342F2529L,0x342F2529L},{(-2L),(-2L),0x8A05AC2CL,0L},{(-2L),0x84E2C7EFL,0x342F2529L,(-2L)},{4L,0L,4L,0x342F2529L},{1L,0L,0x8A05AC2CL,(-2L)},{0L,0x84E2C7EFL,0x84E2C7EFL,0L}}};



static int32_t  func_1(void);
static const int32_t * func_2(int32_t * p_3);
static int64_t  func_15(int8_t * p_16, const int32_t * p_17);
static int32_t * func_20(int32_t * p_21, int32_t * p_22, union U6  p_23);
static union U6  func_24(int8_t  p_25, int8_t  p_26);
static uint16_t  func_44(int8_t * p_45, int32_t * p_46, int32_t * p_47, int64_t  p_48);
static int32_t * func_50(int32_t * const  p_51);
static int16_t  func_63(union U6  p_64, union U6  p_65);




static int32_t  func_1(void)
{ 
    int32_t *l_4 = &g_5;
    const int32_t **l_1012[6][4];
    struct S0 l_1025[6] = {{0xFFL,0xEF95L,1UL,0x6AD2DC52L,0x40F3L,0x9FL},{0xEFL,-1L,0x7EFBED0EC20C5606LL,0x7D209EFCL,8UL,0xDAL},{0xFFL,0xEF95L,1UL,0x6AD2DC52L,0x40F3L,0x9FL},{0xFFL,0xEF95L,1UL,0x6AD2DC52L,0x40F3L,0x9FL},{0xEFL,-1L,0x7EFBED0EC20C5606LL,0x7D209EFCL,8UL,0xDAL},{0xFFL,0xEF95L,1UL,0x6AD2DC52L,0x40F3L,0x9FL}};
    union U5 l_1028 = {0xA3L};
    union U4 **l_1029 = &g_303[2][0][0];
    int32_t l_1035 = (-7L);
    int32_t l_1046[3][3][4];
    union U1 * const *l_1122[7][2] = {{&g_655[5][0],&g_655[3][0]},{&g_655[3][0],&g_655[5][0]},{&g_655[3][0],&g_655[3][0]},{&g_655[5][0],&g_655[3][0]},{&g_655[3][0],&g_655[5][0]},{&g_655[3][0],&g_655[3][0]},{&g_655[5][0],&g_655[3][0]}};
    union U6 l_1147 = {0x73D0F181L};
    uint32_t l_1163 = 0x89672638L;
    uint8_t * const l_1177 = &g_250.f0;
    uint8_t * const *l_1176 = &l_1177;
    union U3 l_1217[4][1][7] = {{{{{255UL,3L,0x01BB3A86F7239149LL,1L,0xA838L,0x56L}},{{0xB2L,0x9549L,1UL,0xE39BF42EL,0xECF8L,0x30L}},{{255UL,0xA8B5L,0x32B50C1EABC7AE49LL,3L,65535UL,0xADL}},{{255UL,0xA8B5L,0x32B50C1EABC7AE49LL,3L,65535UL,0xADL}},{{0xB2L,0x9549L,1UL,0xE39BF42EL,0xECF8L,0x30L}},{{255UL,3L,0x01BB3A86F7239149LL,1L,0xA838L,0x56L}},{{0xB2L,0x9549L,1UL,0xE39BF42EL,0xECF8L,0x30L}}}},{{{{0x64L,3L,0x59D0315BC715B1D2LL,1L,0x87E2L,0x46L}},{{0xB3L,0x9419L,0x252406714E4DD1A5LL,0xE8121268L,0x48AEL,8L}},{{0xB3L,0x9419L,0x252406714E4DD1A5LL,0xE8121268L,0x48AEL,8L}},{{0x64L,3L,0x59D0315BC715B1D2LL,1L,0x87E2L,0x46L}},{{0UL,0x7A57L,0xB093C6C7773AEF4ALL,0x94314DE4L,0xE62DL,1L}},{{0x64L,3L,0x59D0315BC715B1D2LL,1L,0x87E2L,0x46L}},{{0xB3L,0x9419L,0x252406714E4DD1A5LL,0xE8121268L,0x48AEL,8L}}}},{{{{255UL,6L,18446744073709551613UL,-1L,0xAFD7L,0xD6L}},{{255UL,6L,18446744073709551613UL,-1L,0xAFD7L,0xD6L}},{{255UL,3L,0x01BB3A86F7239149LL,1L,0xA838L,0x56L}},{{255UL,0xA8B5L,0x32B50C1EABC7AE49LL,3L,65535UL,0xADL}},{{255UL,3L,0x01BB3A86F7239149LL,1L,0xA838L,0x56L}},{{255UL,6L,18446744073709551613UL,-1L,0xAFD7L,0xD6L}},{{255UL,6L,18446744073709551613UL,-1L,0xAFD7L,0xD6L}}}},{{{{4UL,1L,0xCDEA4940AB7C40FDLL,0x5FB4EF13L,0x45A3L,-2L}},{{0xB3L,0x9419L,0x252406714E4DD1A5LL,0xE8121268L,0x48AEL,8L}},{{0UL,6L,0xDFDB06788AC737EDLL,0x132D9B26L,0xDD97L,0x10L}},{{0xB3L,0x9419L,0x252406714E4DD1A5LL,0xE8121268L,0x48AEL,8L}},{{4UL,1L,0xCDEA4940AB7C40FDLL,0x5FB4EF13L,0x45A3L,-2L}},{{4UL,1L,0xCDEA4940AB7C40FDLL,0x5FB4EF13L,0x45A3L,-2L}},{{0xB3L,0x9419L,0x252406714E4DD1A5LL,0xE8121268L,0x48AEL,8L}}}}};
    int32_t *l_1245 = &g_174;
    int32_t *l_1246[2];
    int32_t l_1284[5][3][7] = {{{0x599B0C82L,0xA13E0726L,0x599B0C82L,0xA13E0726L,0x599B0C82L,0xA13E0726L,0x599B0C82L},{(-1L),0xB26339FBL,0xB26339FBL,(-1L),(-1L),0xB26339FBL,0xB26339FBL},{0xCBC6C48DL,0xA13E0726L,0xCBC6C48DL,0xA13E0726L,0xCBC6C48DL,0xA13E0726L,0xCBC6C48DL}},{{(-1L),(-1L),0xB26339FBL,0xB26339FBL,(-1L),(-1L),0xB26339FBL},{0x599B0C82L,0xA13E0726L,0x599B0C82L,0xA13E0726L,0x599B0C82L,0xA13E0726L,0x599B0C82L},{(-1L),0xB26339FBL,0xB26339FBL,(-1L),(-1L),0xB26339FBL,0xB26339FBL}},{{0xCBC6C48DL,0xA13E0726L,0xCBC6C48DL,0xA13E0726L,0xCBC6C48DL,0xA13E0726L,0xCBC6C48DL},{(-1L),(-1L),0xB26339FBL,0xB26339FBL,(-1L),(-1L),0xB26339FBL},{0x599B0C82L,0xA13E0726L,0x599B0C82L,0xA13E0726L,0x599B0C82L,0xA13E0726L,0x599B0C82L}},{{(-1L),0xB26339FBL,0xB26339FBL,(-1L),(-1L),0xB26339FBL,0xB26339FBL},{0xCBC6C48DL,0xA13E0726L,0xCBC6C48DL,0xA13E0726L,0xCBC6C48DL,0xA13E0726L,0xCBC6C48DL},{(-1L),(-1L),0xB26339FBL,0xB26339FBL,(-1L),(-1L),0xB26339FBL}},{{0x599B0C82L,0xA13E0726L,0x599B0C82L,0xA13E0726L,0x599B0C82L,0xA13E0726L,0x599B0C82L},{(-1L),0xB26339FBL,0xB26339FBL,(-1L),(-1L),0xB26339FBL,0xB26339FBL},{0xCBC6C48DL,0xA13E0726L,0xCBC6C48DL,0xA13E0726L,0xCBC6C48DL,0xA13E0726L,0xCBC6C48DL}}};
    int64_t l_1306[4][1][5] = {{{0x51E57C61E00BA5E3LL,0x3618BA2352329DB6LL,0x51E57C61E00BA5E3LL,0x51E57C61E00BA5E3LL,0x3618BA2352329DB6LL}},{{0x3618BA2352329DB6LL,0x51E57C61E00BA5E3LL,0x51E57C61E00BA5E3LL,0x3618BA2352329DB6LL,0x51E57C61E00BA5E3LL}},{{0x3618BA2352329DB6LL,0x3618BA2352329DB6LL,0x6DD1236994C99DBALL,0x3618BA2352329DB6LL,0x3618BA2352329DB6LL}},{{0x51E57C61E00BA5E3LL,0x3618BA2352329DB6LL,0x51E57C61E00BA5E3LL,0x51E57C61E00BA5E3LL,0x3618BA2352329DB6LL}}};
    uint32_t l_1339 = 0x898E012CL;
    int16_t l_1342 = 0x67B0L;
    const int32_t l_1394 = 0x666F78B3L;
    int32_t **l_1418 = &l_1246[1];
    int32_t ***l_1417 = &l_1418;
    int32_t ****l_1416 = &l_1417;
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
            l_1012[i][j] = &g_486;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
                l_1046[i][j][k] = 0xFF35C7FEL;
        }
    }
    for (i = 0; i < 2; i++)
        l_1246[i] = &l_1046[2][0][3];
    return (*g_176);
}



static const int32_t * func_2(int32_t * p_3)
{ 
    uint64_t l_14[6][6][4] = {{{0x70CADD635290CE96LL,0xED02E889EC0021FBLL,0x70CADD635290CE96LL,0x5D0881826FBD10CALL},{0x70CADD635290CE96LL,0x5D0881826FBD10CALL,0x5D0881826FBD10CALL,0x70CADD635290CE96LL},{0UL,0x5D0881826FBD10CALL,18446744073709551615UL,0x5D0881826FBD10CALL},{0x5D0881826FBD10CALL,0xED02E889EC0021FBLL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,0x5D0881826FBD10CALL,18446744073709551615UL},{0x70CADD635290CE96LL,0xED02E889EC0021FBLL,0x70CADD635290CE96LL,0x5D0881826FBD10CALL}},{{0x70CADD635290CE96LL,0x5D0881826FBD10CALL,0x5D0881826FBD10CALL,0x70CADD635290CE96LL},{0UL,0x5D0881826FBD10CALL,18446744073709551615UL,0x5D0881826FBD10CALL},{0x5D0881826FBD10CALL,0xED02E889EC0021FBLL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,0x5D0881826FBD10CALL,18446744073709551615UL},{0x70CADD635290CE96LL,0xED02E889EC0021FBLL,0x70CADD635290CE96LL,0x5D0881826FBD10CALL},{0x70CADD635290CE96LL,0x5D0881826FBD10CALL,0x5D0881826FBD10CALL,0x70CADD635290CE96LL}},{{0UL,0x5D0881826FBD10CALL,18446744073709551615UL,0x5D0881826FBD10CALL},{0x5D0881826FBD10CALL,0xED02E889EC0021FBLL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,0x5D0881826FBD10CALL,18446744073709551615UL},{0x70CADD635290CE96LL,0xED02E889EC0021FBLL,0x70CADD635290CE96LL,0x5D0881826FBD10CALL},{0x70CADD635290CE96LL,0x5D0881826FBD10CALL,0x5D0881826FBD10CALL,0x70CADD635290CE96LL},{0UL,0x5D0881826FBD10CALL,18446744073709551615UL,0x5D0881826FBD10CALL}},{{0x5D0881826FBD10CALL,0xED02E889EC0021FBLL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,0x5D0881826FBD10CALL,18446744073709551615UL},{0x70CADD635290CE96LL,0xED02E889EC0021FBLL,0x70CADD635290CE96LL,0x5D0881826FBD10CALL},{0x70CADD635290CE96LL,0x5D0881826FBD10CALL,0x5D0881826FBD10CALL,0x70CADD635290CE96LL},{0UL,0x5D0881826FBD10CALL,18446744073709551615UL,0x5D0881826FBD10CALL},{0x5D0881826FBD10CALL,0xED02E889EC0021FBLL,18446744073709551615UL,18446744073709551615UL}},{{0UL,0UL,0x5D0881826FBD10CALL,18446744073709551615UL},{18446744073709551615UL,0UL,18446744073709551615UL,0x70CADD635290CE96LL},{18446744073709551615UL,0x70CADD635290CE96LL,0x70CADD635290CE96LL,18446744073709551615UL},{0x5D0881826FBD10CALL,0x70CADD635290CE96LL,0xED02E889EC0021FBLL,0x70CADD635290CE96LL},{0x70CADD635290CE96LL,0UL,0xED02E889EC0021FBLL,0xED02E889EC0021FBLL},{0x5D0881826FBD10CALL,0x5D0881826FBD10CALL,0x70CADD635290CE96LL,0xED02E889EC0021FBLL}},{{18446744073709551615UL,0UL,18446744073709551615UL,0x70CADD635290CE96LL},{18446744073709551615UL,0x70CADD635290CE96LL,0x70CADD635290CE96LL,18446744073709551615UL},{0x5D0881826FBD10CALL,0x70CADD635290CE96LL,0xED02E889EC0021FBLL,0x70CADD635290CE96LL},{0x70CADD635290CE96LL,0UL,0xED02E889EC0021FBLL,0xED02E889EC0021FBLL},{0x5D0881826FBD10CALL,0x5D0881826FBD10CALL,0x70CADD635290CE96LL,0xED02E889EC0021FBLL},{18446744073709551615UL,0UL,18446744073709551615UL,0x70CADD635290CE96LL}}};
    int32_t l_970[5];
    int32_t *l_985 = &g_174;
    int32_t *l_986 = (void*)0;
    int32_t *l_987 = &g_653.f0;
    int32_t *l_988 = (void*)0;
    int32_t *l_989 = &g_70;
    int32_t *l_990 = &g_11;
    int32_t *l_991 = (void*)0;
    int32_t *l_992 = &g_11;
    int32_t l_993 = 0xBD7FF099L;
    int32_t *l_994 = &g_70;
    int32_t *l_995 = &g_11;
    int32_t *l_996[2][2][5] = {{{&g_5,&g_5,&g_5,&g_5,&g_5},{&g_174,&l_970[4],&g_174,&l_970[4],&g_174}},{{&g_5,&g_5,&g_5,&g_5,&g_5},{&g_174,&l_970[4],&g_174,&l_970[4],&g_174}}};
    union U5 *l_1007 = (void*)0;
    union U5 * const *l_1006 = &l_1007;
    union U3 l_1010 = {{9UL,1L,0xFD7F224AB2FC0C07LL,7L,0UL,0x0EL}};
    int32_t l_1011 = 0x49680F4BL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_970[i] = 0x1A85158BL;
    for (g_5 = 0; (g_5 == 5); g_5++)
    { 
        int32_t l_972 = 0x1060FF8DL;
        int32_t l_973 = (-1L);
        int32_t l_974 = 1L;
        union U4 **l_984 = &g_303[0][0][4];
        union U4 *** const l_983[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        for (g_8 = 0; (g_8 < 25); g_8++)
        { 
            int32_t l_975 = 0L;
            int32_t l_976[3];
            int i;
            for (i = 0; i < 3; i++)
                l_976[i] = (-1L);
        }
    }
    ++g_997;
    (*p_3) |= ((((+((((safe_mul_func_uint16_t_u_u(g_1003, (*g_534))) , (g_585.f1 <= ((safe_mod_func_int16_t_s_s(((*g_474) = (l_1006 == (void*)0)), (safe_add_func_int64_t_s_s((l_1010 , (l_1011 ^ (*g_176))), 3L)))) && g_286.f0.f2))) < (*l_989)) < g_199)) <= 0x8F6BL) >= (*l_990)) | (*g_904));
    return &g_227;
}



static int64_t  func_15(int8_t * p_16, const int32_t * p_17)
{ 
    union U5 *l_918 = &g_422;
    union U5 **l_917 = &l_918;
    union U5 ***l_916 = &l_917;
    union U5 ****l_915[4][1][6] = {{{&l_916,&l_916,&l_916,&l_916,&l_916,&l_916}},{{&l_916,&l_916,&l_916,&l_916,(void*)0,&l_916}},{{&l_916,(void*)0,&l_916,&l_916,&l_916,&l_916}},{{&l_916,&l_916,&l_916,&l_916,&l_916,&l_916}}};
    int32_t l_941 = 0x17FCE7A5L;
    union U1 **l_942 = &g_655[3][0];
    int32_t l_949 = 0x3149BEF9L;
    int32_t l_950 = 0L;
    int32_t l_951[4] = {0x75A60F45L,0x75A60F45L,0x75A60F45L,0x75A60F45L};
    uint32_t l_952 = 1UL;
    int i, j, k;
    for (g_634.f3 = 0; (g_634.f3 != 0); g_634.f3 = safe_add_func_uint8_t_u_u(g_634.f3, 9))
    { 
        union U2 l_938 = {0xCEF8C552CA88871ALL};
        int32_t **l_945 = &g_176;
        int32_t *l_946 = &g_653.f0;
        int32_t *l_947 = &g_174;
        int32_t *l_948[1];
        int i;
        for (i = 0; i < 1; i++)
            l_948[i] = &g_70;
        for (g_422.f0 = (-16); (g_422.f0 != 14); g_422.f0 = safe_add_func_uint32_t_u_u(g_422.f0, 6))
        { 
            union U5 *****l_919 = &l_915[2][0][1];
            const int32_t l_925 = 0x5BE09B2FL;
            int32_t l_928 = 0x44E3B8ADL;
            union U1 l_937 = {0x45L};
            int32_t *l_943[5][3][1] = {{{&g_11},{&g_5},{&g_5}},{{&g_11},{&g_5},{&g_5}},{{&g_11},{&g_5},{&g_5}},{{&g_11},{&g_5},{&g_5}},{{&g_11},{&g_5},{&g_5}}};
            int32_t **l_944 = &g_176;
            int i, j, k;
            l_928 ^= (((*l_919) = l_915[2][0][1]) != (((7L & (safe_mod_func_uint32_t_u_u((((p_17 = (void*)0) == (void*)0) ^ ((-6L) | (((((safe_div_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u(0x5E43290AL)) ^ 9UL), 0x2A3BL)) , l_925) ^ g_890) || l_925) ^ l_925))), 4294967293UL))) > 247UL) , g_926));
            g_227 = (g_70 = ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(0x6264L, 6)), (safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(((l_937 , l_938) , 65535UL), (safe_lshift_func_uint8_t_u_u(0xDEL, l_941)))) , l_942) != &g_655[3][0]), 13)))) > l_938.f2));
            g_486 = func_50(&l_928);
            l_941 = l_941;
            (*l_944) = func_50(((*l_944) = &l_928));
        }
        (*l_945) = func_50(&g_70);
        ++l_952;
        ++g_955;
        g_958[1] = (void*)0;
    }
    return g_286.f0.f4;
}



static int32_t * func_20(int32_t * p_21, int32_t * p_22, union U6  p_23)
{ 
    int32_t *l_656 = &g_653.f0;
    uint8_t *l_661 = &g_634.f0.f0;
    int64_t l_669[4][1] = {{0x71FB7C044209EEE4LL},{0L},{0x71FB7C044209EEE4LL},{0L}};
    uint8_t *l_670 = &g_286.f0.f0;
    union U4 **l_674 = &g_303[5][2][0];
    union U4 ***l_673 = &l_674;
    union U4 *l_678 = &g_304[3][2][0];
    union U4 ** const l_677 = &l_678;
    union U4 ** const *l_676[7] = {&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677};
    union U4 ** const **l_675 = &l_676[6];
    int64_t *l_685 = &g_447;
    union U2 *l_692 = &g_322;
    union U2 **l_691 = &l_692;
    union U2 **l_693 = &l_692;
    int16_t *l_694[2];
    int32_t l_695 = 0x02FF90DFL;
    uint32_t *l_696 = &g_304[3][2][0].f1;
    int32_t l_699 = (-1L);
    int32_t l_700 = (-8L);
    int32_t l_701[1][7][5] = {{{4L,(-6L),(-6L),4L,(-6L)},{(-1L),0x366406D9L,(-4L),0x366406D9L,(-1L)},{(-6L),4L,(-6L),(-6L),4L},{(-1L),0x8A1E2BD9L,(-1L),0x366406D9L,(-1L)},{4L,4L,0xA80BB46DL,4L,4L},{(-1L),0x366406D9L,(-1L),0x8A1E2BD9L,(-1L)},{4L,(-6L),(-6L),4L,(-6L)}}};
    uint32_t l_702 = 0xFEC2C819L;
    int32_t *l_745 = &l_699;
    const union U1 *l_779 = (void*)0;
    const union U1 ** const l_778 = &l_779;
    int8_t * const *l_798 = &g_18;
    uint8_t l_801[4] = {0x06L,0x06L,0x06L,0x06L};
    union U5 l_899 = {0x2FL};
    int32_t **l_906 = &l_745;
    int32_t ***l_905 = &l_906;
    int32_t ***l_908 = &l_906;
    int32_t ****l_907 = &l_908;
    int32_t *l_909 = &l_701[0][5][4];
    int32_t *l_910 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_694[i] = &g_286.f0.f1;
lbl_707:
    (*l_656) = ((void*)0 == g_654);
    (*l_656) ^= (((g_414.f0 = ((((g_453 , (safe_lshift_func_uint8_t_u_s((++(*l_661)), (*g_18)))) < (!g_625[0][0][3])) <= 0xB292L) <= ((safe_sub_func_int8_t_s_s(0L, (safe_sub_func_uint8_t_u_u(((*l_670)++), (l_673 == ((*l_675) = (void*)0)))))) == g_322.f1))) & g_548) || (-5L));
    if ((safe_mul_func_int8_t_s_s(((0UL < (safe_rshift_func_int8_t_s_s((safe_div_func_int64_t_s_s(((*l_685) = g_70), (+(safe_rshift_func_int16_t_s_u((((((*l_696) = (safe_sub_func_int64_t_s_s((*l_656), ((l_695 = (l_691 == l_693)) > (*l_656))))) , (void*)0) != (*l_693)) | 7L), p_23.f0))))), (*g_18)))) & 3UL), g_250.f3)))
    { 
        int32_t *l_697 = &g_174;
        int32_t *l_698[2][3][6] = {{{&g_11,&g_11,&g_174,&g_70,&g_174,&g_11},{&g_174,&g_653.f0,&g_70,&g_70,&g_653.f0,&g_174},{&g_11,&g_174,&g_70,&g_174,&g_11,&g_11}},{{(void*)0,&g_174,&g_174,(void*)0,&g_653.f0,(void*)0},{(void*)0,&g_653.f0,(void*)0,&g_174,&g_174,(void*)0},{&g_174,&g_174,(void*)0,&g_653.f0,(void*)0,&g_174}}};
        int i, j, k;
        (*l_697) ^= (*l_656);
        --l_702;
    }
    else
    { 
        int64_t l_750 = (-1L);
        int32_t l_764 = 0xF5492C7AL;
        union U2 **l_804 = &g_803;
        const union U4 l_826 = {0xA572L};
        int16_t ** const l_845 = &l_694[0];
        union U1 l_862[7][2][2] = {{{{0xEDL},{1UL}},{{0x8CL},{0x2BL}}},{{{0x8CL},{1UL}},{{0xEDL},{0xEDL}}},{{{1UL},{0x8CL}},{{0x2BL},{0x8CL}}},{{{1UL},{0xEDL}},{{0xEDL},{1UL}}},{{{0x8CL},{0x2BL}},{{0x8CL},{1UL}}},{{{0xEDL},{0xEDL}},{{1UL},{0x8CL}}},{{{0x2BL},{0x8CL}},{{1UL},{0xEDL}}}};
        int32_t l_887[2][6][6] = {{{0xA04E03C1L,0xB41EA428L,0xC3A934C5L,0xFC4B509DL,6L,0xFC4B509DL},{0xC3A934C5L,0xA04E03C1L,0xC3A934C5L,0x6E845D0DL,1L,0xA3A7A800L},{0x2A205476L,0x6E845D0DL,0xFC4B509DL,(-1L),0x2B0AE198L,0x2B0AE198L},{(-1L),0x2B0AE198L,0x2B0AE198L,(-1L),0xFC4B509DL,0x6E845D0DL},{0x2A205476L,0xA3A7A800L,1L,0x6E845D0DL,0xC3A934C5L,0xA04E03C1L},{0xC3A934C5L,0xFC4B509DL,6L,0xFC4B509DL,0xC3A934C5L,0xB41EA428L}},{{0xA04E03C1L,0xA3A7A800L,0x78E7F567L,(-7L),0xFC4B509DL,1L},{1L,0x2B0AE198L,0xA3A7A800L,0xA3A7A800L,0x2B0AE198L,1L},{(-7L),0x6E845D0DL,0x78E7F567L,0xC3A934C5L,1L,0xB41EA428L},{0x2B0AE198L,0xA04E03C1L,6L,1L,6L,0xA04E03C1L},{0x2B0AE198L,0xB41EA428L,1L,0xC3A934C5L,0x78E7F567L,0x6E845D0DL},{(-7L),1L,0x2B0AE198L,0xA3A7A800L,0xA3A7A800L,0x2B0AE198L}}};
        int i, j, k;
        for (g_178.f5 = 0; (g_178.f5 < 13); ++g_178.f5)
        { 
            uint8_t l_736 = 0x3CL;
            union U4 ****l_738 = &l_673;
            union U4 *****l_737[3];
            union U1 * const *l_780 = &g_655[3][0];
            union U3 l_811 = {{2UL,-1L,0x2C7930D901CA7996LL,0x6BD4BF20L,65535UL,0x78L}};
            int32_t * const l_852 = (void*)0;
            uint16_t *l_870 = &l_811.f0.f4;
            int16_t **l_877 = &l_694[1];
            int16_t ***l_876[6][6][7] = {{{&l_877,&l_877,&l_877,&l_877,&l_877,(void*)0,(void*)0},{(void*)0,&l_877,&l_877,&l_877,(void*)0,&l_877,&l_877},{&l_877,(void*)0,&l_877,&l_877,&l_877,&l_877,(void*)0},{&l_877,&l_877,(void*)0,&l_877,(void*)0,&l_877,&l_877},{&l_877,&l_877,&l_877,&l_877,&l_877,(void*)0,(void*)0},{(void*)0,&l_877,&l_877,&l_877,&l_877,(void*)0,(void*)0}},{{&l_877,(void*)0,&l_877,&l_877,&l_877,&l_877,&l_877},{&l_877,&l_877,&l_877,&l_877,&l_877,&l_877,&l_877},{&l_877,&l_877,&l_877,&l_877,&l_877,&l_877,&l_877},{&l_877,&l_877,(void*)0,&l_877,&l_877,&l_877,&l_877},{(void*)0,&l_877,&l_877,&l_877,&l_877,&l_877,&l_877},{&l_877,&l_877,&l_877,&l_877,&l_877,&l_877,&l_877}},{{&l_877,&l_877,&l_877,&l_877,&l_877,(void*)0,(void*)0},{(void*)0,&l_877,&l_877,&l_877,(void*)0,&l_877,&l_877},{&l_877,&l_877,&l_877,(void*)0,(void*)0,&l_877,&l_877},{&l_877,(void*)0,(void*)0,(void*)0,&l_877,&l_877,&l_877},{&l_877,(void*)0,&l_877,&l_877,&l_877,&l_877,&l_877},{(void*)0,&l_877,(void*)0,&l_877,&l_877,&l_877,&l_877}},{{&l_877,(void*)0,&l_877,&l_877,&l_877,(void*)0,&l_877},{&l_877,(void*)0,&l_877,&l_877,(void*)0,&l_877,&l_877},{&l_877,&l_877,&l_877,&l_877,&l_877,&l_877,(void*)0},{&l_877,&l_877,&l_877,(void*)0,&l_877,&l_877,&l_877},{&l_877,&l_877,&l_877,&l_877,&l_877,&l_877,&l_877},{(void*)0,&l_877,(void*)0,&l_877,&l_877,&l_877,(void*)0}},{{&l_877,&l_877,&l_877,&l_877,&l_877,&l_877,&l_877},{&l_877,&l_877,(void*)0,&l_877,(void*)0,&l_877,&l_877},{&l_877,&l_877,&l_877,(void*)0,&l_877,&l_877,&l_877},{&l_877,&l_877,&l_877,&l_877,&l_877,&l_877,&l_877},{&l_877,&l_877,&l_877,(void*)0,&l_877,&l_877,&l_877},{&l_877,&l_877,&l_877,&l_877,&l_877,(void*)0,&l_877}},{{&l_877,&l_877,&l_877,&l_877,&l_877,&l_877,&l_877},{&l_877,&l_877,&l_877,(void*)0,(void*)0,&l_877,&l_877},{&l_877,&l_877,&l_877,&l_877,&l_877,&l_877,&l_877},{&l_877,&l_877,&l_877,(void*)0,&l_877,&l_877,&l_877},{&l_877,&l_877,&l_877,&l_877,&l_877,&l_877,&l_877},{&l_877,&l_877,&l_877,&l_877,&l_877,(void*)0,&l_877}}};
            int16_t ****l_875 = &l_876[2][5][2];
            int32_t l_882 = 0x953015EAL;
            int32_t l_886 = 4L;
            int32_t l_889 = 1L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_737[i] = &l_738;
            if (g_453)
                goto lbl_707;
            if ((*l_656))
            { 
                if ((*p_21))
                    break;
            }
            else
            { 
                int64_t l_727 = 0x95191E8FC6E7BF20LL;
                union U4 *****l_739[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_739[i] = &l_738;
                g_70 &= (((safe_add_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((~((l_736 = (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int8_t_s_s(((*g_18) ^= (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(p_23.f0, 7)), (safe_sub_func_int64_t_s_s(l_727, ((((safe_lshift_func_int16_t_s_s(g_5, 10)) & (*l_656)) , (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((g_178.f1 || 18446744073709551611UL), ((g_585.f3 || (*l_656)) , (*p_21)))) > p_23.f0), 1)) ^ p_23.f0), 3))) ^ 0x48B9L))))), 5))), g_422.f1)) <= l_727) <= g_250.f0), 4)), (*p_21)))) | g_131)) >= p_23.f0), l_727)) <= 0xA02EDBEB6834CECFLL), p_23.f0)) < (*p_22)) & g_634.f0.f1);
                l_739[1] = l_737[0];
            }
        }
        for (g_585.f1 = 25; (g_585.f1 == 34); g_585.f1 = safe_add_func_uint8_t_u_u(g_585.f1, 4))
        { 
            return &g_11;
        }
    }
    (*l_909) &= (safe_rshift_func_uint16_t_u_s((((((*p_22) < (l_899 , ((safe_sub_func_uint32_t_u_u(((*l_696) = (&l_798 != g_902)), 1UL)) & (l_905 != ((*l_907) = &l_906))))) , (*l_656)) | p_23.f0) != 0x5AL), (***l_905)));
    return l_910;
}



static union U6  func_24(int8_t  p_25, int8_t  p_26)
{ 
    uint64_t l_290 = 18446744073709551615UL;
    int8_t *l_298 = &g_250.f5;
    int32_t l_331 = 0x25865304L;
    int32_t l_332[2];
    union U5 l_343 = {248UL};
    union U4 **l_392[1][2][6] = {{{&g_303[5][0][4],&g_303[3][1][3],&g_303[5][0][4],&g_303[5][0][4],&g_303[3][1][3],&g_303[5][0][4]},{&g_303[5][0][4],&g_303[3][1][3],&g_303[5][0][4],&g_303[5][0][4],&g_303[3][1][3],&g_303[5][0][4]}}};
    struct S0 l_403 = {0UL,0xD785L,0x69A014F1156D1DA9LL,0L,0x97ECL,0x76L};
    int16_t *l_472 = &l_403.f1;
    uint32_t l_522 = 0xA82928B8L;
    int32_t l_571 = 0xF4B088E5L;
    union U1 *l_615 = &g_414;
    union U1 **l_614 = &l_615;
    int16_t l_621 = 0x3807L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_332[i] = 0x95556C42L;
lbl_525:
    for (p_25 = 0; (p_25 <= (-29)); p_25--)
    { 
        int32_t l_324 = 0xE8FA73D8L;
        int32_t *l_327 = (void*)0;
        int32_t *l_328 = &g_227;
        int32_t *l_329 = &l_324;
        int32_t *l_330[1][6][7] = {{{&l_324,(void*)0,&g_8,(void*)0,&l_324,&g_8,&g_70},{&g_174,&g_11,(void*)0,&g_8,&g_11,&g_174,&g_227},{&g_174,&g_174,&g_70,&g_8,&l_324,(void*)0,&g_8},{&g_8,&g_174,&g_70,&g_70,&g_174,&g_8,&g_11},{&g_174,&g_70,&g_227,&g_11,&l_324,&l_324,&g_11},{&g_8,&g_227,&g_8,(void*)0,&g_11,&g_174,&g_8}}};
        int64_t l_333[7] = {1L,1L,1L,1L,1L,1L,1L};
        uint8_t *l_368 = &g_286.f2.f0;
        uint8_t *l_374[4] = {&l_343.f0,&l_343.f0,&l_343.f0,&l_343.f0};
        int64_t l_377 = 0x3773507AE0362B40LL;
        int i, j, k;
        for (p_26 = 10; (p_26 < (-18)); p_26 = safe_sub_func_uint16_t_u_u(p_26, 1))
        { 
            int8_t l_34[2];
            int32_t *l_49 = (void*)0;
            union U4 * const **l_323 = (void*)0;
            union U6 l_326 = {0L};
            int i;
            for (i = 0; i < 2; i++)
                l_34[i] = 1L;
            if (g_8)
                break;
            if (l_34[0])
                continue;
            for (g_19 = 0; (g_19 <= 1); g_19 += 1)
            { 
                union U6 l_319 = {-4L};
                int32_t l_325 = 0x51D64CF6L;
                int i;
                for (g_29 = 0; (g_29 <= 1); g_29 += 1)
                { 
                    --g_35;
                }
                if ((+(safe_mod_func_uint32_t_u_u((+(safe_rshift_func_uint16_t_u_u(func_44(&g_19, l_49, func_50(&g_8), l_34[g_19]), 13))), l_34[g_19]))))
                { 
                    int32_t *l_288 = &g_227;
                    int32_t l_289 = 0xBEE1F3E7L;
                    (*l_288) = p_26;
                    l_289 |= ((*l_288) = 0xE97413A3L);
                    l_290--;
                    (*l_288) = (safe_mul_func_int16_t_s_s(0L, 0x560BL));
                }
                else
                { 
                    int32_t **l_295 = &g_176;
                    (*l_295) = &g_11;
                    (*g_272) = (*g_272);
                    if ((*g_176))
                        continue;
                }
                if ((p_26 == (safe_div_func_int8_t_s_s((((((void*)0 != l_298) >= (safe_sub_func_uint16_t_u_u(l_290, p_26))) , (safe_rshift_func_uint16_t_u_u((((void*)0 != &l_298) && p_26), 12))) || p_25), g_250.f5))))
                { 
                    union U4 **l_305 = &g_303[3][1][3];
                    union U4 ****l_307 = &g_306;
                    (*l_305) = g_303[3][1][3];
                    (*l_307) = g_306;
                }
                else
                { 
                    int32_t *l_310 = &g_70;
                    (*l_310) = ((safe_div_func_uint32_t_u_u(g_29, 1UL)) >= p_26);
                    l_325 |= ((*l_310) = (safe_add_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((-5L), (safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(((((l_319 , (0x3292EDE274A18556LL & (safe_mul_func_uint16_t_u_u((g_306 == (g_322 , l_323)), (0xE848L == p_25))))) || p_26) <= p_26) & l_34[g_19]), 15)), l_324)))) <= 0xE80AL) == (*l_310)), l_324)));
                    return l_326;
                }
            }
        }
        g_334++;
        for (g_286.f0.f0 = (-19); (g_286.f0.f0 > 9); g_286.f0.f0 = safe_add_func_int32_t_s_s(g_286.f0.f0, 9))
        { 
            uint32_t *l_356 = &g_304[3][2][0].f1;
            int32_t **l_357 = (void*)0;
            int32_t **l_358 = &l_328;
        }
        for (g_322.f1 = 0; (g_322.f1 <= 1); g_322.f1 += 1)
        { 
            for (g_228 = 0; (g_228 <= 3); g_228 += 1)
            { 
                int32_t **l_359 = &l_330[0][2][0];
                (*l_359) = &l_324;
            }
        }
        (*l_328) = (((safe_lshift_func_int8_t_s_s(l_332[1], (safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((g_178.f0 = (((*l_368) = (safe_sub_func_uint64_t_u_u(l_343.f1, ((*l_329) = 1L)))) , (safe_sub_func_int8_t_s_s(l_331, (safe_sub_func_int32_t_s_s(p_26, (!l_332[1]))))))) > (safe_lshift_func_uint8_t_u_u(g_253.f1, 7))), g_250.f5)), 11)))) || l_377) | l_343.f1);
    }
lbl_632:
    for (g_322.f3 = (-17); (g_322.f3 == (-30)); g_322.f3--)
    { 
        uint32_t l_386 = 0UL;
        union U6 l_387 = {3L};
        int32_t l_419[5] = {0x7B50DDC2L,0x7B50DDC2L,0x7B50DDC2L,0x7B50DDC2L,0x7B50DDC2L};
        union U5 *l_432 = &l_343;
        uint64_t l_496 = 0x5BA4B218ACDD3528LL;
        union U3 l_570[3] = {{{3UL,8L,4UL,0xFDB945C7L,0xECC8L,0x3BL}},{{3UL,8L,4UL,0xFDB945C7L,0xECC8L,0x3BL}},{{3UL,8L,4UL,0xFDB945C7L,0xECC8L,0x3BL}}};
        union U4 **l_591 = &g_303[0][0][0];
        int i;
        if (((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((l_386 , (l_387 , (safe_mul_func_uint8_t_u_u((l_386 >= ((safe_rshift_func_uint16_t_u_s(((void*)0 != l_392[0][0][2]), 2)) >= (safe_add_func_int16_t_s_s(g_322.f3, g_322.f1)))), 0x3EL)))) && p_25), p_26)), l_387.f0)), p_26)) < g_228))
        { 
            int32_t *l_424[7][3][5] = {{{&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0},{&g_70,&g_70,&g_70,&g_70,&g_70},{&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0}},{{&g_70,&g_70,&g_70,&g_70,&g_70},{&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0},{&g_70,&g_70,&g_70,&g_70,&g_70}},{{&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0},{&g_70,&g_70,&g_70,&g_70,&g_70},{&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0}},{{&g_70,&g_70,&g_70,&g_70,&g_70},{&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0},{&g_70,&g_70,&g_70,&g_70,&g_70}},{{&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0},{&g_70,&g_70,&g_70,&g_70,&g_70},{&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0}},{{&g_70,&g_70,&g_70,&g_70,&g_70},{&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0},{&g_70,&g_70,&g_70,&g_70,&g_70}},{{&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0},{&g_70,&g_70,&g_70,&g_70,&g_70},{&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0,&l_387.f0}}};
            uint64_t l_425 = 18446744073709551606UL;
            uint8_t l_450 = 1UL;
            uint8_t l_462 = 0UL;
            int i, j, k;
            for (l_386 = 0; (l_386 > 14); l_386++)
            { 
                int32_t l_418 = (-6L);
                int32_t *l_423 = &g_227;
                int32_t l_444 = 0xADD9A662L;
                uint8_t *l_463 = &g_178.f0;
                int16_t *l_464 = &g_286.f2.f1;
                int16_t *l_465 = &g_304[3][2][0].f0;
                for (g_286.f2.f4 = 16; (g_286.f2.f4 != 6); g_286.f2.f4--)
                { 
                    uint32_t *l_417[5];
                    int32_t **l_426 = &l_424[6][0][0];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_417[i] = (void*)0;
                    if (p_26)
                        break;
                    if (p_26)
                        break;
                    g_70 |= ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((l_403 , (safe_mod_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u((g_178.f3 & (safe_unary_minus_func_uint16_t_u((g_253.f3 ^ ((((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((!((g_414 , ((p_25 | ((safe_sub_func_uint32_t_u_u(((g_35 = ((l_419[2] = (g_229++)) >= ((g_422 , ((l_423 == l_424[2][1][2]) <= l_425)) != 0x12L))) & (*l_423)), l_386)) >= l_387.f0)) ^ p_25)) , g_199)), g_253.f4)), p_26)) && p_26) != 0x26BBL) == 0x30CF999E632D1B4FLL))))), g_322.f1)) ^ 0xF3796F63L), 1L))), g_250.f0)), p_26)) != 0x65L);
                    (*l_426) = func_50(&l_332[1]);
                }
                g_427++;
                for (g_178.f5 = (-9); (g_178.f5 < 17); g_178.f5 = safe_add_func_uint32_t_u_u(g_178.f5, 3))
                { 
                    union U5 **l_433 = (void*)0;
                    union U5 **l_434 = &l_432;
                    union U1 l_438 = {0xBDL};
                    uint64_t *l_439 = &l_343.f2;
                    uint64_t *l_440 = &l_343.f2;
                    uint64_t *l_441 = (void*)0;
                    uint64_t *l_442 = (void*)0;
                    uint64_t *l_443[2][5] = {{&l_290,&l_290,&l_290,&l_290,&l_290},{&g_427,&l_290,&g_427,&g_427,&l_290}};
                    uint32_t *l_445 = &g_304[3][2][0].f1;
                    int64_t *l_446 = &g_447;
                    int i, j;
                    (*l_434) = l_432;
                    l_331 |= ((*l_423) <= ((safe_div_func_uint32_t_u_u(((*l_445) = (safe_unary_minus_func_int32_t_s((p_25 == (l_438 , (l_444 &= 0UL)))))), p_25)) < ((*l_439) = (((((*l_446) &= l_403.f0) , ((safe_mod_func_int32_t_s_s((l_419[2] & l_450), l_387.f0)) , l_403.f5)) != l_419[2]) , g_178.f5))));
                }
                (*l_423) &= ((safe_add_func_int32_t_s_s((-9L), g_453)) > (((safe_add_func_uint64_t_u_u((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((*l_465) = ((*l_464) = (((*l_463) = ((0x65BCL & (g_322.f2 , l_332[1])) | l_462)) > (g_422.f0 > 0x0F1835D3L)))), 0x81BAL)), (-3L))), g_8)) <= 0x95L) || 0x90D3L));
            }
        }
        else
        { 
            if (l_419[1])
                break;
        }
        for (g_286.f0.f4 = 0; (g_286.f0.f4 < 16); g_286.f0.f4 = safe_add_func_uint8_t_u_u(g_286.f0.f4, 2))
        { 
            uint32_t l_475 = 18446744073709551614UL;
            const int32_t *l_484 = &l_331;
            union U2 l_487 = {-1L};
            union U6 l_518[7] = {{0x835A2544L},{0x835A2544L},{0x835A2544L},{0x835A2544L},{0x835A2544L},{0x835A2544L},{0x835A2544L}};
            int32_t **l_519 = &g_176;
            uint16_t *l_535 = &g_250.f4;
            int32_t *l_539 = &l_332[0];
            int32_t l_546 = 0xDB2AB747L;
            int32_t l_549 = (-1L);
            int8_t * const *l_561 = (void*)0;
            union U4 **l_590[4] = {&g_303[3][1][3],&g_303[3][1][3],&g_303[3][1][3],&g_303[3][1][3]};
            union U4 **l_592 = (void*)0;
            union U1 *l_593 = &g_414;
            int i;
            for (g_228 = 0; (g_228 >= 10); g_228 = safe_add_func_int8_t_s_s(g_228, 4))
            { 
                struct S0 ** const l_508 = &g_273[0];
                for (g_131 = (-7); (g_131 != 42); ++g_131)
                { 
                    int16_t **l_473 = (void*)0;
                    int64_t *l_482[2];
                    int32_t l_483 = 0x288DCEFEL;
                    const int32_t **l_485[5] = {&l_484,&l_484,&l_484,&l_484,&l_484};
                    union U2 *l_488 = &l_487;
                    union U4 l_499 = {0x867CL};
                    int16_t ***l_500 = &l_473;
                    uint16_t *l_503 = &l_343.f3;
                    int32_t *l_509 = &l_387.f0;
                    int32_t *l_510 = (void*)0;
                    int32_t *l_511 = &g_227;
                    int32_t *l_512 = &g_174;
                    int32_t *l_513 = &l_419[2];
                    uint16_t l_514[3][3] = {{0x5D84L,0x5D84L,0x5D84L},{65533UL,65533UL,65533UL},{0x5D84L,0x5D84L,0x5D84L}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_482[i] = (void*)0;
                    g_486 = ((8UL ^ ((((g_474 = l_472) == &g_110) | (l_475 & (((safe_sub_func_int16_t_s_s((safe_div_func_int64_t_s_s(((void*)0 == &g_447), (g_447 &= (safe_mod_func_uint32_t_u_u(l_386, 0xC2159E1CL))))), l_483)) > l_332[1]) ^ 0xB0860920L))) < l_403.f3)) , l_484);
                    l_483 &= (p_25 | (((((*l_488) = l_487) , ((((((((safe_unary_minus_func_uint8_t_u(g_154)) ^ ((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((*g_18) = ((p_26 == ((0xE1L || p_25) , l_332[0])) , p_25)), l_387.f0)), l_496)), 9)) != p_25) != l_419[2]) > g_178.f5)) == 0x31L) ^ g_131) , p_26) , (*l_488)) , (*g_18)) | l_387.f0)) & g_178.f5) < g_178.f0));
                    (*l_509) = ((((((safe_sub_func_uint32_t_u_u(((((g_322 , l_499) , ((((((*l_500) = (void*)0) == (g_286 , &g_474)) , (((safe_add_func_uint16_t_u_u((g_250.f4--), (safe_mul_func_uint8_t_u_u(p_26, ((void*)0 == l_508))))) <= 0x804D7E87CBE354E6LL) < 0xF45F873BL)) , l_419[2]) != (*l_484))) >= (*g_18)) > p_26), g_154)) == g_229) , p_26) ^ 1UL) | p_25) , 0xE440D9E5L);
                    --l_514[0][0];
                    (*l_513) = (l_331 = ((*l_511) ^= (+g_286.f0.f2)));
                }
                return l_518[6];
            }
            (*l_519) = (void*)0;
            if ((0UL < 0x2BDEA78096793F77LL))
            { 
                for (g_35 = 0; (g_35 <= 57); ++g_35)
                { 
                    --l_522;
                    g_486 = ((*l_519) = (void*)0);
                    if (g_286.f0.f2)
                        break;
                    return l_387;
                }
                if (g_199)
                    goto lbl_525;
            }
            else
            { 
                struct S0 l_537 = {0UL,6L,0xD6204C190B22A02ELL,-4L,1UL,0xC9L};
                int32_t l_542 = 0L;
                int32_t l_544 = 0x7722EFBBL;
                int32_t l_545[3];
                uint16_t *l_572 = (void*)0;
                int32_t *l_573 = &l_332[0];
                int i;
                for (i = 0; i < 3; i++)
                    l_545[i] = 0x3200E3C4L;
                for (g_19 = 2; (g_19 > (-17)); g_19 = safe_sub_func_uint32_t_u_u(g_19, 2))
                { 
                    if (p_26)
                        break;
                    if (g_227)
                        goto lbl_525;
                }
                for (g_250.f4 = 13; (g_250.f4 < 1); g_250.f4 = safe_sub_func_int64_t_s_s(g_250.f4, 7))
                { 
                    return l_387;
                }
                for (g_250.f4 = 0; (g_250.f4 != 24); g_250.f4++)
                { 
                    uint16_t **l_532 = (void*)0;
                    uint16_t **l_533 = (void*)0;
                    union U3 l_536 = {{1UL,0x6F8FL,0xEF52C4EAF09F1FF8LL,0x0C7987E0L,1UL,1L}};
                    int32_t * const l_538[5][1][2] = {{{&l_419[2],&l_419[2]}},{{&l_419[2],&l_419[2]}},{{&l_419[2],&l_419[2]}},{{&l_419[2],&l_419[2]}},{{&l_419[2],&l_419[2]}}};
                    int32_t *l_541 = &l_387.f0;
                    int32_t **l_540 = &l_541;
                    int i, j, k;
                    (*l_540) = ((*g_18) , ((*l_519) = (((g_534 = (void*)0) != l_535) , (l_539 = ((l_536 , l_537) , func_50(l_538[2][0][1]))))));
                    if (l_537.f4)
                        break;
                    ++g_550;
                }
                l_331 = ((*l_573) = (safe_lshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((5UL >= ((*l_535) = l_386)), p_26)) < (safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s((l_561 == (void*)0), ((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(g_286.f0.f3, (l_542 = ((safe_mul_func_int8_t_s_s(((l_570[2] , p_25) & l_571), p_26)) , 255UL)))) , l_572) == (void*)0), 1L)), 65535UL)) ^ (*l_484)))), p_26))), 7)));
                if ((*l_484))
                { 
                    (*l_573) ^= (safe_div_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(p_26, (!(safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(0xE67FL, 0x19E8L)), l_570[2].f0.f3))))), g_19)), 0xDB07L));
                    (*l_573) ^= (p_25 , ((g_585 = g_322) , (((p_26 & (((safe_mod_func_uint64_t_u_u(g_178.f4, ((safe_sub_func_int8_t_s_s(p_26, (l_590[3] == (l_592 = l_591)))) , p_25))) <= (*g_18)) && 0x98DF71B54C68201ALL)) != 4L) , 0L)));
                }
                else
                { 
                    union U1 **l_594 = &l_593;
                    int32_t *l_595 = &l_545[1];
                    (*l_594) = l_593;
                    l_595 = &g_5;
                }
            }
        }
    }
    for (g_154 = 0; (g_154 != 40); g_154++)
    { 
        if (l_571)
            break;
    }
    if (g_286.f0.f2)
        goto lbl_525;
    for (g_585.f0 = 3; (g_585.f0 >= 0); g_585.f0 -= 1)
    { 
        uint16_t l_606 = 0x2312L;
        int32_t l_613 = 0xBAA5E398L;
        union U1 **l_616 = &l_615;
        uint64_t *l_617 = &g_422.f2;
        uint64_t *l_618 = &l_290;
        int32_t *l_622[3][2][3] = {{{(void*)0,(void*)0,(void*)0},{&g_11,&g_11,&g_11}},{{(void*)0,(void*)0,(void*)0},{&g_11,&g_11,&g_11}},{{(void*)0,(void*)0,(void*)0},{&g_11,&g_11,&g_11}}};
        int32_t **l_623 = &l_622[2][0][0];
        int32_t *l_624 = &g_227;
        union U4 * const *l_630[3];
        union U3 *l_633[2][4] = {{&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634}};
        union U2 *l_652 = (void*)0;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_630[i] = &g_303[0][4][0];
        g_174 = ((safe_sub_func_int8_t_s_s(((*l_298) &= (*g_18)), (((safe_div_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_606 &= l_403.f1), (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((0xBF19C595L == ((l_613 , l_614) != l_616)) == (++(*l_618))), (p_26 >= l_621))), 14)), p_26)))), 5)) == l_613) & l_613), p_25)) > g_8) && 1UL))) >= (*g_18));
        (*l_624) = (&l_613 == ((*l_623) = (void*)0));
        if (g_625[0][0][3])
            continue;
        for (g_229 = 0; (g_229 <= 3); g_229 += 1)
        { 
            int64_t l_631 = 7L;
            const union U4 *l_638 = (void*)0;
            const union U4 **l_637[7][4] = {{&l_638,&l_638,&l_638,&l_638},{&l_638,(void*)0,&l_638,&l_638},{&l_638,&l_638,&l_638,&l_638},{&l_638,(void*)0,&l_638,&l_638},{&l_638,&l_638,&l_638,&l_638},{&l_638,&l_638,&l_638,&l_638},{&l_638,(void*)0,&l_638,&l_638}};
            const union U4 ***l_636 = &l_637[3][1];
            union U2 l_639 = {0L};
            int16_t *l_648[4] = {&g_453,&g_453,&g_453,&g_453};
            int32_t l_649 = 0xADCBBDC8L;
            int i, j;
            g_627++;
            for (p_26 = 3; (p_26 >= 0); p_26 -= 1)
            { 
                union U4 ****l_635 = &g_306;
                union U2 *l_651 = &g_322;
                union U2 **l_650[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_650[i] = &l_651;
                for (l_290 = 0; (l_290 <= 3); l_290 += 1)
                { 
                    l_631 = ((void*)0 == l_630[2]);
                    if (g_199)
                        goto lbl_632;
                    (*l_624) ^= 1L;
                }
                l_633[0][0] = &g_286;
                (*l_623) = ((((*l_635) = g_306) != l_636) , (l_639 , (((l_649 = (safe_div_func_uint64_t_u_u(((((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((void*)0 != &l_472), p_26)), (safe_lshift_func_uint8_t_u_u((((((void*)0 != l_648[2]) ^ g_5) & 0xDC07L) == 9UL), l_403.f4)))) | (*g_474)) == 0x25L) & 1L), g_178.f2))) ^ g_322.f0) , &g_5)));
                l_652 = &g_322;
            }
        }
    }
    return g_653;
}



static uint16_t  func_44(int8_t * p_45, int32_t * p_46, int32_t * p_47, int64_t  p_48)
{ 
    uint8_t l_192 = 7UL;
    int32_t l_198 = 0xEB8F9188L;
    union U1 l_268 = {0x5BL};
    uint32_t l_287[3];
    int i;
    for (i = 0; i < 3; i++)
        l_287[i] = 0x7D3C9431L;
    for (g_178.f4 = 20; (g_178.f4 == 37); g_178.f4 = safe_add_func_int32_t_s_s(g_178.f4, 5))
    { 
        uint64_t l_185 = 0x103C868A9B376D11LL;
        int32_t l_190 = 1L;
        struct S0 *l_193 = (void*)0;
        uint8_t *l_212 = &l_192;
        int32_t *l_213[4] = {&g_174,&g_174,&g_174,&g_174};
        int i;
        if ((l_185 = 0x3EDB1A99L))
        { 
            uint64_t l_186 = 18446744073709551615UL;
            int32_t *l_187 = (void*)0;
            int32_t *l_188 = (void*)0;
            int32_t *l_189 = (void*)0;
            int32_t *l_191 = &g_174;
            struct S0 **l_194 = &l_193;
            (*l_191) = (l_190 = (g_70 = l_186));
            if (l_192)
                continue;
            (*l_194) = l_193;
        }
        else
        { 
            int32_t *l_195 = &l_190;
            int32_t *l_196 = (void*)0;
            int32_t *l_197[7];
            int16_t l_202 = 0xAE19L;
            int i;
            for (i = 0; i < 7; i++)
                l_197[i] = (void*)0;
            ++g_199;
            l_202 |= l_190;
        }
        if ((*p_47))
            break;
        l_198 ^= ((~(safe_mul_func_uint16_t_u_u(((l_185 > (safe_lshift_func_int8_t_s_u((*p_45), 1))) && p_48), l_192))) || (safe_div_func_int64_t_s_s((g_8 & 1UL), (safe_div_func_uint32_t_u_u(((void*)0 == l_212), l_190)))));
        for (g_178.f5 = 8; (g_178.f5 > 18); g_178.f5++)
        { 
            for (g_131 = (-15); (g_131 != 59); g_131 = safe_add_func_int8_t_s_s(g_131, 1))
            { 
                int32_t l_218[3][5][3] = {{{1L,0x6D06614CL,1L},{0xDE1F74ECL,(-1L),0xDE1F74ECL},{1L,0x6D06614CL,1L},{0xDE1F74ECL,(-1L),0xDE1F74ECL},{1L,0x6D06614CL,1L}},{{0xDE1F74ECL,(-1L),0xDE1F74ECL},{1L,0x6D06614CL,1L},{0xDE1F74ECL,(-1L),0xDE1F74ECL},{1L,0x6D06614CL,1L},{0xDE1F74ECL,(-1L),0xDE1F74ECL}},{{1L,0x6D06614CL,1L},{0xDE1F74ECL,(-1L),0xDE1F74ECL},{1L,0x6D06614CL,1L},{0xDE1F74ECL,(-1L),0xDE1F74ECL},{1L,0x6D06614CL,1L}}};
                int i, j, k;
                return l_218[0][4][2];
            }
        }
        for (g_178.f0 = 7; (g_178.f0 == 5); --g_178.f0)
        { 
            int32_t l_221 = 1L;
            int32_t l_222[2][3][5] = {{{0L,0x1311AD50L,0x1311AD50L,0L,0x67439DE1L},{1L,0L,0L,1L,0x6DB04045L},{0L,0x1311AD50L,0x1311AD50L,0L,0x67439DE1L}},{{1L,0L,0L,1L,0x6DB04045L},{0L,0x1311AD50L,0x1311AD50L,0L,0x67439DE1L},{1L,0L,0L,1L,0x6DB04045L}}};
            const struct S0 *l_249 = &g_250;
            struct S0 *l_254 = &g_250;
            int i, j, k;
            for (g_35 = 0; (g_35 <= 3); g_35 += 1)
            { 
                uint32_t l_223 = 4294967290UL;
                int32_t l_226[5] = {0x001E96B0L,0x001E96B0L,0x001E96B0L,0x001E96B0L,0x001E96B0L};
                int32_t *l_236 = &l_226[2];
                const struct S0 **l_251 = &l_249;
                const struct S0 *l_252 = &g_253;
                int32_t l_271 = 0xF632706BL;
                int32_t l_275 = 0x63E400F4L;
                int i;
                --l_223;
                g_229--;
                for (g_74 = 0; (g_74 <= 1); g_74 += 1)
                { 
                    uint32_t l_232 = 18446744073709551615UL;
                    int32_t **l_235[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_235[i] = &l_213[1];
                    ++l_232;
                    l_236 = l_213[(g_74 + 2)];
                    return l_226[(g_74 + 2)];
                }
                if ((((g_178.f1 = l_198) == (4UL > (((safe_rshift_func_int8_t_s_u((250UL != l_221), 4)) , ((safe_lshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(((l_252 = ((*l_251) = l_249)) == l_254), (((++g_229) , (safe_sub_func_uint16_t_u_u(((g_227 <= p_48) != (*l_236)), 0x521AL))) < p_48))) , g_250.f2), 5)) | 9L) ^ (-10L)), 8)), 0x83455AAA9526B4DCLL)), 5)) > 0xA6EC6CEE44133143LL)) , 0L))) || (-3L)))
                { 
                    int16_t *l_262 = &g_178.f1;
                    struct S0 *l_263 = &g_250;
                    int8_t *l_270 = &g_250.f5;
                    int8_t **l_269 = &l_270;
                    uint64_t *l_274[1][6][1] = {{{&g_131},{(void*)0},{&g_131},{&g_131},{(void*)0},{&g_131}}};
                    int i, j, k;
                    (*l_236) = (l_222[0][1][2] = (((g_250.f0 >= (((*l_262) = (safe_lshift_func_int8_t_s_s(((*g_18) == (+(((1UL < p_48) , l_213[g_35]) == p_47))), 6))) | 0xE247L)) | (*l_236)) | p_48));
                    (*l_251) = l_263;
                    g_70 &= (l_275 = (((((*l_236) = ((void*)0 == &g_174)) > (safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_178.f2, (((g_154 ^= (((g_131 &= (((l_268 , (l_271 = (&g_19 != ((*l_269) = p_45)))) , (&l_249 == g_272)) != g_253.f0)) && g_228) <= 0x2901L)) , (void*)0) != p_46))), 255UL))) >= p_48) == 0x9DC8L));
                }
                else
                { 
                    int32_t l_281 = 4L;
                    (*l_236) &= g_70;
                    (*l_236) ^= (l_222[0][0][0] == (safe_sub_func_int32_t_s_s(0x7CD0BF88L, ((+l_222[0][1][3]) > ((safe_add_func_int8_t_s_s((l_221 &= l_281), (p_48 , (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((g_253.f3 == (g_286 , g_178.f0)), 11)), 0x0E64833EL))))) , g_199)))));
                }
                if ((*l_236))
                    continue;
            }
        }
    }
    return l_287[2];
}



static int32_t * func_50(int32_t * const  p_51)
{ 
    union U4 l_58 = {0x98A9L};
    union U6 l_66 = {7L};
    uint8_t *l_72 = (void*)0;
    uint8_t *l_73 = &g_74;
    int32_t *l_75 = &g_70;
    const uint8_t *l_85 = &g_74;
    int32_t l_111 = 6L;
    int32_t l_172 = 0L;
    (*l_75) = (safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((l_58 , (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(g_35, 1)), func_63(l_66, l_66)))), ((*l_73) = (l_58.f0 , (l_66.f0 , 0xBFL))))), g_35)), l_66.f0));
    for (l_58.f1 = 10; (l_58.f1 < 12); ++l_58.f1)
    { 
        int16_t l_90 = 0xAEFFL;
        uint8_t l_97 = 0x0CL;
        int32_t l_109[2];
        uint64_t l_112[6];
        int i;
        for (i = 0; i < 2; i++)
            l_109[i] = 0x9027EA7EL;
        for (i = 0; i < 6; i++)
            l_112[i] = 18446744073709551607UL;
        if (g_29)
        { 
            uint32_t l_84[3][1];
            int32_t *l_87 = &l_66.f0;
            int32_t l_89[5][3][3] = {{{0xF149C99CL,0x97CAD959L,0xF149C99CL},{0xC89503A5L,3L,0xDB73D5EAL},{0x23142ACEL,0x23142ACEL,0x14E9C127L}},{{2L,3L,3L},{0x14E9C127L,0x97CAD959L,(-2L)},{2L,1L,2L}},{{0x23142ACEL,0x14E9C127L,(-2L)},{0xC89503A5L,0xC89503A5L,3L},{0xF149C99CL,0x14E9C127L,0x14E9C127L}},{{3L,1L,0xDB73D5EAL},{0xF149C99CL,0x97CAD959L,0xF149C99CL},{0xC89503A5L,2L,1L}},{{0x14E9C127L,0x14E9C127L,0xF149C99CL},{0xDB73D5EAL,2L,2L},{0xF149C99CL,0x23142ACEL,0x97CAD959L}}};
            union U6 l_119 = {0L};
            int16_t l_130 = 0xA2CBL;
            uint8_t *l_132 = &l_97;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_84[i][j] = 0xC20EB8FCL;
            }
            for (g_35 = 9; (g_35 >= 19); ++g_35)
            { 
                int32_t l_86 = (-1L);
                int32_t *l_88 = &g_11;
                int32_t l_96 = (-5L);
                uint32_t l_133 = 4294967287UL;
                (*l_75) = ((safe_rshift_func_uint8_t_u_s(l_84[0][0], 1)) ^ (l_86 = ((*g_18) != (((*l_75) > l_84[0][0]) == ((void*)0 == l_85)))));
                if (((l_86 && ((void*)0 == &g_74)) || (*l_75)))
                { 
                    return l_88;
                }
                else
                { 
                    int32_t *l_91 = (void*)0;
                    int32_t *l_92 = &l_89[0][2][1];
                    int32_t *l_93 = &l_66.f0;
                    int32_t *l_94 = (void*)0;
                    int32_t *l_95[4] = {&g_70,&g_70,&g_70,&g_70};
                    int i;
                    l_97--;
                }
            }
            if ((*p_51))
                break;
            l_109[0] ^= g_19;
            (*l_75) = (safe_mul_func_int16_t_s_s(g_70, l_109[0]));
        }
        else
        { 
            union U4 l_151[4] = {{0x8B3FL},{0x8B3FL},{0x8B3FL},{0x8B3FL}};
            int32_t l_157 = 0xD419A621L;
            struct S0 *l_177 = &g_178;
            int i;
            if (g_8)
            { 
                int32_t *l_140 = &g_5;
                uint32_t *l_162 = (void*)0;
                uint32_t *l_163[7];
                int32_t *l_173 = &g_174;
                int i;
                for (i = 0; i < 7; i++)
                    l_163[i] = &g_35;
                for (l_90 = 0; (l_90 > (-10)); l_90--)
                { 
                    return l_140;
                }
                (*l_75) = (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((l_109[0] , 0UL), (+(!(((*l_75) >= (safe_mul_func_int16_t_s_s((g_74 != (((l_151[0] , (safe_rshift_func_int16_t_s_u(l_151[0].f0, (0x68L || g_154)))) >= (*l_75)) != 4294967289UL)), (*l_75)))) || 0UL))))), 6UL));
                (*l_173) &= ((*l_75) = (l_172 ^= ((*l_140) == ((safe_mod_func_uint8_t_u_u((g_110 && ((l_157 |= l_151[0].f0) > (safe_sub_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s(g_70, (0x89AC8C39L == (l_111 = (l_66.f0 &= l_151[0].f0))))) < ((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((*l_75), l_151[0].f0)), l_112[1])) & g_35), l_151[0].f0)), (*l_140))) == l_151[0].f0)) > g_19), g_19)))), l_109[1])) ^ 0x383E8666L))));
            }
            else
            { 
                int32_t **l_175 = (void*)0;
                struct S0 **l_179 = (void*)0;
                struct S0 **l_180 = &l_177;
                g_176 = &l_109[0];
                (*l_180) = l_177;
            }
        }
        for (g_178.f1 = 1; (g_178.f1 >= 0); g_178.f1 -= 1)
        { 
            int i;
            l_109[g_178.f1] = (safe_mod_func_int64_t_s_s(0xB8DD50FD98BFE20ELL, l_109[g_178.f1]));
            return &g_70;
        }
    }
    return &g_174;
}



static int16_t  func_63(union U6  p_64, union U6  p_65)
{ 
    uint32_t l_71 = 18446744073709551613UL;
    for (g_29 = (-14); (g_29 >= 39); g_29 = safe_add_func_uint8_t_u_u(g_29, 5))
    { 
        int32_t *l_69[5];
        int i;
        for (i = 0; i < 5; i++)
            l_69[i] = &g_70;
        l_71 = 0x9FD593B8L;
    }
    return g_5;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_178.f0, "g_178.f0", print_hash_value);
    transparent_crc(g_178.f1, "g_178.f1", print_hash_value);
    transparent_crc(g_178.f2, "g_178.f2", print_hash_value);
    transparent_crc(g_178.f3, "g_178.f3", print_hash_value);
    transparent_crc(g_178.f4, "g_178.f4", print_hash_value);
    transparent_crc(g_178.f5, "g_178.f5", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_250.f0, "g_250.f0", print_hash_value);
    transparent_crc(g_250.f1, "g_250.f1", print_hash_value);
    transparent_crc(g_250.f2, "g_250.f2", print_hash_value);
    transparent_crc(g_250.f3, "g_250.f3", print_hash_value);
    transparent_crc(g_250.f4, "g_250.f4", print_hash_value);
    transparent_crc(g_250.f5, "g_250.f5", print_hash_value);
    transparent_crc(g_253.f0, "g_253.f0", print_hash_value);
    transparent_crc(g_253.f1, "g_253.f1", print_hash_value);
    transparent_crc(g_253.f2, "g_253.f2", print_hash_value);
    transparent_crc(g_253.f3, "g_253.f3", print_hash_value);
    transparent_crc(g_253.f4, "g_253.f4", print_hash_value);
    transparent_crc(g_253.f5, "g_253.f5", print_hash_value);
    transparent_crc(g_286.f0.f0, "g_286.f0.f0", print_hash_value);
    transparent_crc(g_286.f0.f1, "g_286.f0.f1", print_hash_value);
    transparent_crc(g_286.f0.f2, "g_286.f0.f2", print_hash_value);
    transparent_crc(g_286.f0.f3, "g_286.f0.f3", print_hash_value);
    transparent_crc(g_286.f0.f4, "g_286.f0.f4", print_hash_value);
    transparent_crc(g_286.f0.f5, "g_286.f0.f5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_304[i][j][k].f0, "g_304[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_322.f0, "g_322.f0", print_hash_value);
    transparent_crc(g_322.f1, "g_322.f1", print_hash_value);
    transparent_crc(g_322.f2, "g_322.f2", print_hash_value);
    transparent_crc(g_322.f3, "g_322.f3", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_414.f0, "g_414.f0", print_hash_value);
    transparent_crc(g_422.f0, "g_422.f0", print_hash_value);
    transparent_crc(g_422.f1, "g_422.f1", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_550, "g_550", print_hash_value);
    transparent_crc(g_585.f0, "g_585.f0", print_hash_value);
    transparent_crc(g_585.f1, "g_585.f1", print_hash_value);
    transparent_crc(g_585.f2, "g_585.f2", print_hash_value);
    transparent_crc(g_585.f3, "g_585.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_625[i][j][k], "g_625[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_634.f0.f0, "g_634.f0.f0", print_hash_value);
    transparent_crc(g_634.f0.f1, "g_634.f0.f1", print_hash_value);
    transparent_crc(g_634.f0.f2, "g_634.f0.f2", print_hash_value);
    transparent_crc(g_634.f0.f3, "g_634.f0.f3", print_hash_value);
    transparent_crc(g_634.f0.f4, "g_634.f0.f4", print_hash_value);
    transparent_crc(g_634.f0.f5, "g_634.f0.f5", print_hash_value);
    transparent_crc(g_653.f0, "g_653.f0", print_hash_value);
    transparent_crc(g_885, "g_885", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_891, "g_891", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    transparent_crc(g_955, "g_955", print_hash_value);
    transparent_crc(g_977, "g_977", print_hash_value);
    transparent_crc(g_978, "g_978", print_hash_value);
    transparent_crc(g_997, "g_997", print_hash_value);
    transparent_crc(g_1003, "g_1003", print_hash_value);
    transparent_crc(g_1036, "g_1036", print_hash_value);
    transparent_crc(g_1037, "g_1037", print_hash_value);
    transparent_crc(g_1039, "g_1039", print_hash_value);
    transparent_crc(g_1048, "g_1048", print_hash_value);
    transparent_crc(g_1185, "g_1185", print_hash_value);
    transparent_crc(g_1186, "g_1186", print_hash_value);
    transparent_crc(g_1188, "g_1188", print_hash_value);
    transparent_crc(g_1190, "g_1190", print_hash_value);
    transparent_crc(g_1218.f0, "g_1218.f0", print_hash_value);
    transparent_crc(g_1218.f1, "g_1218.f1", print_hash_value);
    transparent_crc(g_1230, "g_1230", print_hash_value);
    transparent_crc(g_1231, "g_1231", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1247[i], "g_1247[i]", print_hash_value);

    }
    transparent_crc(g_1248, "g_1248", print_hash_value);
    transparent_crc(g_1331.f0, "g_1331.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1347[i][j][k], "g_1347[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
