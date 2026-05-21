// SPDX-License-Identifier: MIT
// cctest_csmith_263e681b.c --- cctest case csmith_263e681b (csmith seed 641624091)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe57d818e */

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

// Options:   -s 641624091 -o /tmp/csmith_gen_vp9bzz5b/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   const int32_t  f1;
   uint32_t  f2;
   const uint32_t  f3;
   uint32_t  f4;
};

struct S1 {
   struct S0  f0;
   uint64_t  f1;
   uint64_t  f2;
   uint64_t  f3;
   int16_t  f4;
};

struct S2 {
   int32_t  f0;
   uint16_t  f1;
   const int64_t  f2;
   int8_t  f3;
   int64_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   uint32_t  f0;
   struct S0  f1;
   uint64_t  f2;
   int32_t  f3;
};
#pragma pack(pop)

struct S5 {
   int32_t  f0;
   uint32_t  f1;
   int64_t  f2;
   uint64_t  f3;
   const uint32_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S6 {
   uint16_t  f0;
   uint64_t  f1;
   uint8_t  f2;
};
#pragma pack(pop)

union U7 {
   uint8_t  f0;
   struct S3  f1;
};

union U8 {
   uint32_t  f0;
};

union U9 {
   uint16_t  f0;
   int32_t  f1;
   int16_t  f2;
   struct S5  f3;
};


static int32_t g_2 = 0L;
static int32_t g_6 = 0x7BC35240L;
static int32_t g_7 = 1L;
static int8_t g_20 = 7L;
static int16_t g_33 = 0x6278L;
static int32_t g_45[1][3][2] = {{{0x3C574C3FL,0x464CC08FL},{0x464CC08FL,0x3C574C3FL},{0x464CC08FL,0x464CC08FL}}};
static struct S2 g_68 = {0xBDD19600L,6UL,0xD6C75606FA126CF2LL,-5L,0x45E92913E687FAFFLL};
static uint8_t g_90 = 0UL;
static const struct S5 g_112 = {-1L,18446744073709551615UL,0x1D3E0DDAC5461FDELL,0x9C777C127BBD1554LL,0xC1AE132CL};
static struct S0 g_125 = {9UL,0xB66A5237L,0xB96263D1L,0xAC5B96D1L,0xC86EBFBDL};
static int64_t g_130 = 0x8B9831B067415822LL;
static struct S6 g_151 = {0x041FL,0x75004CB6478E9305LL,0UL};
static const union U9 g_157[1][3] = {{{0x07E2L},{0x07E2L},{0x07E2L}}};
static struct S6 g_165 = {0UL,18446744073709551609UL,252UL};



static uint32_t  func_1(void);
static int16_t  func_10(int64_t  p_11, struct S3  p_12);
static struct S3  func_13(uint16_t  p_14, const int32_t  p_15, int64_t  p_16);
static int32_t  func_24(const union U7  p_25);




static uint32_t  func_1(void)
{ 
    const uint64_t l_19 = 0UL;
    int32_t l_184 = (-1L);
    int32_t l_188 = 0xC6978A9AL;
    for (g_2 = 17; (g_2 == 18); g_2++)
    { 
        int32_t l_5[2][2][2];
        uint64_t l_131 = 0x9FADE23C6E33F1E1LL;
        uint8_t l_189 = 246UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_5[i][j][k] = (-8L);
            }
        }
        for (g_6 = 0; (g_6 <= 1); g_6 += 1)
        { 
            uint32_t l_120[5][5][4] = {{{1UL,0x7ED74FDEL,18446744073709551611UL,18446744073709551615UL},{9UL,0UL,1UL,2UL},{2UL,0UL,0UL,2UL},{1UL,2UL,1UL,0x97897607L},{18446744073709551607UL,0xC89B844BL,2UL,4UL}},{{0x87F6218EL,0x7CAD9AABL,18446744073709551611UL,4UL},{0UL,0xC89B844BL,0x2696F317L,0x97897607L},{0x042F2811L,2UL,0xE34C1BD7L,2UL},{2UL,0UL,18446744073709551615UL,2UL},{18446744073709551611UL,0x7CAD9AABL,2UL,0xFDF9FEE0L}},{{0x97897607L,0UL,0x042F2811L,0x5F163BA6L},{1UL,0x0BA8EAFAL,2UL,0UL},{18446744073709551615UL,0UL,1UL,0x784B4C2BL},{0UL,0x2696F317L,18446744073709551615UL,0x2696F317L},{0x2696F317L,0x0BA8EAFAL,2UL,1UL}},{{1UL,0x97897607L,0xC1A49182L,0xFDF9FEE0L},{0xC0BC80B3L,1UL,8UL,0UL},{0xC0BC80B3L,1UL,0xC1A49182L,0xC0BC80B3L},{1UL,0UL,2UL,0xC1A49182L},{0x2696F317L,0x7CAD9AABL,18446744073709551615UL,0x5F163BA6L}},{{0UL,0xE34C1BD7L,1UL,0UL},{18446744073709551615UL,1UL,2UL,0xC1A49182L},{1UL,0x2696F317L,0x042F2811L,18446744073709551615UL},{0x97897607L,1UL,2UL,0x2696F317L},{0xBFDBDBAAL,0x0613AA2FL,0xFDF9FEE0L,0xFDF9FEE0L}}};
            int32_t l_128[4][4] = {{0x849F51E4L,0x849F51E4L,0x849F51E4L,0x849F51E4L},{0x849F51E4L,0x849F51E4L,0x849F51E4L,0x849F51E4L},{0x849F51E4L,0x849F51E4L,0x849F51E4L,0x849F51E4L},{0x849F51E4L,0x849F51E4L,0x849F51E4L,0x849F51E4L}};
            struct S6 l_144 = {65528UL,0x173A89DF1001EED8LL,255UL};
            struct S0 l_147 = {0xA50289E928ECA246LL,-1L,0x3E846025L,5UL,18446744073709551607UL};
            struct S6 l_152 = {0x2E9EL,0xED4AC5765B8F50E1LL,0xE3L};
            int i, j, k;
            for (g_7 = 0; (g_7 <= 1); g_7 += 1)
            { 
                int32_t l_21 = (-4L);
                int i, j, k;
                l_5[g_6][g_7][g_6] = (safe_mod_func_int16_t_s_s(func_10(l_5[g_6][g_7][g_6], func_13((g_6 , (g_20 = ((safe_mod_func_uint32_t_u_u(l_5[g_6][g_7][g_6], 4UL)) > l_19))), g_6, l_21)), l_5[1][1][1]));
                l_120[2][3][2]--;
                l_5[g_6][g_7][g_6] = (safe_div_func_uint16_t_u_u(((g_125 , (65535UL | (((g_68.f4 = l_19) | (safe_mul_func_int8_t_s_s(l_21, 0xB0L))) != g_7))) ^ l_19), g_6));
            }
            if (g_90)
            { 
                int32_t l_129[4][5][3] = {{{1L,(-3L),(-3L)},{0x845497A7L,0x62529DB5L,(-9L)},{0x9E98DDEFL,(-3L),(-7L)},{(-3L),0x62529DB5L,0x62529DB5L},{0xC549D73AL,(-3L),0xEF3092C3L}},{{0x980C72C3L,0x62529DB5L,0x388B51EEL},{1L,(-3L),(-3L)},{0x845497A7L,0x62529DB5L,(-9L)},{0x9E98DDEFL,(-3L),(-7L)},{(-3L),0x62529DB5L,0x62529DB5L}},{{0xC549D73AL,(-3L),0xEF3092C3L},{0x980C72C3L,0x62529DB5L,0x388B51EEL},{1L,(-3L),(-3L)},{0x845497A7L,0x62529DB5L,(-9L)},{0x9E98DDEFL,(-3L),(-7L)}},{{(-3L),0x62529DB5L,0x62529DB5L},{0xC549D73AL,(-3L),0xEF3092C3L},{0x980C72C3L,0x62529DB5L,0x388B51EEL},{1L,(-3L),(-3L)},{0x845497A7L,0x62529DB5L,(-9L)}}};
                int32_t l_150 = (-1L);
                int i, j, k;
                ++l_131;
                l_128[2][2] = (safe_mul_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(g_125.f2, (++g_90))), (g_125.f0 = (safe_mul_func_int16_t_s_s((l_144 , ((((((safe_sub_func_uint64_t_u_u((l_147 , (safe_lshift_func_int8_t_s_s(g_112.f2, g_33))), l_128[0][2])) ^ 0x74FF5F6CEBD2D59BLL) >= 6UL) <= l_144.f0) != g_112.f2) == l_147.f1)), l_150))))), l_147.f4));
                l_152 = g_151;
            }
            else
            { 
                uint16_t l_162 = 9UL;
                g_45[0][2][0] = ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((l_128[2][2] | ((g_157[0][1] , (safe_mod_func_int32_t_s_s((0x5D17L >= ((safe_rshift_func_uint8_t_u_u(l_152.f2, l_162)) != l_128[3][0])), 1L))) ^ g_125.f3)), 14)), g_68.f0)) <= g_68.f0);
            }
            for (g_125.f4 = (-6); (g_125.f4 != 59); g_125.f4++)
            { 
                g_165 = (g_151 = g_151);
            }
        }
        l_189 = (safe_sub_func_int16_t_s_s((l_188 = ((g_151.f0 = (l_19 && (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(1L, 2)), (g_68.f1 = ((g_151.f2 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((g_68.f3 = (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_184 ^= g_165.f1), (safe_rshift_func_int16_t_s_u((((+((g_125.f0 &= (((g_151.f0 ^ 0x50L) & l_131) != 0UL)) , g_20)) | g_45[0][0][1]) ^ 0x8AB57959L), 7)))), 0x2DA5L))), l_19)) & g_151.f0) <= g_151.f1), 7)) , l_184), l_131)), 2))) , 65534UL)))))) | g_125.f1)), g_165.f0));
        return g_68.f0;
    }
    return l_188;
}



static int16_t  func_10(int64_t  p_11, struct S3  p_12)
{ 
    const int8_t l_85 = 0x34L;
    int32_t l_93 = 0x106AF828L;
lbl_119:
    l_93 |= (l_85 & ((((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((g_90 = g_68.f1) || 0xF9C7B46AL), 6)), ((safe_lshift_func_int16_t_s_s(g_33, p_12.f3)) , 1UL))) >= p_12.f1.f0) && g_6) <= 0L));
    if (((safe_mul_func_int32_t_s_s(1L, (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u((0UL & (65533UL >= (--g_68.f1))), p_12.f1.f0)), 5)), g_68.f0)))) , 0xF1C6A60FL))
    { 
        uint8_t l_104 = 2UL;
        return l_104;
    }
    else
    { 
        uint8_t l_105 = 0xE8L;
        struct S6 l_108[4] = {{0x0AFFL,1UL,0x51L},{0x0AFFL,1UL,0x51L},{0x0AFFL,1UL,0x51L},{0x0AFFL,1UL,0x51L}};
        uint32_t l_111 = 4294967295UL;
        int32_t l_118[5][2][1] = {{{3L},{(-1L)}},{{3L},{(-1L)}},{{3L},{(-1L)}},{{3L},{(-1L)}},{{3L},{(-1L)}}};
        int i, j, k;
        g_45[0][1][0] = (((((l_105 &= 252UL) == g_2) || l_93) & (g_68.f2 ^ 0xA4L)) , 0x33DC0AD4L);
        for (p_12.f3 = 0; (p_12.f3 >= 21); p_12.f3++)
        { 
            l_108[2] = l_108[2];
            for (p_12.f0 = 0; (p_12.f0 == 19); p_12.f0 = safe_add_func_uint64_t_u_u(p_12.f0, 1))
            { 
                l_111 = 0x3C1BAF1AL;
            }
            if ((g_112 , (0x6D5B5E94L & 0x5D7F0433L)))
            { 
                struct S6 l_113 = {65535UL,18446744073709551615UL,0UL};
                l_113 = l_113;
                return l_93;
            }
            else
            { 
                g_68.f0 = (safe_sub_func_int16_t_s_s((0xA2504B5DL > l_108[2].f1), (safe_sub_func_int64_t_s_s((p_11 >= p_11), p_12.f1.f3))));
                l_118[2][1][0] = 0xEBE33062L;
            }
        }
    }
    if (g_112.f1)
        goto lbl_119;
    return p_12.f1.f2;
}



static struct S3  func_13(uint16_t  p_14, const int32_t  p_15, int64_t  p_16)
{ 
    uint8_t l_22 = 0xC9L;
    union U8 l_26[1] = {{0x55F5DDA3L}};
    const union U7 l_27 = {0UL};
    int32_t l_34 = 3L;
    int32_t l_43 = 0x0A751F09L;
    struct S1 l_48 = {{1UL,-9L,0xAC6DEA28L,18446744073709551615UL,0UL},18446744073709551615UL,0xEE22E7E12F400034LL,5UL,-1L};
    struct S3 l_84 = {4294967295UL,{0x13FB221D915B70EDLL,0L,4294967289UL,18446744073709551615UL,0x0E71BFC3L},18446744073709551613UL,1L};
    int i;
    l_22 |= p_14;
    l_34 = (!(func_24((l_26[0] , l_27)) , p_16));
    if ((l_43 ^= ((safe_mod_func_uint8_t_u_u(3UL, (((safe_mul_func_int8_t_s_s((l_34 &= ((g_33 &= 0x21F0L) || (-1L))), (safe_lshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s(l_27.f0, p_15)) < 0xA13EL) || g_2), p_16)))) != l_26[0].f0) & 1UL))) , p_16)))
    { 
        int32_t l_59 = 0L;
        struct S6 l_62 = {65534UL,1UL,0UL};
        g_45[0][1][0] = (safe_unary_minus_func_int8_t_s(p_15));
        for (p_16 = 0; (p_16 <= (-11)); p_16 = safe_sub_func_uint8_t_u_u(p_16, 1))
        { 
            union U8 l_58[3] = {{1UL},{1UL},{1UL}};
            struct S6 l_61[3][1] = {{{65529UL,0x237F326F70CD436FLL,0xA1L}},{{65529UL,0x237F326F70CD436FLL,0xA1L}},{{65529UL,0x237F326F70CD436FLL,0xA1L}}};
            int32_t l_69 = 0x9DAF641AL;
            int i, j;
            if ((l_43 = ((4294967295UL != (((g_6 , ((l_48 , ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s((65535UL < p_14), 7)) == 0x04L), p_15)) & 0xD65EL)) & g_45[0][1][0])) ^ g_6) == p_15)) ^ l_48.f0.f4)))
            { 
                struct S6 l_60[4][5][4] = {{{{0x0CEAL,0xAB8BF77F61DB4512LL,0UL},{0UL,0xA0996A0D2C134511LL,0x04L},{0x8B14L,0x893BA86ABA2F2E68LL,0xA9L},{0xBE0FL,0x27EED8CCA49BD5B7LL,1UL}},{{0xBE0FL,0x27EED8CCA49BD5B7LL,1UL},{65535UL,0x4738E283F91D89D7LL,0x71L},{0x2E02L,1UL,0UL},{0x2E02L,1UL,0UL}},{{0x7598L,0UL,255UL},{0x7598L,0UL,255UL},{0xBE0FL,0x27EED8CCA49BD5B7LL,1UL},{0x8B14L,0x893BA86ABA2F2E68LL,0xA9L}},{{65535UL,6UL,0xDFL},{3UL,0xA5A8626FBE56F420LL,1UL},{0x7CA4L,0x2BFDB46CE14E34DALL,9UL},{0xA084L,0UL,251UL}},{{0UL,1UL,0xBFL},{0xBE0FL,0x27EED8CCA49BD5B7LL,1UL},{0UL,0xA0996A0D2C134511LL,0x04L},{0x7CA4L,0x2BFDB46CE14E34DALL,9UL}}},{{{65535UL,0xA3CEE854D9B325F0LL,0x28L},{0xBE0FL,0x27EED8CCA49BD5B7LL,1UL},{65535UL,0xDB5163BE35A84480LL,0UL},{0xA084L,0UL,251UL}},{{0xBE0FL,0x27EED8CCA49BD5B7LL,1UL},{3UL,0xA5A8626FBE56F420LL,1UL},{0UL,0UL,0x68L},{0x8B14L,0x893BA86ABA2F2E68LL,0xA9L}},{{0xB182L,6UL,0x7CL},{0x7598L,0UL,255UL},{0UL,6UL,249UL},{65535UL,0x4738E283F91D89D7LL,0x71L}},{{8UL,0xDC9450E8DB49C3B7LL,0x0CL},{0x7598L,0UL,255UL},{8UL,0xDC9450E8DB49C3B7LL,0x0CL},{0x1F98L,1UL,0xD7L}},{{0UL,0UL,0x68L},{65535UL,6UL,0xDFL},{0UL,1UL,0xBFL},{8UL,0xDC9450E8DB49C3B7LL,0x0CL}}},{{{0UL,0xA0996A0D2C134511LL,0x04L},{0UL,1UL,0xBFL},{0x5B62L,0UL,246UL},{65535UL,6UL,0xDFL}},{{0x1F98L,1UL,0xD7L},{65535UL,0xA3CEE854D9B325F0LL,0x28L},{0x5B62L,0UL,246UL},{3UL,0xA5A8626FBE56F420LL,1UL}},{{0UL,0xA0996A0D2C134511LL,0x04L},{0xBE0FL,0x27EED8CCA49BD5B7LL,1UL},{0UL,1UL,0xBFL},{0xDF84L,0x1D562F9B9B50EBCELL,255UL}},{{0UL,0UL,0x68L},{0xB182L,6UL,0x7CL},{8UL,0xDC9450E8DB49C3B7LL,0x0CL},{0x7CA4L,0x2BFDB46CE14E34DALL,9UL}},{{8UL,0xDC9450E8DB49C3B7LL,0x0CL},{0x7CA4L,0x2BFDB46CE14E34DALL,9UL},{0x7CA4L,0x2BFDB46CE14E34DALL,9UL},{8UL,0xDC9450E8DB49C3B7LL,0x0CL}}},{{{0xA084L,0UL,251UL},{0xCC5FL,1UL,0xAFL},{0xDF84L,0x1D562F9B9B50EBCELL,255UL},{0UL,1UL,0xBFL}},{{0x1F98L,1UL,0xD7L},{0x7944L,0x95D4E0960388C07ALL,1UL},{3UL,0xA5A8626FBE56F420LL,1UL},{0x5B62L,0UL,246UL}},{{65531UL,0x65AEC415B45A7EABLL,0xE2L},{0xBE0FL,0x27EED8CCA49BD5B7LL,1UL},{65535UL,6UL,0xDFL},{0x5B62L,0UL,246UL}},{{0x2E02L,1UL,0UL},{0x7944L,0x95D4E0960388C07ALL,1UL},{8UL,0xDC9450E8DB49C3B7LL,0x0CL},{0UL,1UL,0xBFL}},{{65535UL,0xDB5163BE35A84480LL,0UL},{0xCC5FL,1UL,0xAFL},{0x1F98L,1UL,0xD7L},{8UL,0xDC9450E8DB49C3B7LL,0x0CL}}}};
                int i, j, k;
                l_59 = ((safe_unary_minus_func_int8_t_s(0L)) ^ (safe_lshift_func_int16_t_s_u((0x00AC9E8FL <= ((p_15 == (safe_mul_func_uint8_t_u_u((l_58[0] , g_45[0][1][0]), l_48.f0.f4))) <= g_7)), 8)));
                l_61[1][0] = (l_60[0][4][2] = l_60[3][2][2]);
            }
            else
            { 
                struct S6 l_63 = {0x7B72L,1UL,0UL};
                l_63 = l_62;
                l_43 |= (((safe_div_func_int16_t_s_s(g_45[0][1][0], (safe_mul_func_uint16_t_u_u(p_14, (l_69 &= (l_48.f3 | ((((g_68 , g_68.f2) ^ g_68.f3) , l_59) | p_15))))))) <= 0x9A73949AL) , 0xC78E8392L);
                g_45[0][1][0] = (-4L);
            }
        }
    }
    else
    { 
        const uint16_t l_82[4] = {0xEDB2L,0xEDB2L,0xEDB2L,0xEDB2L};
        int32_t l_83 = (-9L);
        int i;
        l_83 = (g_68.f0 &= (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u((0UL <= (l_27.f0 == (safe_add_func_int8_t_s_s((g_20 = 0x12L), 0xB7L)))), g_45[0][1][1])), l_82[1])), l_82[0])) <= 0x41L), 65535UL)), 14)));
    }
    return l_84;
}



static int32_t  func_24(const union U7  p_25)
{ 
    uint64_t l_30 = 1UL;
    int32_t l_31 = 0xB36FE085L;
    int32_t l_32[1][2];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_32[i][j] = 0x85AA1EDEL;
    }
    l_30 = (p_25.f0 <= (safe_div_func_uint8_t_u_u(254UL, g_2)));
    l_32[0][0] = (l_31 = l_30);
    g_33 |= g_6;
    return l_31;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_45[i][j][k], "g_45[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_68.f1, "g_68.f1", print_hash_value);
    transparent_crc(g_68.f2, "g_68.f2", print_hash_value);
    transparent_crc(g_68.f3, "g_68.f3", print_hash_value);
    transparent_crc(g_68.f4, "g_68.f4", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_112.f0, "g_112.f0", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_112.f2, "g_112.f2", print_hash_value);
    transparent_crc(g_112.f3, "g_112.f3", print_hash_value);
    transparent_crc(g_112.f4, "g_112.f4", print_hash_value);
    transparent_crc(g_125.f0, "g_125.f0", print_hash_value);
    transparent_crc(g_125.f1, "g_125.f1", print_hash_value);
    transparent_crc(g_125.f2, "g_125.f2", print_hash_value);
    transparent_crc(g_125.f3, "g_125.f3", print_hash_value);
    transparent_crc(g_125.f4, "g_125.f4", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_151.f0, "g_151.f0", print_hash_value);
    transparent_crc(g_151.f1, "g_151.f1", print_hash_value);
    transparent_crc(g_151.f2, "g_151.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_157[i][j].f0, "g_157[i][j].f0", print_hash_value);
            transparent_crc(g_157[i][j].f2, "g_157[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_165.f1, "g_165.f1", print_hash_value);
    transparent_crc(g_165.f2, "g_165.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
