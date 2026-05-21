// SPDX-License-Identifier: MIT
// cctest_csmith_116bf27e.c --- cctest case csmith_116bf27e (csmith seed 292287102)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x94925dc5 */

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

// Options:   -s 292287102 -o /tmp/csmith_gen_qf2frjbw/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint64_t  f0;
   uint64_t  f1;
   int64_t  f2;
   int16_t  f3;
   const uint8_t  f4;
   int32_t  f5;
   const uint8_t  f6;
   uint8_t  f7;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int8_t  f0;
   const uint32_t  f1;
   uint16_t  f2;
   const uint16_t  f3;
   const uint16_t  f4;
   const uint8_t  f5;
   uint8_t  f6;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   int32_t  f1;
   uint8_t  f2;
   const uint32_t  f3;
};
#pragma pack(pop)

union U3 {
   int32_t  f0;
};

union U4 {
   uint32_t  f0;
   const uint8_t  f1;
   const int32_t  f2;
   struct S0  f3;
};

union U5 {
   int8_t * const  f0;
   struct S2  f1;
};

union U6 {
   uint8_t  f0;
   uint8_t  f1;
};

union U7 {
   struct S0  f0;
   int8_t * f1;
};


static int32_t g_3[2] = {0xC17C7747L,0xC17C7747L};
static int32_t g_17 = (-5L);
static int64_t g_19 = 0x8B01213072C02A30LL;
static uint8_t g_32 = 0x29L;
static uint32_t g_34[2][5] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,0xFC53D8B3L,4294967295UL,0xFC53D8B3L,4294967295UL}};
static int8_t g_53 = 1L;
static const uint32_t g_65[1][2] = {{0xA495B284L,0xA495B284L}};
static const uint32_t g_67 = 4294967290UL;
static const uint32_t *g_66 = &g_67;
static int64_t g_69 = (-7L);
static int64_t *g_68 = &g_69;
static uint8_t g_93 = 250UL;
static union U5 g_103[5][6] = {{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}};
static int16_t g_105 = 0x4532L;
static uint64_t g_107 = 18446744073709551607UL;
static int32_t g_117 = 0x1DBC6B2EL;
static struct S0 g_124 = {0x8128C20B361CED51LL,1UL,9L,0x4359L,0x5DL,1L,1UL,0x02L};
static int16_t g_125 = 0L;
static uint16_t g_129 = 65535UL;
static union U3 g_137 = {0x45E2451BL};
static int32_t g_140 = 1L;
static int16_t g_156 = 1L;
static struct S1 g_168 = {1L,0UL,0xBCEFL,0x97C8L,65535UL,1UL,251UL};
static int32_t g_175 = 0x5652690AL;
static int64_t g_188 = 0L;
static uint64_t g_195 = 0xCD7A26FF32468045LL;
static union U6 g_214 = {3UL};
static union U7 g_257 = {{1UL,5UL,0x7CB556FD85EE549ELL,0x4207L,0x87L,-1L,1UL,0xFCL}};
static union U7 *g_256[4][1] = {{&g_257},{&g_257},{&g_257},{&g_257}};
static union U7 g_260 = {{0x01798D4120DA18C3LL,18446744073709551615UL,0L,-1L,0xE8L,0x75D32345L,255UL,0xC1L}};
static union U6 *g_318 = (void*)0;
static union U6 **g_317 = &g_318;
static union U6 ***g_316 = &g_317;
static union U6 ****g_315 = &g_316;
static union U6 *****g_314[5][6][3] = {{{&g_315,&g_315,&g_315},{&g_315,&g_315,&g_315},{&g_315,&g_315,&g_315},{&g_315,&g_315,(void*)0},{&g_315,&g_315,&g_315},{&g_315,&g_315,&g_315}},{{&g_315,&g_315,(void*)0},{&g_315,(void*)0,&g_315},{&g_315,&g_315,&g_315},{&g_315,&g_315,(void*)0},{&g_315,(void*)0,&g_315},{&g_315,&g_315,&g_315}},{{&g_315,&g_315,&g_315},{&g_315,&g_315,&g_315},{&g_315,&g_315,&g_315},{&g_315,&g_315,&g_315},{&g_315,&g_315,(void*)0},{&g_315,&g_315,&g_315}},{{&g_315,&g_315,&g_315},{&g_315,&g_315,(void*)0},{&g_315,(void*)0,&g_315},{&g_315,&g_315,&g_315},{&g_315,&g_315,(void*)0},{&g_315,(void*)0,&g_315}},{{&g_315,&g_315,&g_315},{&g_315,&g_315,&g_315},{&g_315,&g_315,&g_315},{&g_315,&g_315,&g_315},{&g_315,&g_315,&g_315},{&g_315,&g_315,(void*)0}}};
static uint32_t g_328 = 0x2254FA02L;
static const int8_t *g_367 = &g_168.f0;
static uint32_t g_369 = 8UL;
static union U4 g_395 = {0x5F3FDA1CL};
static union U3 *g_428[5][3][3] = {{{&g_137,&g_137,&g_137},{(void*)0,&g_137,&g_137},{(void*)0,(void*)0,&g_137}},{{&g_137,&g_137,&g_137},{&g_137,&g_137,&g_137},{&g_137,&g_137,&g_137}},{{(void*)0,&g_137,&g_137},{(void*)0,(void*)0,&g_137},{&g_137,&g_137,&g_137}},{{&g_137,&g_137,&g_137},{&g_137,&g_137,&g_137},{(void*)0,&g_137,&g_137}},{{(void*)0,(void*)0,&g_137},{&g_137,&g_137,&g_137},{&g_137,&g_137,&g_137}}};
static int32_t g_446 = 1L;
static uint16_t g_452 = 1UL;
static int64_t g_456 = 0x852C722CBC8A12F2LL;
static uint16_t g_457[7] = {0xC80CL,0x74BFL,0xC80CL,0xC80CL,0x74BFL,0xC80CL,0xC80CL};
static const int32_t *g_491 = &g_140;
static const int32_t **g_490 = &g_491;
static uint8_t *g_526 = &g_124.f7;
static int64_t g_614 = (-1L);
static struct S1 g_619 = {0xC5L,3UL,0UL,0x7DD0L,1UL,0x2FL,5UL};
static struct S1 *g_618 = &g_619;
static int16_t g_658[7][6] = {{0L,0L,0x22A0L,0L,0L,0x22A0L},{0L,0L,0x22A0L,0L,0L,0x22A0L},{0L,0L,0x22A0L,0L,0L,0x22A0L},{0L,0L,0x22A0L,0L,0L,0x22A0L},{0L,0L,0x22A0L,0L,0L,0x22A0L},{0L,0L,0x22A0L,0L,0L,0x22A0L},{0L,0L,0x22A0L,0L,0L,0x22A0L}};
static int32_t g_663 = 0x8F5CCF9AL;
static int64_t g_664 = (-1L);
static int64_t g_667 = 0x0B9631EB8E845EC1LL;
static int32_t g_668 = (-7L);
static uint32_t g_669 = 6UL;
static struct S2 g_680[4] = {{0xE179EF8FL,-9L,249UL,0x0D9AFEF2L},{0xE179EF8FL,-9L,249UL,0x0D9AFEF2L},{0xE179EF8FL,-9L,249UL,0x0D9AFEF2L},{0xE179EF8FL,-9L,249UL,0x0D9AFEF2L}};
static union U6 ** const *g_717 = &g_317;
static int64_t g_732 = 0xB9F0CF28671C15C1LL;
static uint8_t g_733 = 0xD5L;
static uint64_t g_737 = 18446744073709551610UL;
static int64_t g_746 = 7L;
static union U5 *g_811 = (void*)0;
static union U5 **g_810 = &g_811;
static const union U7 g_820 = {{0x121FD2AF8CAA5D00LL,0xC3513390B2374C9DLL,9L,0x6390L,253UL,0xE5CBAC29L,0x1FL,0xD4L}};
static union U7 **g_847 = &g_256[0][0];
static union U7 ***g_846 = &g_847;
static uint64_t g_881 = 0x82526E636EA08C90LL;
static union U5 g_937 = {0};
static int32_t g_947[2][7][7] = {{{0xCF1B1540L,0L,0L,(-6L),0L,1L,1L},{(-1L),0x8150728EL,(-1L),0x1577383BL,0xE8A9C490L,0x1577383BL,(-1L)},{0x09E880D7L,(-6L),0xC84F6C87L,0x09BFEDFFL,(-6L),0xB6A3C53CL,1L},{0x9CDCB27AL,(-9L),(-1L),0x8150728EL,(-1L),(-9L),0x9CDCB27AL},{0L,0x09BFEDFFL,1L,(-1L),(-6L),1L,0L},{0xE8A9C490L,0L,0xA706D091L,0L,0xE8A9C490L,0x4FCF67CCL,(-5L)},{(-6L),(-1L),1L,0x09BFEDFFL,0L,0L,0x09BFEDFFL}},{{(-1L),0x8150728EL,(-1L),(-9L),0x9CDCB27AL,0x1577383BL,(-1L)},{(-6L),0x09BFEDFFL,0xC84F6C87L,(-6L),0x09E880D7L,2L,1L},{0xE8A9C490L,0x1577383BL,(-1L),0x8150728EL,(-1L),0x1577383BL,(-5L)},{0L,(-6L),0L,0L,(-6L),0L,1L},{0x9CDCB27AL,0L,0xAB067394L,0x8150728EL,0x9CDCB27AL,0x4FCF67CCL,0x9CDCB27AL},{0x09E880D7L,0L,1L,(-6L),(-1L),1L,0x09BFEDFFL},{(-1L),0L,(-1L),(-9L),0xE8A9C490L,(-9L),(-1L)}}};
static uint8_t g_948 = 5UL;
static uint16_t g_1087 = 65533UL;
static struct S1 **g_1151 = (void*)0;
static struct S1 ***g_1150 = &g_1151;
static struct S1 ***g_1152 = &g_1151;
static uint64_t *g_1158[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint64_t **g_1157[1] = {&g_1158[1]};
static uint64_t ***g_1156 = &g_1157[0];
static int32_t *g_1175 = &g_446;
static int8_t g_1207 = 0x27L;
static int8_t g_1208 = 1L;
static int8_t g_1209 = 0xEAL;
static uint16_t g_1210 = 0x92EFL;
static int32_t g_1281 = 0xE46D79ABL;
static int8_t g_1283 = (-10L);
static int16_t g_1285 = 0L;
static uint16_t g_1288 = 65532UL;
static int64_t **g_1307 = &g_68;
static int64_t ***g_1306 = &g_1307;
static uint32_t g_1342 = 2UL;
static int32_t *g_1345 = &g_140;
static int8_t g_1441 = 0L;
static int64_t g_1444 = 0x03DB81AE482533E3LL;
static uint8_t g_1446 = 255UL;
static uint8_t **g_1507[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint8_t ***g_1506[6] = {&g_1507[1],&g_1507[1],&g_1507[1],&g_1507[1],&g_1507[1],&g_1507[1]};
static const int8_t *g_1525 = (void*)0;
static int64_t g_1542 = 1L;
static int32_t g_1569 = 1L;
static int8_t g_1570 = 0xF3L;
static int8_t g_1571 = (-7L);
static uint16_t g_1572 = 0xDC36L;
static uint8_t *g_1587 = &g_214.f1;



static uint64_t  func_1(void);
static int32_t * func_7(int8_t * p_8, int8_t  p_9, uint32_t  p_10, uint32_t  p_11);
static int8_t * func_12(int64_t  p_13, int8_t * p_14, int32_t * p_15, const int8_t * p_16);
static int8_t * func_20(int8_t  p_21, int32_t  p_22, struct S2  p_23, uint64_t  p_24, struct S0  p_25);
static struct S2  func_39(int64_t  p_40, uint8_t * p_41, uint64_t  p_42, uint8_t * p_43, uint8_t * p_44);
static uint8_t  func_47(const struct S0  p_48, int64_t * p_49);
static struct S0  func_50(int8_t * p_51);
static struct S0  func_58(const uint32_t * p_59, int16_t  p_60, int32_t ** p_61, uint8_t * p_62);




static uint64_t  func_1(void)
{ 
    int32_t l_2[6][3] = {{0L,0L,0L},{(-1L),(-1L),(-1L)},{0L,0L,0L},{(-1L),(-1L),(-1L)},{0L,0L,0L},{(-1L),(-1L),(-1L)}};
    int8_t *l_52 = &g_53;
    struct S0 *l_1580 = (void*)0;
    union U7 l_1622 = {{2UL,0x7F674CB935767E81LL,-1L,0x6670L,0UL,-5L,2UL,255UL}};
    const uint16_t l_1623 = 65533UL;
    int i, j;
    for (g_3[0] = 0; (g_3[0] <= 2); g_3[0] += 1)
    { 
        uint8_t l_4 = 0x82L;
        int64_t *l_509 = &g_188;
        int32_t l_976 = 7L;
        struct S0 l_980 = {7UL,0xC462A32858A1A04ELL,0xA3C338ECF29B50C7LL,0x79CDL,5UL,6L,0x9BL,0UL};
        int32_t *l_1578[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1578[i] = &l_976;
        l_4--;
        for (l_4 = 0; (l_4 <= 2); l_4 += 1)
        { 
            int64_t *l_18 = &g_19;
            uint8_t *l_31 = &g_32;
            uint32_t *l_33[2][6][7] = {{{&g_34[1][3],&g_34[0][4],&g_34[1][3],&g_34[1][3],&g_34[1][0],&g_34[1][2],&g_34[1][4]},{&g_34[0][4],&g_34[1][4],(void*)0,&g_34[1][2],&g_34[1][2],(void*)0,&g_34[1][4]},{&g_34[1][2],&g_34[1][2],&g_34[1][2],&g_34[1][2],&g_34[1][4],&g_34[1][2],&g_34[0][0]},{&g_34[0][0],&g_34[1][3],&g_34[1][4],(void*)0,&g_34[0][0],&g_34[1][2],&g_34[1][2]},{&g_34[1][4],&g_34[1][3],&g_34[1][2],&g_34[1][2],&g_34[1][2],&g_34[1][0],&g_34[0][0]},{&g_34[1][2],&g_34[1][2],&g_34[0][0],&g_34[1][2],&g_34[1][2],&g_34[1][2],&g_34[0][0]}},{{&g_34[1][2],&g_34[1][2],&g_34[0][0],&g_34[1][3],&g_34[1][2],&g_34[1][4],&g_34[1][2]},{&g_34[1][4],&g_34[0][2],&g_34[1][2],&g_34[1][2],&g_34[0][0],&g_34[0][1],&g_34[0][4]},{&g_34[1][2],&g_34[1][2],&g_34[0][0],&g_34[1][2],&g_34[1][2],&g_34[0][4],&g_34[1][2]},{&g_34[1][2],&g_34[0][0],&g_34[0][0],&g_34[1][2],&g_34[1][2],&g_34[1][2],&g_34[1][2]},{&g_34[1][2],&g_34[0][0],&g_34[1][2],&g_34[1][2],&g_34[0][4],&g_34[1][2],&g_34[1][2]},{&g_34[0][0],&g_34[1][2],(void*)0,&g_34[0][4],&g_34[0][1],&g_34[1][2],&g_34[1][3]}}};
            uint16_t l_46 = 65532UL;
            int16_t *l_975[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_977 = (void*)0;
            int32_t *l_978 = &g_446;
            int32_t *l_979 = &g_175;
            int32_t **l_1577[5][6] = {{&l_977,&l_977,&l_977,&l_977,&l_977,&l_977},{&l_977,&l_977,&l_977,&l_977,&l_977,&l_977},{&l_977,&l_977,&l_977,&l_977,&l_977,&l_977},{&l_977,&l_977,&l_977,&l_977,&l_977,&l_977},{&l_977,&l_977,&l_977,&l_977,&l_977,&l_977}};
            struct S0 **l_1579 = (void*)0;
            struct S1 ****l_1596 = &g_1152;
            uint32_t l_1615 = 0x67E247D5L;
            uint8_t l_1635[2][5][2] = {{{8UL,0xDAL},{1UL,0xDAL},{8UL,1UL},{0x5DL,0x5DL},{0x5DL,1UL}},{{8UL,0xDAL},{1UL,0xDAL},{8UL,1UL},{0x5DL,0x5DL},{0x5DL,1UL}}};
            const union U6 l_1636 = {255UL};
            int32_t **l_1637 = &l_1578[1];
            uint64_t ****l_1639 = &g_1156;
            uint64_t *****l_1638 = &l_1639;
            uint64_t ****l_1641 = &g_1156;
            uint64_t *****l_1640 = &l_1641;
            int i, j, k;
        }
    }
    return l_1622.f0.f5;
}



static int32_t * func_7(int8_t * p_8, int8_t  p_9, uint32_t  p_10, uint32_t  p_11)
{ 
    int8_t l_1049 = 0L;
    int32_t *l_1050 = &g_668;
    uint64_t *l_1064 = &g_124.f0;
    uint64_t **l_1063 = &l_1064;
    int32_t l_1083 = 0xB38F3349L;
    int32_t l_1084 = 0L;
    int32_t l_1085[5];
    struct S1 l_1112 = {0xC2L,0x5EB009ABL,0xC17AL,0x6798L,0xCC89L,250UL,1UL};
    struct S0 l_1114 = {0x8F2C7E71DB43B24BLL,0x4B0FC26EFC2B138BLL,-9L,0xB494L,0UL,-1L,247UL,0x76L};
    uint32_t *l_1246 = (void*)0;
    uint32_t **l_1245 = &l_1246;
    const union U5 l_1291 = {0};
    int16_t l_1325 = (-1L);
    struct S0 *l_1337 = &l_1114;
    struct S0 **l_1336[6][4][2] = {{{(void*)0,&l_1337},{&l_1337,&l_1337},{(void*)0,&l_1337},{&l_1337,&l_1337}},{{(void*)0,&l_1337},{&l_1337,&l_1337},{(void*)0,&l_1337},{&l_1337,&l_1337}},{{(void*)0,&l_1337},{&l_1337,&l_1337},{(void*)0,&l_1337},{&l_1337,&l_1337}},{{(void*)0,&l_1337},{&l_1337,&l_1337},{(void*)0,&l_1337},{&l_1337,&l_1337}},{{(void*)0,&l_1337},{&l_1337,&l_1337},{(void*)0,&l_1337},{&l_1337,&l_1337}},{{(void*)0,&l_1337},{&l_1337,&l_1337},{(void*)0,&l_1337},{&l_1337,&l_1337}}};
    union U3 l_1413 = {-1L};
    union U4 l_1452 = {0x160B7406L};
    union U6 *l_1479 = &g_214;
    union U7 *l_1576 = &g_257;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1085[i] = 0xD8150A2AL;
    (*l_1050) ^= (((safe_rshift_func_uint8_t_u_s((--(*g_526)), 4)) | (safe_mul_func_int8_t_s_s(0L, l_1049))) ^ (-2L));
    if (((*l_1050) != p_11))
    { 
        uint64_t *l_1057 = &g_881;
        int32_t l_1060 = 1L;
        int16_t *l_1061 = &g_658[3][0];
        const uint64_t l_1062[5] = {0xC79F09377AD63C9CLL,0xC79F09377AD63C9CLL,0xC79F09377AD63C9CLL,0xC79F09377AD63C9CLL,0xC79F09377AD63C9CLL};
        int32_t l_1075 = 1L;
        int32_t l_1086 = (-3L);
        const struct S1 *l_1105[3][4][5] = {{{(void*)0,&g_619,(void*)0,&g_619,(void*)0},{&g_168,&g_619,&g_619,&g_619,&g_168},{(void*)0,&g_619,(void*)0,&g_619,(void*)0},{&g_168,&g_619,&g_619,&g_619,&g_168}},{{(void*)0,&g_619,(void*)0,&g_619,(void*)0},{&g_168,&g_619,&g_619,&g_619,&g_168},{(void*)0,&g_619,(void*)0,&g_619,(void*)0},{&g_168,&g_619,&g_619,&g_619,&g_168}},{{(void*)0,&g_619,(void*)0,&g_619,(void*)0},{&g_168,&g_619,&g_619,&g_619,&g_168},{(void*)0,&g_619,&g_619,&g_168,&g_619},{&g_619,(void*)0,&g_619,(void*)0,&g_619}}};
        const struct S1 **l_1104 = &l_1105[1][1][1];
        const struct S1 *** const l_1103 = &l_1104;
        union U5 *l_1194 = &g_937;
        int32_t l_1239 = 0x3E9A86B7L;
        union U6 ****l_1264 = &g_316;
        union U6 ****l_1265 = &g_316;
        int32_t l_1282 = 0x2C334874L;
        int32_t l_1284 = 0x90B63579L;
        int32_t l_1286 = (-1L);
        int32_t l_1287 = (-10L);
        int32_t l_1294 = 8L;
        union U3 l_1313 = {1L};
        struct S1 ****l_1316 = &g_1152;
        int64_t l_1349 = 1L;
        uint64_t ***l_1362[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        const uint16_t l_1367 = 0x67BFL;
        int i, j, k;
        if (((safe_lshift_func_uint16_t_u_u(((g_156 && 65532UL) | ((-1L) != ((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((((((*l_1057) = p_9) , (void*)0) == l_1057) ^ ((safe_div_func_uint64_t_u_u((((*l_1061) = ((0x714D28FCL | p_11) | l_1060)) >= p_10), p_10)) != p_11)), l_1062[4])), (*l_1050))) >= (*g_66)))), g_820.f0.f7)) >= g_34[1][2]))
        { 
            union U5 l_1073[4][7][4] = {{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}}};
            int32_t l_1074 = 0xE1889A1DL;
            const uint64_t *l_1094 = &g_737;
            const uint64_t **l_1093 = &l_1094;
            union U6 l_1101[7][3] = {{{0xD1L},{0xD1L},{0x35L}},{{246UL},{0x8FL},{0xA3L}},{{255UL},{0xD1L},{255UL}},{{255UL},{246UL},{0xD1L}},{{246UL},{255UL},{255UL}},{{0xD1L},{255UL},{0xA3L}},{{0x8FL},{246UL},{0x35L}}};
            uint32_t *l_1113 = (void*)0;
            struct S1 **l_1148 = (void*)0;
            struct S1 ***l_1147 = &l_1148;
            struct S1 ****l_1203[2][1][5];
            struct S1 *****l_1202[2][6] = {{&l_1203[1][0][0],&l_1203[1][0][0],&l_1203[1][0][0],&l_1203[1][0][0],&l_1203[1][0][0],&l_1203[1][0][0]},{&l_1203[1][0][0],&l_1203[1][0][0],&l_1203[1][0][0],&l_1203[1][0][0],&l_1203[1][0][0],&l_1203[1][0][0]}};
            uint32_t l_1227 = 0x127261BCL;
            uint32_t **l_1244 = &l_1113;
            union U7 l_1249 = {{1UL,0x25A76C2AB9DEA8EFLL,0x5DBF87DAB3499FF5LL,0x97D3L,0x9FL,0L,248UL,250UL}};
            int32_t l_1275 = 0x1B51779AL;
            int32_t l_1276[7][2][2] = {{{0x7EC1C4E7L,1L},{0x6AC6595EL,1L}},{{0x7EC1C4E7L,1L},{0x6AC6595EL,1L}},{{0x7EC1C4E7L,1L},{0x6AC6595EL,1L}},{{0x7EC1C4E7L,1L},{0x6AC6595EL,1L}},{{0x7EC1C4E7L,1L},{0x6AC6595EL,1L}},{{0x7EC1C4E7L,1L},{0x6AC6595EL,1L}},{{0x7EC1C4E7L,1L},{0x6AC6595EL,1L}}};
            union U3 **l_1305[7][1];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_1203[i][j][k] = &l_1147;
                }
            }
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1305[i][j] = &g_428[1][0][0];
            }
            g_663 |= (l_1075 ^= (((((void*)0 == l_1063) <= ((*g_68) = (*g_68))) && ((((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((l_1060 || (((*l_1050) = ((*l_1061) = 0xDEC1L)) ^ g_129)), (((safe_rshift_func_uint8_t_u_s(((l_1073[1][0][2] , p_10) != (*g_66)), 5)) ^ p_9) != 0L))), g_328)) == (*p_8)) ^ p_10) | l_1074)) & 0x0D7EL));
lbl_1308:
            for (g_125 = 5; (g_125 >= 0); g_125 -= 1)
            { 
                int32_t *l_1076 = (void*)0;
                int32_t *l_1077 = &g_140;
                int32_t *l_1078 = &l_1075;
                int32_t *l_1079 = &g_663;
                int32_t *l_1080 = &l_1074;
                int32_t *l_1081 = (void*)0;
                int32_t *l_1082[6][7][5] = {{{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_668,&g_668,&g_668,&g_668,&g_668},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int8_t *l_1090 = (void*)0;
                int8_t *l_1091 = &l_1049;
                uint64_t **l_1092 = &l_1057;
                const int32_t l_1102[4] = {0L,0L,0L,0L};
                const struct S1 ***l_1107 = &l_1104;
                const struct S1 ****l_1106 = &l_1107;
                int i, j, k;
                ++g_1087;
                (*g_490) = (((((*l_1091) |= (*p_8)) || (*g_367)) != ((((l_1092 != (l_1093 = l_1093)) | (safe_add_func_int64_t_s_s(((safe_mod_func_int32_t_s_s((((((l_1074 != (((safe_mod_func_int8_t_s_s((((l_1101[4][1] , &l_1060) == (*g_490)) ^ p_10), l_1102[1])) < (*g_491)) && l_1062[4])) != p_9) >= l_1101[4][1].f1) > 0xEDL) , l_1062[4]), 0x30AF0BDCL)) , p_9), 0x223EF9D31D54F8F9LL))) >= g_947[0][6][1]) == (*g_66))) , &l_1083);
                (*l_1106) = l_1103;
                for (g_395.f3.f5 = 5; (g_395.f3.f5 >= 0); g_395.f3.f5 -= 1)
                { 
                    (*g_490) = ((*l_1050) , &l_1085[4]);
                }
            }
            if ((safe_add_func_int16_t_s_s((((safe_add_func_uint64_t_u_u((p_11 & ((((g_395 , l_1112) , (((p_10 <= (l_1074 = l_1074)) == (l_1114 , 0L)) ^ p_9)) ^ p_9) < 0x09F06075L)), p_11)) || (-1L)) , 0L), p_11)))
            { 
                int32_t *l_1122 = (void*)0;
                uint32_t *l_1124[2];
                struct S1 ****l_1201 = &g_1150;
                struct S1 *****l_1200 = &l_1201;
                int i;
                for (i = 0; i < 2; i++)
                    l_1124[i] = &g_34[1][2];
                for (g_19 = 28; (g_19 <= (-26)); g_19--)
                { 
                    struct S1 *l_1121[3][4] = {{(void*)0,&l_1112,(void*)0,&l_1112},{(void*)0,&l_1112,(void*)0,&l_1112},{(void*)0,&l_1112,(void*)0,&l_1112}};
                    int i, j;
                    (*l_1050) |= ((safe_sub_func_int32_t_s_s(((*g_68) > ((&g_67 != (void*)0) , (safe_sub_func_uint32_t_u_u(((void*)0 != l_1121[2][2]), 0xBB7D1C2DL)))), (0xFEE0E8ACL <= 0UL))) | (*g_66));
                }
                l_1050 = l_1122;
                if ((0xFD4BEC89L == (g_34[0][4] = (+p_10))))
                { 
                    int8_t l_1137 = 1L;
                    int32_t l_1138 = (-1L);
                    struct S1 ****l_1149[1][4];
                    int32_t *l_1153 = (void*)0;
                    int32_t *l_1154 = &l_1060;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1149[i][j] = &l_1147;
                    }
                    l_1074 = ((g_260.f0.f1 > (safe_mod_func_int32_t_s_s(p_10, (((safe_add_func_uint16_t_u_u((+((-8L) > ((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(g_948, 6)), 0x58L)), (safe_unary_minus_func_uint8_t_u(l_1137)))) || 0x7B13E5C1L))), p_9)) == p_10) , 0xC262600AL)))) & l_1101[4][1].f0);
                    (*l_1154) = ((((*g_68) = (l_1138 = (-4L))) < ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((++(*g_526)) == (safe_rshift_func_uint8_t_u_s(((g_1150 = l_1147) == (g_1152 = &l_1148)), 5))), 9)), l_1086)) > l_1060)) || p_10);
                    return &g_3[0];
                }
                else
                { 
                    union U6 l_1161 = {248UL};
                    uint32_t *l_1162 = &g_680[2].f0;
                    uint32_t *l_1163[6][5] = {{&l_1073[1][0][2].f1.f0,&g_395.f0,&g_395.f0,&g_395.f0,&l_1073[1][0][2].f1.f0},{&l_1073[1][0][2].f1.f0,&g_395.f0,&g_395.f0,&g_395.f0,&l_1073[1][0][2].f1.f0},{&l_1073[1][0][2].f1.f0,&g_395.f0,&g_395.f0,&g_395.f0,&l_1073[1][0][2].f1.f0},{&l_1073[1][0][2].f1.f0,&g_395.f0,&g_395.f0,&g_395.f0,&l_1073[1][0][2].f1.f0},{&l_1073[1][0][2].f1.f0,&g_395.f0,&g_395.f0,&g_395.f0,&l_1073[1][0][2].f1.f0},{&l_1073[1][0][2].f1.f0,&g_395.f0,&g_395.f0,&g_395.f0,&l_1073[1][0][2].f1.f0}};
                    struct S1 *l_1164 = &l_1112;
                    int32_t *l_1180[5];
                    union U7 ****l_1183 = &g_846;
                    uint16_t *l_1192 = (void*)0;
                    uint16_t *l_1193 = &g_168.f2;
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1180[i] = &l_1083;
                    g_668 |= ((safe_unary_minus_func_int64_t_s(((*g_68) ^= (g_1156 == (void*)0)))) , (((safe_mul_func_uint16_t_u_u((l_1161 , ((l_1074 = ((*l_1162) = p_10)) , g_457[1])), ((void*)0 == l_1164))) == l_1161.f0) <= (*p_8)));
                    l_1084 = (((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((g_446 = ((*g_526) , ((safe_add_func_int8_t_s_s(0x12L, (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((g_1175 = l_1124[0]) != (l_1050 = &g_668)) & (safe_mul_func_uint8_t_u_u(((0xA5B75E13FDBFCB89LL != (safe_mul_func_int8_t_s_s((g_658[4][5] > p_9), (*p_8)))) < (*g_526)), l_1062[0]))), (*p_8))), 0x5796L)))) ^ g_214.f1))), p_11)), p_11)) > l_1060) & p_11);
                    (*l_1050) = (safe_mul_func_int16_t_s_s(((((*l_1193) = (((&g_847 == ((*l_1183) = &g_847)) > (((p_11 ^ (safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((-8L), ((-1L) | ((*g_491) >= (*g_66))))), g_124.f3)), p_10))) , 0x2054E2FEL) || p_9)) <= p_10)) || 1UL) || p_11), 3L));
                    (*g_490) = &l_1060;
                    (*g_810) = l_1194;
                }
                if ((safe_add_func_int8_t_s_s(0x9DL, 0xD0L)))
                { 
                    uint32_t l_1197 = 18446744073709551611UL;
                    l_1197++;
                    (*g_1175) &= 0x6AFBD6A9L;
                    (*g_1175) = p_11;
                    (*g_1175) = 0xB8F74DD9L;
                }
                else
                { 
                    (*g_1175) ^= 0x0306AFF2L;
                    (*g_1175) = 0x245F8D9CL;
                    l_1202[1][1] = l_1200;
                }
            }
            else
            { 
                int32_t *l_1204 = &g_663;
                int32_t *l_1205 = &g_668;
                int32_t *l_1206[3][2][5] = {{{(void*)0,&g_140,(void*)0,&g_140,(void*)0},{&g_668,&g_668,(void*)0,(void*)0,&g_668}},{{&g_446,&g_140,&g_446,&g_140,&g_446},{&g_668,(void*)0,(void*)0,&g_668,&g_668}},{{(void*)0,&g_140,(void*)0,&g_140,(void*)0},{&g_668,&g_668,(void*)0,(void*)0,&g_668}}};
                uint16_t *l_1215 = &g_452;
                struct S2 l_1224 = {0xA18205CEL,0x68F8012EL,0x85L,0x757DB0C9L};
                uint32_t l_1228 = 0x40BF4996L;
                int i, j, k;
                g_1210--;
                if ((safe_lshift_func_int8_t_s_s(((++(*l_1215)) | (safe_mod_func_uint32_t_u_u(((((safe_mod_func_uint64_t_u_u(18446744073709551612UL, 0x83468F8F65012854LL)) != (((safe_div_func_uint32_t_u_u((l_1224 , (p_10 , ((g_395 , ((safe_mod_func_uint32_t_u_u(((p_9 & ((((-1L) >= l_1227) , l_1228) == 0x02L)) < l_1062[4]), p_10)) >= p_9)) == 0UL))), (**g_490))) <= (*l_1205)) >= l_1101[4][1].f1)) > (*g_68)) >= 0xB9C1732BDD531397LL), (*g_1175)))), 2)))
                { 
                    int32_t l_1229 = 0x58FF2A09L;
                    uint8_t *l_1237 = (void*)0;
                    uint8_t *l_1238 = &g_948;
                    uint8_t *l_1240 = (void*)0;
                    uint8_t *l_1241 = &l_1112.f6;
                    (*l_1204) |= (l_1229 < (safe_rshift_func_uint8_t_u_u(p_11, ((*l_1241) = ((safe_div_func_uint16_t_u_u((~((0x0AFEE93FL <= (*g_1175)) > ((l_1086 < (((safe_mul_func_uint8_t_u_u((((*l_1238) ^= ((*g_526) = (*l_1050))) < p_9), (-9L))) , p_11) >= 0x50E212465D9621E8LL)) <= 0x40948313L))), l_1239)) & 0UL)))));
                }
                else
                { 
                    uint32_t **l_1242 = &l_1113;
                    uint32_t ***l_1243[6][2][4] = {{{&l_1242,&l_1242,&l_1242,&l_1242},{&l_1242,&l_1242,&l_1242,&l_1242}},{{&l_1242,&l_1242,&l_1242,&l_1242},{&l_1242,&l_1242,&l_1242,&l_1242}},{{&l_1242,&l_1242,&l_1242,&l_1242},{&l_1242,&l_1242,&l_1242,&l_1242}},{{&l_1242,&l_1242,&l_1242,&l_1242},{&l_1242,&l_1242,&l_1242,&l_1242}},{{&l_1242,&l_1242,&l_1242,&l_1242},{&l_1242,&l_1242,&l_1242,&l_1242}},{{&l_1242,&l_1242,&l_1242,&l_1242},{&l_1242,&l_1242,&l_1242,&l_1242}}};
                    uint16_t *l_1266 = &g_457[2];
                    int32_t l_1269 = 0x02A14D07L;
                    int i, j, k;
                    (*g_490) = (*g_490);
                    l_1245 = (l_1244 = l_1242);
                    l_1074 ^= (((safe_rshift_func_uint8_t_u_s(((*l_1050) ^ (*p_8)), 5)) & (l_1249 , (safe_mod_func_int8_t_s_s((-10L), (safe_lshift_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(p_11, 4)), g_395.f0)) | ((*l_1266) = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((((*l_1215) = ((safe_sub_func_int8_t_s_s(((l_1264 = (void*)0) == l_1265), 1UL)) <= 0x35BF33B2L)) || g_1210), (*g_526))), p_11)))) ^ (*g_66)) ^ 7L), 0)))))) <= 0xEEL);
                    (*l_1205) &= ((*g_1175) = (~((&g_669 != ((*l_1244) = (*l_1245))) && (~l_1227))));
                    (*l_1050) |= l_1269;
                }
                for (l_1084 = 0; (l_1084 < (-24)); l_1084--)
                { 
                    uint16_t l_1272 = 0xC125L;
                    ++l_1272;
                    (*g_1175) = l_1272;
                    (*g_1175) ^= p_10;
                }
                if (((*l_1204) ^= (*l_1205)))
                { 
                    int32_t l_1277 = 0xE24EBA14L;
                    int32_t l_1278 = 0x6744FBD0L;
                    int32_t l_1279 = 0x66AF8709L;
                    int32_t l_1280[6][6] = {{(-1L),(-4L),4L,(-1L),4L,(-4L)},{0L,(-4L),(-7L),0L,4L,4L},{0xB0A25CF0L,(-4L),(-4L),0xB0A25CF0L,4L,(-7L)},{(-1L),(-4L),4L,(-1L),4L,(-4L)},{0L,(-4L),(-7L),0L,4L,4L},{0xB0A25CF0L,(-4L),(-4L),0xB0A25CF0L,4L,(-7L)}};
                    int i, j;
                    g_1288--;
                    l_1275 = ((l_1291 , (safe_mul_func_uint8_t_u_u((l_1294 = p_9), (safe_mod_func_int16_t_s_s(g_947[0][6][1], (p_10 || g_257.f0.f2)))))) ^ ((safe_div_func_uint32_t_u_u(((g_395 , (((*l_1050) |= ((((--(*g_526)) | ((!(~((g_103[2][3] , &g_428[1][0][0]) != l_1305[0][0]))) ^ 0x6B55L)) , (void*)0) != g_1306)) > p_10)) != 0UL), l_1287)) ^ 0x9FL));
                }
                else
                { 
                    if (l_1075)
                        goto lbl_1308;
                }
            }
        }
        else
        { 
            struct S1 ** const *l_1315 = (void*)0;
            struct S1 ** const **l_1314 = &l_1315;
            struct S1 *****l_1317 = &l_1316;
            struct S1 ****l_1319 = (void*)0;
            struct S1 *****l_1318 = &l_1319;
            int32_t l_1326 = 0x0BE79395L;
            const int16_t l_1327[6] = {0x7875L,1L,1L,0x7875L,1L,1L};
            union U7 l_1357[6][5][4] = {{{{{1UL,0x01DDC3C0D094FA14LL,0L,0xA910L,0xB2L,-10L,1UL,0x0BL}},{{1UL,1UL,1L,0L,255UL,0x44E49356L,255UL,0x0EL}},{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}},{{0x4DDCAE2910291036LL,1UL,-1L,1L,0x9DL,1L,248UL,253UL}}},{{{1UL,1UL,1L,0L,255UL,0x44E49356L,255UL,0x0EL}},{{0x991E6F13DD2983B1LL,18446744073709551609UL,0x4FB757B79E7033EDLL,0xDF89L,0x99L,0xBDCFE204L,0x5BL,8UL}},{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}},{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}}},{{{1UL,0x01DDC3C0D094FA14LL,0L,0xA910L,0xB2L,-10L,1UL,0x0BL}},{{1UL,1UL,1L,0L,255UL,0x44E49356L,255UL,0x0EL}},{{0x174B022507BA7A85LL,5UL,0xB767095FCC6FCECCLL,0xCD33L,0xE0L,-5L,0x50L,1UL}},{{0x7ECA3B1EFBBF9A7DLL,0x52DE85955B4211CELL,0x98A1A0DC7B97A390LL,0x6955L,0UL,0x00D9A25EL,0xE5L,0x1EL}}},{{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}},{{0xEA8D0E1F4090473CLL,0xBF8075CA9EE07091LL,0x4DAF501461EC0D78LL,-4L,0xA2L,0L,0x5BL,250UL}},{{0UL,0xE1A5FACE977F461ELL,0xC2AFD829A50B7352LL,0x8137L,0xFCL,0x7B6B017BL,0x43L,255UL}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}}},{{{0UL,0xE1A5FACE977F461ELL,0xC2AFD829A50B7352LL,0x8137L,0xFCL,0x7B6B017BL,0x43L,255UL}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}},{{0UL,0xE1A5FACE977F461ELL,0xC2AFD829A50B7352LL,0x8137L,0xFCL,0x7B6B017BL,0x43L,255UL}}}},{{{{1UL,1UL,1L,0L,255UL,0x44E49356L,255UL,0x0EL}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}},{{0x991E6F13DD2983B1LL,18446744073709551609UL,0x4FB757B79E7033EDLL,0xDF89L,0x99L,0xBDCFE204L,0x5BL,8UL}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}}},{{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}},{{0xEA8D0E1F4090473CLL,0xBF8075CA9EE07091LL,0x4DAF501461EC0D78LL,-4L,0xA2L,0L,0x5BL,250UL}},{{0x7BACAFBFB0038CCCLL,0x4A5AF159B4DEE4E2LL,0x28DF4E0B35CDFAD7LL,-8L,7UL,0x9B549534L,247UL,0x39L}},{{0x7ECA3B1EFBBF9A7DLL,0x52DE85955B4211CELL,0x98A1A0DC7B97A390LL,0x6955L,0UL,0x00D9A25EL,0xE5L,0x1EL}}},{{{4UL,18446744073709551614UL,-8L,0x8356L,1UL,0xC4350879L,255UL,1UL}},{{1UL,1UL,1L,0L,255UL,0x44E49356L,255UL,0x0EL}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}},{{0x7BACAFBFB0038CCCLL,0x4A5AF159B4DEE4E2LL,0x28DF4E0B35CDFAD7LL,-8L,7UL,0x9B549534L,247UL,0x39L}}},{{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}},{{0x850335FFF9C17DA4LL,18446744073709551615UL,0xC981F262D226AB55LL,-2L,252UL,0xA2025975L,255UL,0xAAL}},{{0x6AB9F798BD9CE0BALL,0x29D9111ADEB87206LL,-8L,8L,0xA3L,1L,1UL,0x19L}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}}},{{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}},{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}}}},{{{{4UL,18446744073709551614UL,-8L,0x8356L,1UL,0xC4350879L,255UL,1UL}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}},{{0x7BACAFBFB0038CCCLL,0x4A5AF159B4DEE4E2LL,0x28DF4E0B35CDFAD7LL,-8L,7UL,0x9B549534L,247UL,0x39L}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}}},{{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}},{{0x850335FFF9C17DA4LL,18446744073709551615UL,0xC981F262D226AB55LL,-2L,252UL,0xA2025975L,255UL,0xAAL}},{{0x991E6F13DD2983B1LL,18446744073709551609UL,0x4FB757B79E7033EDLL,0xDF89L,0x99L,0xBDCFE204L,0x5BL,8UL}},{{0x7ECA3B1EFBBF9A7DLL,0x52DE85955B4211CELL,0x98A1A0DC7B97A390LL,0x6955L,0UL,0x00D9A25EL,0xE5L,0x1EL}}},{{{1UL,1UL,1L,0L,255UL,0x44E49356L,255UL,0x0EL}},{{4UL,18446744073709551614UL,-8L,0x8356L,1UL,0xC4350879L,255UL,1UL}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}},{{0x7ECA3B1EFBBF9A7DLL,0x52DE85955B4211CELL,0x98A1A0DC7B97A390LL,0x6955L,0UL,0x00D9A25EL,0xE5L,0x1EL}}},{{{0UL,0xE1A5FACE977F461ELL,0xC2AFD829A50B7352LL,0x8137L,0xFCL,0x7B6B017BL,0x43L,255UL}},{{0x850335FFF9C17DA4LL,18446744073709551615UL,0xC981F262D226AB55LL,-2L,252UL,0xA2025975L,255UL,0xAAL}},{{0UL,0xE1A5FACE977F461ELL,0xC2AFD829A50B7352LL,0x8137L,0xFCL,0x7B6B017BL,0x43L,255UL}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}}},{{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}},{{0x174B022507BA7A85LL,5UL,0xB767095FCC6FCECCLL,0xCD33L,0xE0L,-5L,0x50L,1UL}},{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}}}},{{{{1UL,1UL,1L,0L,255UL,0x44E49356L,255UL,0x0EL}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}},{{0x7BACAFBFB0038CCCLL,0x4A5AF159B4DEE4E2LL,0x28DF4E0B35CDFAD7LL,-8L,7UL,0x9B549534L,247UL,0x39L}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}}},{{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}},{{0x850335FFF9C17DA4LL,18446744073709551615UL,0xC981F262D226AB55LL,-2L,252UL,0xA2025975L,255UL,0xAAL}},{{0x7BACAFBFB0038CCCLL,0x4A5AF159B4DEE4E2LL,0x28DF4E0B35CDFAD7LL,-8L,7UL,0x9B549534L,247UL,0x39L}},{{0x7BACAFBFB0038CCCLL,0x4A5AF159B4DEE4E2LL,0x28DF4E0B35CDFAD7LL,-8L,7UL,0x9B549534L,247UL,0x39L}}},{{{1UL,1UL,1L,0L,255UL,0x44E49356L,255UL,0x0EL}},{{1UL,1UL,1L,0L,255UL,0x44E49356L,255UL,0x0EL}},{{0x174B022507BA7A85LL,5UL,0xB767095FCC6FCECCLL,0xCD33L,0xE0L,-5L,0x50L,1UL}},{{0x7ECA3B1EFBBF9A7DLL,0x52DE85955B4211CELL,0x98A1A0DC7B97A390LL,0x6955L,0UL,0x00D9A25EL,0xE5L,0x1EL}}},{{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}},{{0xEA8D0E1F4090473CLL,0xBF8075CA9EE07091LL,0x4DAF501461EC0D78LL,-4L,0xA2L,0L,0x5BL,250UL}},{{0UL,0xE1A5FACE977F461ELL,0xC2AFD829A50B7352LL,0x8137L,0xFCL,0x7B6B017BL,0x43L,255UL}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}}},{{{0UL,0xE1A5FACE977F461ELL,0xC2AFD829A50B7352LL,0x8137L,0xFCL,0x7B6B017BL,0x43L,255UL}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}},{{0UL,0xE1A5FACE977F461ELL,0xC2AFD829A50B7352LL,0x8137L,0xFCL,0x7B6B017BL,0x43L,255UL}}}},{{{{1UL,1UL,1L,0L,255UL,0x44E49356L,255UL,0x0EL}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}},{{0x991E6F13DD2983B1LL,18446744073709551609UL,0x4FB757B79E7033EDLL,0xDF89L,0x99L,0xBDCFE204L,0x5BL,8UL}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}}},{{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}},{{0xEA8D0E1F4090473CLL,0xBF8075CA9EE07091LL,0x4DAF501461EC0D78LL,-4L,0xA2L,0L,0x5BL,250UL}},{{0x7BACAFBFB0038CCCLL,0x4A5AF159B4DEE4E2LL,0x28DF4E0B35CDFAD7LL,-8L,7UL,0x9B549534L,247UL,0x39L}},{{0x7ECA3B1EFBBF9A7DLL,0x52DE85955B4211CELL,0x98A1A0DC7B97A390LL,0x6955L,0UL,0x00D9A25EL,0xE5L,0x1EL}}},{{{4UL,18446744073709551614UL,-8L,0x8356L,1UL,0xC4350879L,255UL,1UL}},{{1UL,1UL,1L,0L,255UL,0x44E49356L,255UL,0x0EL}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}},{{0x7BACAFBFB0038CCCLL,0x4A5AF159B4DEE4E2LL,0x28DF4E0B35CDFAD7LL,-8L,7UL,0x9B549534L,247UL,0x39L}}},{{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}},{{0x850335FFF9C17DA4LL,18446744073709551615UL,0xC981F262D226AB55LL,-2L,252UL,0xA2025975L,255UL,0xAAL}},{{0x6AB9F798BD9CE0BALL,0x29D9111ADEB87206LL,-8L,8L,0xA3L,1L,1UL,0x19L}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}}},{{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}},{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}}}},{{{{4UL,18446744073709551614UL,-8L,0x8356L,1UL,0xC4350879L,255UL,1UL}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}},{{0x7BACAFBFB0038CCCLL,0x4A5AF159B4DEE4E2LL,0x28DF4E0B35CDFAD7LL,-8L,7UL,0x9B549534L,247UL,0x39L}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}}},{{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}},{{0x850335FFF9C17DA4LL,18446744073709551615UL,0xC981F262D226AB55LL,-2L,252UL,0xA2025975L,255UL,0xAAL}},{{0x991E6F13DD2983B1LL,18446744073709551609UL,0x4FB757B79E7033EDLL,0xDF89L,0x99L,0xBDCFE204L,0x5BL,8UL}},{{0x7ECA3B1EFBBF9A7DLL,0x52DE85955B4211CELL,0x98A1A0DC7B97A390LL,0x6955L,0UL,0x00D9A25EL,0xE5L,0x1EL}}},{{{1UL,1UL,1L,0L,255UL,0x44E49356L,255UL,0x0EL}},{{4UL,18446744073709551614UL,-8L,0x8356L,1UL,0xC4350879L,255UL,1UL}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}},{{0x7ECA3B1EFBBF9A7DLL,0x52DE85955B4211CELL,0x98A1A0DC7B97A390LL,0x6955L,0UL,0x00D9A25EL,0xE5L,0x1EL}}},{{{0UL,0xE1A5FACE977F461ELL,0xC2AFD829A50B7352LL,0x8137L,0xFCL,0x7B6B017BL,0x43L,255UL}},{{0x850335FFF9C17DA4LL,18446744073709551615UL,0xC981F262D226AB55LL,-2L,252UL,0xA2025975L,255UL,0xAAL}},{{0UL,0xE1A5FACE977F461ELL,0xC2AFD829A50B7352LL,0x8137L,0xFCL,0x7B6B017BL,0x43L,255UL}},{{1UL,0x15F1943018584865LL,0xD38BEBFC7D064028LL,0xD714L,252UL,0L,255UL,0x42L}}},{{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}},{{0xB06CAE2AF9778F2DLL,18446744073709551609UL,0xD55D658B1FC8728ALL,1L,0x73L,-1L,1UL,255UL}},{{0x174B022507BA7A85LL,5UL,0xB767095FCC6FCECCLL,0xCD33L,0xE0L,-5L,0x50L,1UL}},{{0xE7E83633E81E4298LL,18446744073709551615UL,7L,0L,0x6AL,0xE50F87D6L,247UL,0xF0L}}}}};
            uint8_t l_1364[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1364[i] = 0x30L;
            if ((((*g_68) = (safe_div_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((((((l_1313 , l_1314) != ((*l_1318) = ((*l_1317) = l_1316))) < (safe_lshift_func_int16_t_s_s(((*g_68) || ((safe_mod_func_uint64_t_u_u((((safe_unary_minus_func_int32_t_s((p_9 | (((*g_810) == (void*)0) == l_1325)))) | p_9) && (*l_1050)), 0x331A0570134CC79ALL)) != l_1239)), p_11))) ^ g_3[0]) | l_1326) , (*g_66)), 0xD88B35C9L)) , 1UL), g_260.f0.f3))) | l_1327[3]))
            { 
                union U7 l_1334[1][2][7] = {{{{{7UL,0xFD37E946DBB2430FLL,0xFA2EDB9E1A872AECLL,0xB68EL,0x9BL,-1L,248UL,6UL}},{{18446744073709551607UL,18446744073709551615UL,0x1ECFDD50AD428DC6LL,0x4488L,0xC8L,7L,0xF8L,252UL}},{{0UL,0xDF1F5F4A7A540E27LL,-8L,4L,0x17L,1L,0xB1L,248UL}},{{18446744073709551607UL,18446744073709551615UL,0x1ECFDD50AD428DC6LL,0x4488L,0xC8L,7L,0xF8L,252UL}},{{7UL,0xFD37E946DBB2430FLL,0xFA2EDB9E1A872AECLL,0xB68EL,0x9BL,-1L,248UL,6UL}},{{0UL,18446744073709551615UL,0x7A1ACDA2BBB428C4LL,0x965AL,0x0CL,0xF2317A62L,3UL,0x34L}},{{0UL,18446744073709551615UL,0x7A1ACDA2BBB428C4LL,0x965AL,0x0CL,0xF2317A62L,3UL,0x34L}}},{{{7UL,0xFD37E946DBB2430FLL,0xFA2EDB9E1A872AECLL,0xB68EL,0x9BL,-1L,248UL,6UL}},{{18446744073709551607UL,18446744073709551615UL,0x1ECFDD50AD428DC6LL,0x4488L,0xC8L,7L,0xF8L,252UL}},{{0UL,0xDF1F5F4A7A540E27LL,-8L,4L,0x17L,1L,0xB1L,248UL}},{{18446744073709551607UL,18446744073709551615UL,0x1ECFDD50AD428DC6LL,0x4488L,0xC8L,7L,0xF8L,252UL}},{{7UL,0xFD37E946DBB2430FLL,0xFA2EDB9E1A872AECLL,0xB68EL,0x9BL,-1L,248UL,6UL}},{{0UL,18446744073709551615UL,0x7A1ACDA2BBB428C4LL,0x965AL,0x0CL,0xF2317A62L,3UL,0x34L}},{{0UL,18446744073709551615UL,0x7A1ACDA2BBB428C4LL,0x965AL,0x0CL,0xF2317A62L,3UL,0x34L}}}}};
                int32_t **l_1346 = &g_1175;
                int i, j, k;
                (*g_1175) &= (0x4113L | (safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(p_11, (-1L))), (safe_mul_func_int8_t_s_s((l_1334[0][1][1] , l_1334[0][1][1].f0.f5), ((*g_526) = ((g_820.f0.f7 || (~((void*)0 != l_1336[2][1][0]))) , 1UL)))))));
                for (g_948 = (-9); (g_948 > 5); g_948 = safe_add_func_uint8_t_u_u(g_948, 6))
                { 
                    int32_t *l_1340 = &l_1075;
                    int32_t *l_1341[5][1] = {{&l_1287},{&l_1085[3]},{&l_1287},{&l_1085[3]},{&l_1287}};
                    int i, j;
                    ++g_1342;
                    (*g_1175) = 1L;
                    (*l_1340) = p_10;
                    if (l_1334[0][1][1].f0.f5)
                        break;
                }
                (*g_490) = ((*l_1346) = g_1345);
            }
            else
            { 
                uint8_t l_1352 = 0x8BL;
                uint64_t ****l_1363 = &g_1156;
                (*g_1175) |= (safe_div_func_uint32_t_u_u(((p_10 & p_10) | (l_1349 >= (safe_add_func_int8_t_s_s(l_1352, ((((safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((**g_490), (l_1357[5][4][0] , (safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((((*l_1363) = l_1362[0][0]) != l_1362[2][0]), l_1357[5][4][0].f0.f2)), l_1239))))), l_1357[5][4][0].f0.f7)) < (*l_1050)) & l_1364[0]) & l_1352))))), 0x75097744L));
                for (l_1114.f2 = 10; (l_1114.f2 < 25); ++l_1114.f2)
                { 
                    if (p_11)
                        break;
                    if (l_1367)
                        break;
                }
                return &g_446;
            }
        }
    }
    else
    { 
        const struct S1 l_1374 = {0x93L,0xC7ED3BDBL,0xE354L,0x1150L,4UL,9UL,255UL};
        uint64_t l_1379 = 18446744073709551608UL;
        union U6 l_1388 = {0x43L};
        union U7 * const *l_1427 = &g_256[3][0];
        int32_t l_1431 = 0L;
        int32_t l_1436 = 0x6C97BA94L;
        int32_t l_1438 = (-4L);
        int32_t l_1439 = 0xBBF5F4E8L;
        int32_t l_1443 = (-1L);
        int32_t l_1445 = 1L;
        int32_t *l_1461 = &l_1085[3];
        struct S2 l_1492 = {18446744073709551615UL,0x4360A5CEL,249UL,18446744073709551611UL};
        int32_t l_1514 = 0x289A8F46L;
        struct S1 **l_1563 = &g_618;
        for (g_668 = 0; (g_668 != (-18)); g_668 = safe_sub_func_uint32_t_u_u(g_668, 9))
        { 
            uint16_t l_1386 = 65526UL;
            struct S1 * const *l_1398 = &g_618;
            struct S2 l_1424 = {18446744073709551610UL,-1L,9UL,0UL};
            int32_t l_1432 = (-1L);
            int32_t l_1434[4];
            union U7 l_1502 = {{0x25697230179E265ALL,18446744073709551615UL,0xDABE3E39DEEB21ACLL,-1L,1UL,0L,0UL,255UL}};
            uint32_t l_1505 = 0xBAE98243L;
            const int8_t *l_1526 = &g_1209;
            uint64_t l_1543 = 0xA69CCC25C7E638D3LL;
            int i;
            for (i = 0; i < 4; i++)
                l_1434[i] = 0L;
            for (p_10 = 0; (p_10 > 28); p_10 = safe_add_func_uint16_t_u_u(p_10, 4))
            { 
                uint16_t l_1385 = 0xEEC9L;
                union U6 l_1387 = {255UL};
                union U3 l_1411 = {0x20398283L};
                int64_t *l_1426 = &l_1114.f2;
                int32_t l_1433 = 0x3B537E72L;
                int32_t l_1435 = (-5L);
                int32_t l_1437 = 0x3FA949A6L;
                int32_t l_1440 = (-1L);
                int32_t l_1442 = 0xC7612ED5L;
                (*g_1345) &= (((safe_sub_func_uint16_t_u_u(((l_1374 , ((++(*g_526)) == (safe_rshift_func_uint8_t_u_u(l_1379, (safe_rshift_func_int8_t_s_u(1L, (~(*l_1050)))))))) , (18446744073709551615UL > ((-2L) || ((safe_add_func_int16_t_s_s((-4L), g_53)) && l_1385)))), (*l_1050))) ^ l_1386) >= 0x1CF10B6AL);
                (*g_1175) |= (*g_1345);
                (*g_1175) |= ((l_1388 = l_1387) , 1L);
                for (g_1283 = 0; (g_1283 == (-22)); g_1283 = safe_sub_func_uint32_t_u_u(g_1283, 1))
                { 
                    (*g_1345) = (safe_div_func_uint8_t_u_u(l_1379, (-2L)));
                }
                for (g_124.f3 = 0; (g_124.f3 <= 1); g_124.f3 += 1)
                { 
                    const struct S0 l_1425 = {18446744073709551609UL,5UL,-1L,0L,0x64L,0x2FBA37A2L,0xF3L,0x73L};
                    int32_t *l_1428 = &g_140;
                    int32_t *l_1429 = &l_1085[4];
                    int32_t *l_1430[3][5][4] = {{{(void*)0,&l_1085[(g_124.f3 + 3)],&l_1085[4],&l_1085[4]},{&l_1085[4],&l_1085[(g_124.f3 + 3)],(void*)0,(void*)0},{&l_1085[(g_124.f3 + 3)],&l_1084,&l_1085[(g_124.f3 + 3)],(void*)0},{&l_1085[4],(void*)0,&l_1085[(g_124.f3 + 2)],(void*)0},{&l_1085[4],&l_1085[4],(void*)0,(void*)0}},{{(void*)0,&g_140,(void*)0,&g_3[1]},{&l_1085[4],&l_1085[(g_124.f3 + 2)],&l_1085[(g_124.f3 + 2)],&l_1085[4]},{&l_1085[4],(void*)0,&l_1085[(g_124.f3 + 3)],&g_3[0]},{&l_1085[(g_124.f3 + 3)],&g_3[0],(void*)0,&g_140},{&l_1085[4],&g_175,&l_1085[4],&g_140}},{{(void*)0,&g_3[0],&l_1085[4],&g_3[0]},{&l_1085[(g_124.f3 + 3)],(void*)0,&l_1084,&l_1085[4]},{(void*)0,&l_1085[(g_124.f3 + 2)],(void*)0,&g_3[1]},{&g_175,&g_140,&g_3[1],(void*)0},{&g_175,&l_1085[4],(void*)0,(void*)0}}};
                    int i, j, k;
                    (*g_1345) |= ((-1L) && (((safe_rshift_func_uint8_t_u_s(((~(safe_mul_func_int8_t_s_s((l_1398 != ((*g_1152) = (*g_1152))), l_1085[(g_124.f3 + 2)]))) & ((safe_mul_func_uint16_t_u_u((!(safe_rshift_func_int8_t_s_s(l_1085[(g_124.f3 + 3)], (((safe_div_func_uint8_t_u_u((g_446 >= ((safe_sub_func_uint8_t_u_u(((-4L) <= 8UL), (*l_1050))) != l_1386)), 0x96L)) & 0xD4A0L) , l_1374.f4)))), p_11)) <= l_1388.f0)), 2)) != l_1387.f0) != (-5L)));
                    (*g_1345) = ((safe_unary_minus_func_uint16_t_u((l_1411 , g_619.f6))) < ((+(*l_1050)) , (l_1413 , (safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((0x6076109C644477FFLL || ((((~((((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int16_t_s_u((((*l_1426) = (((*g_1307) = (void*)0) != ((l_1424 , l_1425) , l_1426))) < (*l_1050)), g_1283)) | p_9))) == 65535UL) , (-1L)) || 4L)) , 0x46E57D9A89056513LL) ^ l_1385) <= l_1379)), (*l_1050))), (*p_8))), 0x3CF35C97L)))));
                    (*g_1175) ^= ((void*)0 == l_1427);
                    (*g_1345) = (-7L);
                    g_1446--;
                }
            }
            if ((safe_sub_func_uint32_t_u_u((l_1374.f6 > (+(l_1452 , (*l_1050)))), (((5UL > ((g_619.f5 != (safe_add_func_int32_t_s_s(((g_395 , p_9) | (*g_66)), 0xD7C199B6L))) < 1L)) && l_1424.f0) != 0xFCL))))
            { 
                int32_t *l_1455 = &g_1281;
                return l_1455;
            }
            else
            { 
                union U7 ****l_1458[1][5][1];
                int32_t l_1462 = (-5L);
                int32_t *l_1463 = &l_1436;
                int32_t *l_1464 = &l_1438;
                int32_t *l_1465[6][2][7] = {{{&l_1462,&l_1438,&l_1432,&g_1281,&l_1431,&g_3[0],&l_1438},{&g_663,&l_1443,&l_1085[0],(void*)0,&l_1431,(void*)0,&l_1085[4]}},{{(void*)0,&l_1434[2],&l_1085[0],&g_1281,&g_3[0],(void*)0,(void*)0},{(void*)0,&l_1443,&l_1432,&l_1085[4],(void*)0,(void*)0,&l_1085[4]}},{{&g_663,&l_1438,&g_663,&l_1085[4],&g_3[0],(void*)0,&l_1438},{&l_1085[0],&l_1438,&l_1432,&g_1281,&l_1431,&g_3[0],&l_1438}},{{&g_663,&l_1443,&l_1085[0],(void*)0,&l_1431,(void*)0,&l_1085[4]},{(void*)0,&l_1434[2],&l_1085[0],&g_1281,&g_3[0],(void*)0,(void*)0}},{{(void*)0,&l_1443,&l_1432,&l_1085[4],(void*)0,(void*)0,&l_1085[4]},{&g_663,&l_1438,&g_663,&l_1085[4],&g_3[0],(void*)0,&l_1438}},{{&l_1085[0],&l_1438,&l_1432,&g_1281,&l_1431,&g_3[0],&l_1438},{&g_663,&l_1443,&l_1085[0],(void*)0,&l_1431,(void*)0,&l_1085[4]}}};
                int8_t l_1466 = 6L;
                uint64_t l_1467 = 0UL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1458[i][j][k] = &g_846;
                    }
                }
                for (l_1432 = 3; (l_1432 >= 0); l_1432 -= 1)
                { 
                    int i;
                    l_1458[0][2][0] = ((g_457[l_1432]--) , &g_846);
                    (*g_1345) &= (((***g_846) , (safe_lshift_func_uint16_t_u_s(l_1434[l_1432], 10))) ^ (((*g_526) >= (*p_8)) || (*g_526)));
                    return &g_175;
                }
                l_1467--;
                if ((safe_lshift_func_uint8_t_u_s(0x4DL, (safe_rshift_func_uint16_t_u_u((((*g_66) > ((void*)0 != &g_1150)) || (((safe_mul_func_int8_t_s_s(0x9CL, ((&l_1246 != ((**l_1427) , (void*)0)) || (*l_1461)))) && (*g_526)) < 1L)), l_1424.f1)))))
                { 
                    uint32_t l_1476 = 0x51018B05L;
                    if ((*g_1345))
                        break;
                    l_1476--;
                    (**g_316) = l_1479;
                }
                else
                { 
                    (*l_1464) = 5L;
                    (*g_490) = &l_1462;
                }
            }
            for (l_1452.f3.f3 = 0; (l_1452.f3.f3 < (-24)); l_1452.f3.f3 = safe_sub_func_int16_t_s_s(l_1452.f3.f3, 9))
            { 
                int32_t *l_1493 = (void*)0;
                struct S1 l_1501 = {1L,5UL,5UL,0xD426L,0x656CL,0xD1L,0x9DL};
                int32_t l_1537 = (-4L);
                int32_t l_1540 = 1L;
                int32_t l_1541[4][4][1] = {{{0L},{3L},{3L},{0L}},{{3L},{3L},{0L},{3L}},{{3L},{0L},{3L},{3L}},{{0L},{3L},{3L},{0L}}};
                int64_t **l_1575 = (void*)0;
                int i, j, k;
            }
            for (g_124.f3 = 0; (g_124.f3 <= 4); g_124.f3 += 1)
            { 
                int i;
                l_1085[g_124.f3] = (*l_1050);
            }
        }
    }
    l_1576 = l_1576;
    return &g_175;
}



static int8_t * func_12(int64_t  p_13, int8_t * p_14, int32_t * p_15, const int8_t * p_16)
{ 
    int64_t l_1004 = (-10L);
    uint16_t *l_1008 = &g_452;
    union U5 **l_1013 = &g_811;
    union U5 ***l_1014 = &l_1013;
    struct S2 l_1015 = {0x664E74B3L,1L,248UL,4UL};
    union U5 **l_1016 = (void*)0;
    uint32_t *l_1021 = (void*)0;
    uint32_t *l_1022 = &g_34[1][0];
    struct S0 *l_1024 = &g_260.f0;
    struct S0 **l_1023 = &l_1024;
    int32_t l_1037[6][1][5] = {{{(-10L),0x8A79C3D5L,(-1L),1L,0x435490E4L}},{{0x7E96037BL,0xA838C3AFL,0xA838C3AFL,0x7E96037BL,1L}},{{(-10L),0x453D0358L,4L,0xAD80BF6AL,1L}},{{0xA838C3AFL,(-10L),0x435490E4L,0xC0858B78L,0x435490E4L}},{{0xC0858B78L,0xC0858B78L,1L,0xAD80BF6AL,4L}},{{0xD4D73583L,0x6CC86D3BL,1L,0x7E96037BL,0xA838C3AFL}}};
    uint32_t l_1038[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1038[i] = 0x4193D2D7L;
    (*l_1023) = ((l_1004 && (((!((void*)0 != p_16)) == ((*l_1022) = (safe_mul_func_uint16_t_u_u(((*l_1008)++), (((safe_mod_func_uint16_t_u_u((((*l_1014) = l_1013) == (l_1015 , l_1016)), (safe_sub_func_uint16_t_u_u((g_457[2] = (safe_add_func_int32_t_s_s((*p_15), 0xB230D91FL))), g_395.f2)))) , l_1015.f3) , l_1015.f1))))) || 5UL)) , (void*)0);
    for (g_214.f1 = (-20); (g_214.f1 < 15); g_214.f1 = safe_add_func_uint8_t_u_u(g_214.f1, 4))
    { 
        int8_t l_1027 = (-6L);
        int32_t *l_1028 = &g_668;
        int32_t *l_1029 = &g_140;
        int32_t *l_1030 = &g_140;
        int32_t *l_1031 = &g_446;
        int32_t *l_1032 = &g_140;
        int32_t *l_1033 = &g_668;
        int32_t *l_1034 = &g_446;
        int32_t *l_1035 = &g_140;
        int32_t *l_1036[1][7] = {{&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175}};
        int i, j;
        if (l_1027)
            break;
        p_15 = p_15;
        l_1038[2]--;
    }
    return &g_53;
}



static int8_t * func_20(int8_t  p_21, int32_t  p_22, struct S2  p_23, uint64_t  p_24, struct S0  p_25)
{ 
    int32_t l_983 = 0x27EBB75AL;
    union U5 l_984 = {0};
    union U6 l_989[6][2][2] = {{{{0UL},{251UL}},{{0UL},{0UL}}},{{{251UL},{0UL}},{{0UL},{251UL}}},{{{0UL},{0UL}},{{251UL},{0UL}}},{{{0UL},{251UL}},{{0UL},{0UL}}},{{{251UL},{0UL}},{{0UL},{251UL}}},{{{0UL},{0UL}},{{251UL},{0UL}}}};
    struct S1 l_992[2][7] = {{{0x37L,8UL,0x4365L,0xB881L,0UL,0xA8L,255UL},{-6L,0x97F0A4FBL,0UL,0xCF86L,0x5489L,0xA6L,255UL},{-6L,0x97F0A4FBL,0UL,0xCF86L,0x5489L,0xA6L,255UL},{0x37L,8UL,0x4365L,0xB881L,0UL,0xA8L,255UL},{-6L,0x97F0A4FBL,0UL,0xCF86L,0x5489L,0xA6L,255UL},{-6L,0x97F0A4FBL,0UL,0xCF86L,0x5489L,0xA6L,255UL},{0x37L,8UL,0x4365L,0xB881L,0UL,0xA8L,255UL}},{{-6L,0x97F0A4FBL,0UL,0xCF86L,0x5489L,0xA6L,255UL},{0x37L,8UL,0x4365L,0xB881L,0UL,0xA8L,255UL},{-6L,0x97F0A4FBL,0UL,0xCF86L,0x5489L,0xA6L,255UL},{-6L,0x97F0A4FBL,0UL,0xCF86L,0x5489L,0xA6L,255UL},{0x37L,8UL,0x4365L,0xB881L,0UL,0xA8L,255UL},{-6L,0x97F0A4FBL,0UL,0xCF86L,0x5489L,0xA6L,255UL},{-6L,0x97F0A4FBL,0UL,0xCF86L,0x5489L,0xA6L,255UL}}};
    union U6 ***l_993 = &g_317;
    int32_t l_996 = 0xDF4DA98AL;
    int8_t *l_997 = &g_53;
    uint32_t l_998 = 0xD3180618L;
    int32_t *l_999 = (void*)0;
    int32_t l_1000 = (-1L);
    int i, j, k;
    l_1000 = (safe_rshift_func_int8_t_s_s((l_983 , (l_984 , (safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((l_989[3][0][1] , ((*g_68) &= (safe_div_func_uint64_t_u_u((((*l_997) = (l_989[3][0][1] , (l_996 = (l_983 = ((((l_992[0][4] , (l_993 == ((safe_mod_func_int16_t_s_s((0xF0L != (*g_526)), (-5L))) , (void*)0))) >= l_992[0][4].f1) > l_989[3][0][1].f0) <= l_983))))) > l_998), 1UL)))), l_992[0][4].f6)), p_23.f1)))), p_23.f3));
    for (g_124.f7 = (-27); (g_124.f7 == 23); g_124.f7 = safe_add_func_int8_t_s_s(g_124.f7, 9))
    { 
        int32_t *l_1003[7][2] = {{&l_1000,&l_1000},{&g_140,&l_1000},{&l_1000,&g_140},{&l_1000,&l_1000},{&g_140,&l_1000},{&l_1000,&g_140},{&l_1000,&l_1000}};
        int i, j;
        for (g_195 = 0; (g_195 <= 0); g_195 += 1)
        { 
            return l_997;
        }
        p_22 = p_23.f3;
    }
    return l_997;
}



static struct S2  func_39(int64_t  p_40, uint8_t * p_41, uint64_t  p_42, uint8_t * p_43, uint8_t * p_44)
{ 
    int32_t l_529 = 0x5891ECEFL;
    union U5 *l_534 = &g_103[4][1];
    union U5 **l_533[6][2][2];
    int32_t *l_535 = &g_140;
    int32_t *l_536 = &g_446;
    int16_t l_564 = 0xA29EL;
    uint64_t l_565 = 0xE5F415CF07E083D2LL;
    uint8_t l_566[2];
    int32_t l_621 = 0x2171A5F1L;
    uint32_t l_623 = 1UL;
    uint16_t *l_644 = &g_457[5];
    int32_t l_657 = 0xFBD53657L;
    int32_t l_666 = 0x7B9770A4L;
    union U7 **l_692 = (void*)0;
    union U6 l_710 = {0x6AL};
    union U3 *l_774 = &g_137;
    uint8_t l_776 = 0x76L;
    uint64_t *l_789 = (void*)0;
    uint64_t **l_788 = &l_789;
    uint32_t l_855 = 18446744073709551612UL;
    int32_t l_880 = 0x8B0B534EL;
    struct S2 l_974[6][2] = {{{1UL,-1L,7UL,0xB5A8B843L},{1UL,-1L,7UL,0xB5A8B843L}},{{1UL,-1L,7UL,0xB5A8B843L},{1UL,-1L,7UL,0xB5A8B843L}},{{1UL,-1L,7UL,0xB5A8B843L},{1UL,-1L,7UL,0xB5A8B843L}},{{1UL,-1L,7UL,0xB5A8B843L},{1UL,-1L,7UL,0xB5A8B843L}},{{1UL,-1L,7UL,0xB5A8B843L},{1UL,-1L,7UL,0xB5A8B843L}},{{1UL,-1L,7UL,0xB5A8B843L},{1UL,-1L,7UL,0xB5A8B843L}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_533[i][j][k] = &l_534;
        }
    }
    for (i = 0; i < 2; i++)
        l_566[i] = 0x03L;
lbl_620:
    (*l_536) = (g_175 &= (safe_add_func_int64_t_s_s(3L, ((l_529 != (safe_add_func_int64_t_s_s(((*p_43) & ((safe_unary_minus_func_uint64_t_u((l_529 >= (l_533[1][0][0] != &l_534)))) == ((*l_535) |= (0x09E457A0L < p_42)))), (-1L)))) == 0xA4CCL))));
    for (g_124.f2 = 22; (g_124.f2 <= (-30)); --g_124.f2)
    { 
        uint32_t l_563[7];
        struct S2 l_581 = {1UL,1L,0x7EL,0xFC53D658L};
        uint32_t l_616 = 18446744073709551615UL;
        int32_t *l_629 = &g_3[0];
        int32_t l_630 = 1L;
        union U6 l_639 = {0x71L};
        int32_t l_659 = 1L;
        int32_t l_660 = 0x12BDF9B4L;
        int32_t l_661 = 0x13D8B80EL;
        uint8_t l_674 = 0x49L;
        struct S1 l_678 = {0L,0xF8AD1B15L,0x293CL,0UL,0x5058L,4UL,252UL};
        union U6 **l_713 = &g_318;
        union U6 ** const *l_715 = &g_317;
        int i;
        for (i = 0; i < 7; i++)
            l_563[i] = 18446744073709551615UL;
        for (g_117 = 0; (g_117 >= 25); g_117 = safe_add_func_uint16_t_u_u(g_117, 4))
        { 
            union U7 l_546[3][2][5] = {{{{{0x7B4CBE45F899A36CLL,18446744073709551606UL,0xB977AEBA9AD86963LL,4L,0xA1L,-8L,255UL,248UL}},{{1UL,0x4ED70ABE7DC28FABLL,0x3B0B475680E21225LL,-1L,0xF9L,0xBDF66824L,0x34L,252UL}},{{0UL,0x478C9F5BE769D06ELL,-1L,-10L,247UL,9L,0x40L,1UL}},{{1UL,0x4ED70ABE7DC28FABLL,0x3B0B475680E21225LL,-1L,0xF9L,0xBDF66824L,0x34L,252UL}},{{0x7B4CBE45F899A36CLL,18446744073709551606UL,0xB977AEBA9AD86963LL,4L,0xA1L,-8L,255UL,248UL}}},{{{0xC8A31D291BDBE346LL,3UL,-5L,0x685DL,0x9FL,7L,0x03L,0x44L}},{{1UL,1UL,1L,0L,0x23L,-1L,0x57L,8UL}},{{5UL,0x89FE4952E4AD3AE1LL,0xF6FE707714C3A936LL,0x09BCL,0UL,-8L,0x9DL,4UL}},{{1UL,1UL,1L,0L,0x23L,-1L,0x57L,8UL}},{{0xC8A31D291BDBE346LL,3UL,-5L,0x685DL,0x9FL,7L,0x03L,0x44L}}}},{{{{0x7B4CBE45F899A36CLL,18446744073709551606UL,0xB977AEBA9AD86963LL,4L,0xA1L,-8L,255UL,248UL}},{{1UL,0x4ED70ABE7DC28FABLL,0x3B0B475680E21225LL,-1L,0xF9L,0xBDF66824L,0x34L,252UL}},{{0UL,0x478C9F5BE769D06ELL,-1L,-10L,247UL,9L,0x40L,1UL}},{{1UL,0x4ED70ABE7DC28FABLL,0x3B0B475680E21225LL,-1L,0xF9L,0xBDF66824L,0x34L,252UL}},{{0x7B4CBE45F899A36CLL,18446744073709551606UL,0xB977AEBA9AD86963LL,4L,0xA1L,-8L,255UL,248UL}}},{{{0xC8A31D291BDBE346LL,3UL,-5L,0x685DL,0x9FL,7L,0x03L,0x44L}},{{1UL,1UL,1L,0L,0x23L,-1L,0x57L,8UL}},{{5UL,0x89FE4952E4AD3AE1LL,0xF6FE707714C3A936LL,0x09BCL,0UL,-8L,0x9DL,4UL}},{{1UL,1UL,1L,0L,0x23L,-1L,0x57L,8UL}},{{0xC8A31D291BDBE346LL,3UL,-5L,0x685DL,0x9FL,7L,0x03L,0x44L}}}},{{{{0x7B4CBE45F899A36CLL,18446744073709551606UL,0xB977AEBA9AD86963LL,4L,0xA1L,-8L,255UL,248UL}},{{1UL,0x4ED70ABE7DC28FABLL,0x3B0B475680E21225LL,-1L,0xF9L,0xBDF66824L,0x34L,252UL}},{{0UL,0x478C9F5BE769D06ELL,-1L,-10L,247UL,9L,0x40L,1UL}},{{1UL,0x4ED70ABE7DC28FABLL,0x3B0B475680E21225LL,-1L,0xF9L,0xBDF66824L,0x34L,252UL}},{{0x7B4CBE45F899A36CLL,18446744073709551606UL,0xB977AEBA9AD86963LL,4L,0xA1L,-8L,255UL,248UL}}},{{{0xC8A31D291BDBE346LL,3UL,-5L,0x685DL,0x9FL,7L,0x03L,0x44L}},{{1UL,1UL,1L,0L,0x23L,-1L,0x57L,8UL}},{{5UL,0x89FE4952E4AD3AE1LL,0xF6FE707714C3A936LL,0x09BCL,0UL,-8L,0x9DL,4UL}},{{1UL,1UL,1L,0L,0x23L,-1L,0x57L,8UL}},{{0xC8A31D291BDBE346LL,3UL,-5L,0x685DL,0x9FL,7L,0x03L,0x44L}}}}};
            struct S2 l_567 = {0x4C2B6021L,0xFEFA52EAL,0xE0L,18446744073709551615UL};
            int32_t **l_568[2][4][3] = {{{&l_535,&l_535,&l_535},{&l_535,&l_535,&l_535},{&l_536,&l_535,&l_536},{&l_535,&l_535,&l_535}},{{&l_535,&l_535,&l_535},{&l_535,&l_535,&l_535},{&l_536,&l_535,&l_536},{&l_535,&l_535,&l_535}}};
            int64_t **l_573 = &g_68;
            int i, j, k;
            if (((((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((0x58L > (safe_mod_func_uint16_t_u_u(((250UL ^ (l_546[2][1][1] , ((((safe_add_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s((*g_68), (((((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((1L > ((*l_535) >= (safe_lshift_func_int8_t_s_u((((*l_536) = p_40) >= (*g_66)), (*p_43))))), l_563[4])), p_42)) < (*g_367)) & l_564) ^ p_40) & 0L))), l_546[2][1][1].f0.f5)) > 7UL), l_546[2][1][1].f0.f3)) < l_563[0]), 0UL)) && 18446744073709551614UL) | (-7L)) != (**g_490)))) | p_42), g_260.f0.f0))))), l_565)) & p_42) | l_566[1]) == (-9L)))
            { 
                return l_567;
            }
            else
            { 
                g_446 &= (**g_490);
                (*l_536) &= (**g_490);
            }
            for (l_565 = 0; (l_565 <= 0); l_565 += 1)
            { 
                uint32_t l_580 = 6UL;
                struct S2 l_622 = {0x939946F9L,0x5E86A3BEL,0x1CL,0UL};
                for (g_188 = 0; (g_188 <= 2); g_188 += 1)
                { 
                    (*l_536) = (((void*)0 == l_568[0][2][1]) <= (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((void*)0 == l_573), p_42)), (safe_mul_func_uint8_t_u_u(((*g_526) = ((*p_41) |= (*p_43))), (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u((*g_367), 3)) >= g_457[2]), 10)))))));
                    (*l_536) = (**g_490);
                    l_580 = p_42;
                    return l_581;
                }
                for (g_125 = 0; (g_125 <= 2); g_125 += 1)
                { 
                    uint16_t *l_586 = &g_457[2];
                    int32_t l_593 = 0x6BAA5C3DL;
                    uint16_t *l_615[1][6][3] = {{{&g_168.f2,(void*)0,&g_168.f2},{&g_168.f2,&g_129,&g_168.f2},{&g_168.f2,(void*)0,&g_168.f2},{&g_168.f2,&g_129,&g_168.f2},{&g_168.f2,(void*)0,&g_168.f2},{&g_168.f2,&g_129,&g_168.f2}}};
                    int32_t l_617 = 0x5D7E2839L;
                    int i, j, k;
                    l_617 &= ((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((g_168.f2 ^= (((--(*l_586)) >= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_593, 0)), 7))) , (safe_div_func_uint64_t_u_u(l_563[3], (safe_lshift_func_int16_t_s_u((+(~((*g_68) |= (safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(l_563[0], g_452)), ((safe_mod_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u((*g_526), ((safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(l_580, 7)), (((safe_lshift_func_int16_t_s_u(6L, (*l_536))) , p_42) , 0x2E0B09EFCC0B949ELL))) | g_457[2]))) && 0xC417L), g_614)) >= p_40)))))), 3)))))) < g_328), 3UL)), l_616)) == 2UL);
                    g_618 = &g_168;
                    if (g_117)
                        goto lbl_620;
                }
                if (l_621)
                    break;
                for (l_621 = 0; (l_621 <= 0); l_621 += 1)
                { 
                    if ((**g_490))
                        break;
                    return l_622;
                }
                for (g_140 = 0; (g_140 >= 0); g_140 -= 1)
                { 
                    if (l_567.f1)
                        goto lbl_620;
                    --l_623;
                    (*l_536) = 1L;
                    (*l_536) &= ((~((g_214.f1 == g_65[0][1]) ^ p_40)) >= (safe_rshift_func_uint8_t_u_s((0x1A640B099E0FE7ACLL | 0x449D4B9347F5F3E4LL), 1)));
                    (*g_490) = l_629;
                }
            }
            l_630 &= (*l_536);
            (*l_535) = (safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(0x6EL, (*g_526))), (*g_66)));
        }
        for (g_328 = (-26); (g_328 > 30); g_328 = safe_add_func_uint8_t_u_u(g_328, 2))
        { 
            (*l_535) &= 0xC4981903L;
        }
        for (g_168.f6 = 0; (g_168.f6 > 8); g_168.f6 = safe_add_func_int64_t_s_s(g_168.f6, 9))
        { 
            int8_t *l_651 = (void*)0;
            int8_t *l_652 = &g_53;
            int32_t l_655 = (-1L);
            struct S2 l_691 = {7UL,1L,1UL,0UL};
            struct S1 *l_699 = &l_678;
            int32_t l_731 = 0x3DF6B23AL;
            if (p_42)
                break;
            for (g_446 = 0; g_446 < 5; g_446 += 1)
            {
                for (g_369 = 0; g_369 < 3; g_369 += 1)
                {
                    for (l_529 = 0; l_529 < 3; l_529 += 1)
                    {
                        g_428[g_446][g_369][l_529] = &g_137;
                    }
                }
            }
        }
    }
    for (g_395.f3.f1 = 0; (g_395.f3.f1 <= 2); g_395.f3.f1 += 1)
    { 
        struct S0 *l_741 = &g_257.f0;
        uint32_t *l_747 = &g_369;
        int32_t l_759 = 0xDDF2AAC0L;
        uint32_t l_760 = 0x328BF104L;
        const struct S0 * const l_784[2][5] = {{&g_260.f0,&g_260.f0,&g_260.f0,&g_260.f0,&g_260.f0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        struct S2 l_823[4] = {{18446744073709551610UL,2L,0xA1L,0x685D0DFFL},{18446744073709551610UL,2L,0xA1L,0x685D0DFFL},{18446744073709551610UL,2L,0xA1L,0x685D0DFFL},{18446744073709551610UL,2L,0xA1L,0x685D0DFFL}};
        uint64_t ** const l_892 = &l_789;
        int32_t l_939 = (-3L);
        int i, j;
    }
    for (g_214.f0 = (-19); (g_214.f0 >= 3); g_214.f0++)
    { 
        int32_t l_959[3];
        int32_t l_968 = 1L;
        int32_t l_969 = 0x96628BD0L;
        union U6 **** const * const l_973 = &g_315;
        int i;
        for (i = 0; i < 3; i++)
            l_959[i] = 0x5E660FF3L;
        for (g_53 = 12; (g_53 <= 20); g_53++)
        { 
            int8_t l_960 = 4L;
            int32_t *l_961 = (void*)0;
            int32_t *l_962 = &g_446;
            int32_t *l_963 = (void*)0;
            int32_t *l_964 = &l_666;
            int32_t *l_965 = &l_666;
            int32_t *l_966 = &g_668;
            int32_t *l_967[7][2][4] = {{{&g_668,&g_668,&g_663,&l_666},{&g_663,&l_666,&g_668,&g_446}},{{&g_446,&l_657,&g_668,&g_668},{&g_175,&l_657,&g_175,&g_446}},{{&l_657,&l_666,&g_668,&l_666},{&l_657,&g_668,&g_3[0],&g_663}},{{&g_668,&g_140,&g_663,&g_446},{&g_663,&g_663,&l_657,&g_3[0]}},{{&g_663,&g_663,&g_663,&g_175},{&g_668,&g_3[0],&g_3[0],&g_668}},{{&l_657,&g_446,&g_668,(void*)0},{&l_657,&g_175,&g_175,&l_657}},{{&g_175,&g_446,&g_668,&l_657},{&g_446,&g_175,&g_668,(void*)0}}};
            uint32_t l_970[4][3][7] = {{{0x285C861FL,1UL,0x285C861FL,1UL,0x285C861FL,1UL,0x285C861FL},{0x006351BBL,0x006351BBL,4294967294UL,4294967294UL,0x006351BBL,0x006351BBL,4294967294UL},{0xB4610773L,1UL,0xB4610773L,1UL,0xB4610773L,1UL,0xB4610773L}},{{0x006351BBL,4294967294UL,4294967294UL,0x006351BBL,0x006351BBL,4294967294UL,4294967294UL},{0x285C861FL,1UL,0x285C861FL,1UL,0x285C861FL,1UL,0x285C861FL},{0x006351BBL,0x006351BBL,4294967294UL,4294967294UL,0x006351BBL,0x006351BBL,4294967294UL}},{{0xB4610773L,1UL,0xB4610773L,1UL,0xB4610773L,1UL,0xB4610773L},{0x006351BBL,4294967294UL,4294967294UL,0x006351BBL,0x006351BBL,4294967294UL,4294967294UL},{0x285C861FL,1UL,0x285C861FL,1UL,0x285C861FL,1UL,0x285C861FL}},{{0x006351BBL,0x006351BBL,4294967294UL,4294967294UL,0x006351BBL,0x006351BBL,4294967294UL},{0xB4610773L,1UL,0xB4610773L,1UL,0xB4610773L,1UL,0xB4610773L},{0x006351BBL,4294967294UL,4294967294UL,0x006351BBL,0x006351BBL,4294967294UL,4294967294UL}}};
            int i, j, k;
            for (g_124.f2 = 0; (g_124.f2 == 2); g_124.f2 = safe_add_func_int64_t_s_s(g_124.f2, 5))
            { 
                struct S0 *l_958 = &g_260.f0;
                struct S0 **l_957 = &l_958;
                (*l_957) = (void*)0;
                if (l_959[2])
                    continue;
            }
            l_970[0][1][6]++;
            if ((*l_964))
                continue;
        }
        (*l_536) ^= (&g_315 != l_973);
        if (g_69)
            goto lbl_620;
    }
    return l_974[0][0];
}



static uint8_t  func_47(const struct S0  p_48, int64_t * p_49)
{ 
    int8_t l_524 = 5L;
    for (g_214.f1 = 1; (g_214.f1 == 31); g_214.f1++)
    { 
        uint16_t l_512 = 0x7E68L;
        const int64_t *l_521[3][3][7] = {{{&g_260.f0.f2,&g_257.f0.f2,(void*)0,&g_124.f2,&g_188,&g_124.f2,(void*)0},{&g_260.f0.f2,&g_260.f0.f2,(void*)0,&g_260.f0.f2,&g_188,&g_124.f2,&g_124.f2},{&g_257.f0.f2,&g_69,&g_257.f0.f2,&g_188,&g_260.f0.f2,&g_124.f2,&g_257.f0.f2}},{{(void*)0,&g_69,&g_124.f2,&g_69,&g_188,&g_124.f2,&g_69},{(void*)0,&g_188,&g_124.f2,&g_124.f2,&g_188,(void*)0,&g_69},{&g_124.f2,&g_188,&g_69,&g_124.f2,&g_69,(void*)0,&g_257.f0.f2}},{{&g_124.f2,&g_260.f0.f2,&g_188,&g_257.f0.f2,&g_69,&g_257.f0.f2,&g_124.f2},{&g_124.f2,&g_188,&g_260.f0.f2,(void*)0,&g_260.f0.f2,&g_260.f0.f2,(void*)0},{&g_124.f2,&g_188,&g_124.f2,(void*)0,&g_257.f0.f2,&g_260.f0.f2,&g_188}}};
        int64_t *l_523 = (void*)0;
        int32_t *l_525 = &g_446;
        int i, j, k;
        if (l_512)
            break;
        for (g_395.f3.f0 = (-15); (g_395.f3.f0 >= 7); g_395.f3.f0 = safe_add_func_uint8_t_u_u(g_395.f3.f0, 1))
        { 
            int64_t **l_522[2][7][5] = {{{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{(void*)0,&g_68,(void*)0,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68}},{{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,(void*)0,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{(void*)0,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68}}};
            int i, j, k;
            g_446 &= (safe_add_func_int32_t_s_s((*g_491), ((((safe_rshift_func_uint8_t_u_u((0x202CL ^ ((*g_68) , (safe_mul_func_int16_t_s_s((g_257.f0.f4 , ((l_521[0][1][5] == (l_523 = &g_69)) | (g_257.f0.f4 <= (*p_49)))), l_512)))), 6)) >= l_524) || 1UL) <= g_53)));
        }
        (*l_525) = l_512;
    }
    return p_48.f3;
}



static struct S0  func_50(int8_t * p_51)
{ 
    int32_t *l_54 = &g_3[0];
    int32_t **l_55 = &l_54;
    const uint32_t *l_64 = &g_65[0][0];
    const uint32_t **l_63[3];
    uint16_t *l_322 = &g_129;
    union U4 l_323[1][6] = {{{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}}};
    int32_t *l_324 = (void*)0;
    int32_t l_325[1];
    int32_t *l_326 = &g_175;
    int32_t *l_327 = &l_325[0];
    union U6 *l_337 = &g_214;
    int32_t l_346 = (-1L);
    int16_t l_352 = 0x333AL;
    union U6 ***l_353 = &g_317;
    const union U6 l_376[5] = {{0x9BL},{0x9BL},{0x9BL},{0x9BL},{0x9BL}};
    uint8_t l_378 = 0x53L;
    union U5 l_401 = {0};
    int64_t * const *l_477 = &g_68;
    int32_t l_485 = 1L;
    struct S0 l_508 = {3UL,0UL,0x9A3A14F01B350532LL,0xF04AL,0x63L,0x254CCA48L,0xA4L,253UL};
    int i, j;
    for (i = 0; i < 3; i++)
        l_63[i] = &l_64;
    for (i = 0; i < 1; i++)
        l_325[i] = 0xBFF0262FL;
    (*l_55) = l_54;
    l_325[0] &= (safe_sub_func_int32_t_s_s(((func_58((g_66 = &g_34[1][1]), (**l_55), &l_54, &g_32) , ((((((safe_unary_minus_func_uint16_t_u(((*l_322) |= (safe_add_func_int8_t_s_s(((*p_51) = (*p_51)), 254UL))))) | (*g_66)) & (*g_66)) , l_323[0][2]) , 1L) >= (-4L))) , (*l_54)), g_137.f0));
    ++g_328;
    return l_508;
}



static struct S0  func_58(const uint32_t * p_59, int16_t  p_60, int32_t ** p_61, uint8_t * p_62)
{ 
    int64_t **l_70 = &g_68;
    int32_t l_75 = 0xDB6CD35AL;
    uint32_t *l_90[4][6][6] = {{{&g_34[1][2],&g_34[0][1],&g_34[1][2],(void*)0,&g_34[0][1],(void*)0},{&g_34[1][0],(void*)0,&g_34[0][1],&g_34[1][2],&g_34[1][2],&g_34[1][2]},{&g_34[1][2],&g_34[1][2],&g_34[1][2],&g_34[0][1],(void*)0,&g_34[1][0]},{(void*)0,&g_34[0][1],(void*)0,&g_34[1][2],&g_34[0][1],&g_34[1][2]},{&g_34[0][1],&g_34[1][2],&g_34[0][4],&g_34[1][2],&g_34[1][1],&g_34[0][1]},{(void*)0,&g_34[1][2],&g_34[1][0],&g_34[0][1],&g_34[0][1],&g_34[0][1]}},{{&g_34[1][2],&g_34[0][3],&g_34[0][3],&g_34[1][2],&g_34[1][2],&g_34[1][2]},{&g_34[1][0],(void*)0,&g_34[1][2],(void*)0,&g_34[1][2],&g_34[0][2]},{&g_34[1][2],&g_34[0][1],&g_34[1][2],&g_34[0][4],&g_34[1][2],&g_34[0][2]},{&g_34[0][1],(void*)0,&g_34[1][1],&g_34[1][0],&g_34[1][2],&g_34[0][1]},{&g_34[0][1],&g_34[0][3],(void*)0,&g_34[0][3],&g_34[0][1],&g_34[0][4]},{&g_34[1][2],&g_34[1][2],&g_34[1][2],&g_34[1][2],&g_34[1][1],&g_34[1][2]}},{{&g_34[0][2],&g_34[1][2],&g_34[1][2],&g_34[1][2],&g_34[0][1],&g_34[1][2]},{&g_34[0][2],&g_34[0][1],&g_34[1][2],&g_34[1][1],(void*)0,&g_34[0][4]},{&g_34[0][1],&g_34[1][2],(void*)0,(void*)0,&g_34[1][2],&g_34[0][1]},{&g_34[0][4],(void*)0,&g_34[1][1],&g_34[1][2],&g_34[0][1],&g_34[0][2]},{&g_34[1][2],&g_34[0][1],&g_34[1][2],&g_34[1][2],&g_34[1][2],&g_34[0][2]},{&g_34[1][2],&g_34[1][1],&g_34[1][2],&g_34[1][2],&g_34[1][2],&g_34[1][2]}},{{&g_34[0][4],&g_34[0][1],&g_34[0][3],(void*)0,&g_34[0][3],&g_34[0][1]},{&g_34[0][1],&g_34[1][2],&g_34[1][0],&g_34[1][1],(void*)0,&g_34[0][1]},{&g_34[0][2],&g_34[1][2],&g_34[0][4],&g_34[1][2],&g_34[0][1],&g_34[1][2]},{&g_34[0][2],&g_34[1][2],(void*)0,&g_34[1][2],(void*)0,&g_34[1][0]},{&g_34[1][2],&g_34[1][2],&g_34[1][2],&g_34[0][3],&g_34[0][3],&g_34[1][2]},{&g_34[0][1],&g_34[0][1],&g_34[0][1],&g_34[1][0],&g_34[1][2],(void*)0}}};
    int8_t l_91[4][6] = {{0x2DL,(-5L),0xCCL,(-5L),0x2DL,0xCCL},{(-5L),0x2DL,0xCCL,0x3BL,0x3BL,0xCCL},{0x3BL,0x3BL,0xCCL,0x2DL,(-5L),0xCCL},{0x2DL,(-5L),0xCCL,(-5L),0x2DL,0xCCL}};
    uint8_t *l_92 = &g_93;
    union U5 l_98 = {0};
    uint8_t l_108 = 255UL;
    int8_t l_115 = (-4L);
    int32_t *l_144 = &l_75;
    int64_t l_157 = 0L;
    int32_t l_191 = 0xE7397E21L;
    struct S1 l_255 = {0xBDL,4294967294UL,0x7586L,0x84AEL,65535UL,0x44L,1UL};
    union U6 *l_267 = &g_214;
    union U6 **l_266 = &l_267;
    union U6 ***l_265 = &l_266;
    struct S0 l_301 = {2UL,0xEADCF6FB75AE6537LL,1L,0xB7F8L,0x6EL,0x5484FCDBL,9UL,250UL};
    int i, j, k;
    if (((((*l_70) = g_68) == &g_69) , ((safe_div_func_int64_t_s_s((safe_add_func_int64_t_s_s((l_75 , (p_60 < (+(safe_rshift_func_int8_t_s_u((l_75 && (safe_sub_func_uint8_t_u_u(((*l_92) &= (((safe_div_func_uint8_t_u_u(((*p_62) = ((safe_lshift_func_int16_t_s_s((((+((((g_34[1][2] = (g_69 , (safe_lshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(l_75, g_34[0][0])) == 1UL), 1)))) <= l_75) == (-8L)) ^ g_65[0][0])) == 65526UL) <= p_60), g_67)) <= 0xD82229B2L)), (-1L))) && l_91[3][1]) ^ 0x94ECL)), (-1L)))), 3))))), 18446744073709551606UL)), 3UL)) > 0xA967D4ADD7D53184LL)))
    { 
        uint16_t l_104 = 1UL;
        uint64_t *l_106[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *l_116[2];
        int i;
        for (i = 0; i < 2; i++)
            l_116[i] = &l_75;
        g_117 = (safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(g_3[1], (l_98 , (safe_sub_func_uint8_t_u_u(((((l_108 = (g_105 = (safe_mod_func_uint64_t_u_u(p_60, (g_103[2][1] , l_104))))) , (safe_add_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(g_65[0][0], (safe_mul_func_int8_t_s_s(((l_115 >= l_115) == l_104), p_60)))) || g_34[0][3]), 0xAD39915A3DCCCE59LL))) < 0xBCL) & 0x01CD825BL), g_3[0]))))), l_91[3][1]));
    }
    else
    { 
        int32_t *l_126 = &l_75;
        int16_t *l_127[3];
        uint16_t *l_128[1];
        uint8_t *l_131[4];
        int32_t l_189[7] = {0x8A67A0E5L,0x8A67A0E5L,0x8A67A0E5L,0x8A67A0E5L,0x8A67A0E5L,0x8A67A0E5L,0x8A67A0E5L};
        struct S0 *l_198 = &g_124;
        union U6 *l_213 = &g_214;
        union U7 *l_262[2];
        uint16_t l_309 = 0UL;
        union U6 ****l_313 = (void*)0;
        union U6 *****l_312 = &l_313;
        int i;
        for (i = 0; i < 3; i++)
            l_127[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_128[i] = &g_129;
        for (i = 0; i < 4; i++)
            l_131[i] = &l_108;
        for (i = 0; i < 2; i++)
            l_262[i] = &g_257;
lbl_268:
        if ((safe_mul_func_uint16_t_u_u((((safe_div_func_int8_t_s_s(9L, 0x82L)) || (p_60 < (l_115 != (g_129 |= ((g_105 = (safe_mul_func_int16_t_s_s((1UL < (g_124 , ((*l_126) |= (g_125 = 1L)))), g_3[0]))) > p_60))))) < 0xAF16L), 0x4A9FL)))
        { 
            uint8_t **l_130 = &l_92;
            struct S2 l_134 = {18446744073709551615UL,1L,2UL,0x1A7D10A6L};
            uint16_t *l_138[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_139 = &g_140;
            int i;
            (*l_139) &= ((l_75 = ((((((((*l_130) = &g_93) != l_131[2]) | ((safe_mul_func_uint8_t_u_u(((*p_62) = (l_134 , ((safe_div_func_uint16_t_u_u((((*l_126) >= (p_60 != (-2L))) , (((*l_126) | g_32) < (*p_62))), l_115)) > 18446744073709551606UL))), (*l_126))) && (*l_126))) , g_137) , &g_129) != l_138[2]) || p_60)) < l_115);
            (*l_139) = ((*g_66) > 0L);
        }
        else
        { 
            int32_t *l_143 = &g_3[0];
            int32_t l_190 = 0xBD436219L;
            int32_t l_192 = 0x7670E187L;
            int32_t l_193 = 0x208B660CL;
            int32_t l_194 = (-1L);
            uint32_t **l_201[1][3];
            int64_t ** const l_222[2] = {&g_68,&g_68};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_201[i][j] = &l_90[1][5][5];
            }
            for (g_129 = 0; (g_129 < 30); g_129 = safe_add_func_uint64_t_u_u(g_129, 2))
            { 
                int8_t l_149 = 0xB6L;
                int32_t *l_176 = &g_140;
                int32_t *l_177 = &g_140;
                int32_t *l_178 = &g_140;
                int32_t *l_179 = &g_140;
                int32_t *l_180 = &g_140;
                int32_t *l_181 = &l_75;
                int32_t *l_182 = &g_175;
                int32_t *l_183 = (void*)0;
                int32_t *l_184 = &g_175;
                int32_t *l_185 = (void*)0;
                int32_t *l_186 = &g_175;
                int32_t *l_187[4][6][2] = {{{(void*)0,&l_75},{&l_75,(void*)0},{&l_75,&l_75},{(void*)0,&l_75},{(void*)0,&g_3[0]},{(void*)0,(void*)0}},{{&g_3[0],(void*)0},{(void*)0,&g_3[0]},{(void*)0,(void*)0},{&g_3[0],(void*)0},{(void*)0,&g_3[0]},{(void*)0,(void*)0}},{{&g_3[0],(void*)0},{(void*)0,&g_3[0]},{(void*)0,(void*)0},{&g_3[0],(void*)0},{(void*)0,&g_3[0]},{(void*)0,(void*)0}},{{&g_3[0],(void*)0},{(void*)0,&g_3[0]},{(void*)0,(void*)0},{&g_3[0],(void*)0},{(void*)0,&g_3[0]},{(void*)0,(void*)0}}};
                struct S0 **l_199 = (void*)0;
                struct S0 **l_200 = &l_198;
                int i, j, k;
                l_144 = l_143;
                if ((safe_add_func_uint32_t_u_u((p_60 && ((p_60 > (((p_60 != (safe_sub_func_uint8_t_u_u(g_124.f0, (*p_62)))) | (l_149 = g_129)) >= (safe_mod_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u((((((*g_68) || 0x1925695F44C7A7E6LL) & g_65[0][1]) <= g_3[1]) >= g_67), g_53)) || (*l_126)), 1UL)))) || 0xD2F77A17L)), (*l_144))))
                { 
                    l_157 = (safe_div_func_uint16_t_u_u((g_156 |= (*l_143)), g_124.f5));
                }
                else
                { 
                    int64_t **l_171 = &g_68;
                    int32_t *l_172 = &g_140;
                    int32_t *l_173 = (void*)0;
                    int32_t *l_174 = &g_175;
                    (*l_126) = (**p_61);
                    (*l_126) = ((*l_174) |= (safe_mul_func_int16_t_s_s((p_60 = 0xECA5L), ((safe_mul_func_int16_t_s_s((*l_126), (safe_div_func_int8_t_s_s((((*l_172) = (safe_lshift_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s((g_168 , (*l_126)), g_117)) && (safe_rshift_func_uint16_t_u_u((l_70 != l_171), 5))) > 0UL) && (*l_144)), 8))) || (*l_126)), g_65[0][1])))) <= l_149))));
                }
                g_195++;
                (*l_200) = l_198;
            }
            if (((&g_66 == l_201[0][1]) == (-10L)))
            { 
lbl_204:
                l_75 = (**p_61);
            }
            else
            { 
                uint32_t l_210 = 0x8B0DACAFL;
                int32_t l_230 = 1L;
                uint64_t *l_231 = &g_124.f0;
                uint64_t *l_232 = (void*)0;
                uint64_t *l_233 = &g_195;
                union U7 l_248[3] = {{{0UL,18446744073709551610UL,0xE0E80E6B5D3E5C67LL,1L,0xAAL,0x033F47E5L,3UL,0UL}},{{0UL,18446744073709551610UL,0xE0E80E6B5D3E5C67LL,1L,0xAAL,0x033F47E5L,3UL,0UL}},{{0UL,18446744073709551610UL,0xE0E80E6B5D3E5C67LL,1L,0xAAL,0x033F47E5L,3UL,0UL}}};
                union U4 l_261 = {18446744073709551606UL};
                int i;
                for (l_75 = 0; (l_75 < (-19)); --l_75)
                { 
                    int32_t *l_205 = (void*)0;
                    int32_t *l_206 = &l_189[3];
                    int32_t *l_207 = &g_140;
                    int32_t *l_208 = &g_175;
                    int32_t *l_209 = (void*)0;
                    union U6 **l_215 = &l_213;
                    if (g_124.f2)
                        goto lbl_204;
                    --l_210;
                    (*l_215) = l_213;
                }
                g_140 = (*l_143);
                if (((*l_126) = (safe_div_func_int16_t_s_s(l_210, (safe_unary_minus_func_uint16_t_u(((safe_div_func_uint32_t_u_u((*g_66), (safe_unary_minus_func_uint32_t_u((((*l_233) = ((((void*)0 == l_222[1]) && ((~(safe_mul_func_int16_t_s_s(g_214.f0, (g_105 |= ((safe_rshift_func_int16_t_s_s(0xA657L, 0)) || (((((*l_231) ^= (l_230 ^= (safe_rshift_func_uint16_t_u_u((*l_143), p_60)))) , &g_65[0][0]) != p_59) & 1L)))))) && 1L)) || (*g_68))) | (*g_68)))))) >= (*p_59))))))))
                { 
                    uint64_t l_234[7][3] = {{0x6FFE6D5E1E2EF9C4LL,0x6FFE6D5E1E2EF9C4LL,0x6FFE6D5E1E2EF9C4LL},{0UL,0UL,0UL},{0x6FFE6D5E1E2EF9C4LL,0x6FFE6D5E1E2EF9C4LL,0x6FFE6D5E1E2EF9C4LL},{0UL,0UL,0UL},{0x6FFE6D5E1E2EF9C4LL,0x6FFE6D5E1E2EF9C4LL,0x6FFE6D5E1E2EF9C4LL},{0UL,0UL,0UL},{0x6FFE6D5E1E2EF9C4LL,0x6FFE6D5E1E2EF9C4LL,0x6FFE6D5E1E2EF9C4LL}};
                    int i, j;
                    ++l_234[0][0];
                    return g_124;
                }
                else
                { 
                    int32_t *l_237 = &l_189[2];
                    int32_t *l_238 = &l_193;
                    int32_t *l_239 = &g_140;
                    int32_t *l_240 = &l_190;
                    int32_t *l_241 = &l_230;
                    int32_t *l_242 = &l_75;
                    int32_t *l_243 = &g_175;
                    int32_t *l_244[3];
                    uint32_t l_245[3];
                    union U7 **l_258 = (void*)0;
                    union U7 *l_259[1];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_244[i] = (void*)0;
                    for (i = 0; i < 3; i++)
                        l_245[i] = 0xF5D855D5L;
                    for (i = 0; i < 1; i++)
                        l_259[i] = &g_260;
                    --l_245[1];
                    (*l_237) ^= ((*l_143) && (g_105 = (l_248[2] , (~(safe_mul_func_int16_t_s_s((((g_124.f1 &= (0L >= (*g_66))) , (~((*l_126) |= ((*g_68) = (((((safe_div_func_uint8_t_u_u((*l_143), (l_255 , (*l_143)))) & 0xCA83L) || (-1L)) & (**p_61)) == (*g_66)))))) || p_60), 0x2CDDL))))));
                    l_259[0] = g_256[0][0];
                    l_230 &= ((&l_248[2] != (l_261 , l_262[0])) == g_124.f0);
                }
            }
        }
        for (l_255.f2 = 0; (l_255.f2 <= 3); l_255.f2 += 1)
        { 
            struct S0 * const l_280 = &g_124;
            const int32_t l_289[3] = {(-1L),(-1L),(-1L)};
            int32_t l_298 = 0xB248997DL;
            int i;
            for (g_124.f3 = 0; (g_124.f3 <= 1); g_124.f3 += 1)
            { 
                union U6 ***l_263 = (void*)0;
                union U6 ****l_264[7][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_263,&l_263,&l_263,&l_263,&l_263,&l_263,&l_263},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_263,&l_263,&l_263,&l_263,&l_263,&l_263,&l_263},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_263,&l_263,&l_263,&l_263,&l_263,&l_263,&l_263},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                l_265 = l_263;
                for (g_175 = 1; (g_175 >= 0); g_175 -= 1)
                { 
                    if (g_124.f4)
                        goto lbl_268;
                }
            }
            for (g_53 = 0; (g_53 <= 1); g_53 += 1)
            { 
                uint8_t l_269[1][7][1];
                const int8_t l_299 = 0x27L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_269[i][j][k] = 0xEBL;
                    }
                }
                if ((*l_126))
                    break;
                l_269[0][5][0]++;
                g_175 &= (safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((*l_126), ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((l_280 != l_280), (((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(l_289[2], (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((safe_sub_func_int16_t_s_s(l_269[0][4][0], (l_298 ^= 0xA45EL))) >= 0xA9L), 18446744073709551615UL)), l_299)) < g_260.f0.f3), l_269[0][4][0])))), p_60)) && 0x0A2B0F9EL), (*l_126))), (*p_62))) , p_59) == (void*)0))), (*l_144))) , (*g_68)))), 0L));
                for (g_168.f6 = 0; (g_168.f6 <= 1); g_168.f6 += 1)
                { 
                    int8_t *l_300 = (void*)0;
                    if (l_255.f6)
                        goto lbl_268;
                    (*l_126) |= ((l_300 != &g_53) >= 0x4E46L);
                    return l_301;
                }
            }
        }
        for (l_108 = 0; (l_108 != 42); l_108 = safe_add_func_int16_t_s_s(l_108, 6))
        { 
            for (g_168.f6 = 0; (g_168.f6 > 8); g_168.f6++)
            { 
                for (l_75 = 16; (l_75 < 16); ++l_75)
                { 
                    uint8_t l_308 = 1UL;
                    l_309 |= l_308;
                    (*p_61) = &g_175;
                }
            }
        }
        for (l_301.f1 = (-16); (l_301.f1 >= 58); l_301.f1 = safe_add_func_uint8_t_u_u(l_301.f1, 1))
        { 
            g_314[2][1][0] = l_312;
        }
    }
    return l_301;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);

    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_34[i][j], "g_34[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_65[i][j], "g_65[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_124.f0, "g_124.f0", print_hash_value);
    transparent_crc(g_124.f1, "g_124.f1", print_hash_value);
    transparent_crc(g_124.f2, "g_124.f2", print_hash_value);
    transparent_crc(g_124.f3, "g_124.f3", print_hash_value);
    transparent_crc(g_124.f4, "g_124.f4", print_hash_value);
    transparent_crc(g_124.f5, "g_124.f5", print_hash_value);
    transparent_crc(g_124.f6, "g_124.f6", print_hash_value);
    transparent_crc(g_124.f7, "g_124.f7", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_137.f0, "g_137.f0", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_168.f0, "g_168.f0", print_hash_value);
    transparent_crc(g_168.f1, "g_168.f1", print_hash_value);
    transparent_crc(g_168.f2, "g_168.f2", print_hash_value);
    transparent_crc(g_168.f3, "g_168.f3", print_hash_value);
    transparent_crc(g_168.f4, "g_168.f4", print_hash_value);
    transparent_crc(g_168.f5, "g_168.f5", print_hash_value);
    transparent_crc(g_168.f6, "g_168.f6", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_214.f1, "g_214.f1", print_hash_value);
    transparent_crc(g_257.f0.f0, "g_257.f0.f0", print_hash_value);
    transparent_crc(g_257.f0.f1, "g_257.f0.f1", print_hash_value);
    transparent_crc(g_257.f0.f2, "g_257.f0.f2", print_hash_value);
    transparent_crc(g_257.f0.f3, "g_257.f0.f3", print_hash_value);
    transparent_crc(g_257.f0.f4, "g_257.f0.f4", print_hash_value);
    transparent_crc(g_257.f0.f5, "g_257.f0.f5", print_hash_value);
    transparent_crc(g_257.f0.f6, "g_257.f0.f6", print_hash_value);
    transparent_crc(g_257.f0.f7, "g_257.f0.f7", print_hash_value);
    transparent_crc(g_260.f0.f0, "g_260.f0.f0", print_hash_value);
    transparent_crc(g_260.f0.f1, "g_260.f0.f1", print_hash_value);
    transparent_crc(g_260.f0.f2, "g_260.f0.f2", print_hash_value);
    transparent_crc(g_260.f0.f3, "g_260.f0.f3", print_hash_value);
    transparent_crc(g_260.f0.f4, "g_260.f0.f4", print_hash_value);
    transparent_crc(g_260.f0.f5, "g_260.f0.f5", print_hash_value);
    transparent_crc(g_260.f0.f6, "g_260.f0.f6", print_hash_value);
    transparent_crc(g_260.f0.f7, "g_260.f0.f7", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_395.f0, "g_395.f0", print_hash_value);
    transparent_crc(g_395.f1, "g_395.f1", print_hash_value);
    transparent_crc(g_395.f2, "g_395.f2", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_457[i], "g_457[i]", print_hash_value);

    }
    transparent_crc(g_614, "g_614", print_hash_value);
    transparent_crc(g_619.f0, "g_619.f0", print_hash_value);
    transparent_crc(g_619.f1, "g_619.f1", print_hash_value);
    transparent_crc(g_619.f2, "g_619.f2", print_hash_value);
    transparent_crc(g_619.f3, "g_619.f3", print_hash_value);
    transparent_crc(g_619.f4, "g_619.f4", print_hash_value);
    transparent_crc(g_619.f5, "g_619.f5", print_hash_value);
    transparent_crc(g_619.f6, "g_619.f6", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_658[i][j], "g_658[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_669, "g_669", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_680[i].f0, "g_680[i].f0", print_hash_value);
        transparent_crc(g_680[i].f1, "g_680[i].f1", print_hash_value);
        transparent_crc(g_680[i].f2, "g_680[i].f2", print_hash_value);
        transparent_crc(g_680[i].f3, "g_680[i].f3", print_hash_value);

    }
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_737, "g_737", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    transparent_crc(g_820.f0.f0, "g_820.f0.f0", print_hash_value);
    transparent_crc(g_820.f0.f1, "g_820.f0.f1", print_hash_value);
    transparent_crc(g_820.f0.f2, "g_820.f0.f2", print_hash_value);
    transparent_crc(g_820.f0.f3, "g_820.f0.f3", print_hash_value);
    transparent_crc(g_820.f0.f4, "g_820.f0.f4", print_hash_value);
    transparent_crc(g_820.f0.f5, "g_820.f0.f5", print_hash_value);
    transparent_crc(g_820.f0.f6, "g_820.f0.f6", print_hash_value);
    transparent_crc(g_820.f0.f7, "g_820.f0.f7", print_hash_value);
    transparent_crc(g_881, "g_881", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_947[i][j][k], "g_947[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_948, "g_948", print_hash_value);
    transparent_crc(g_1087, "g_1087", print_hash_value);
    transparent_crc(g_1207, "g_1207", print_hash_value);
    transparent_crc(g_1208, "g_1208", print_hash_value);
    transparent_crc(g_1209, "g_1209", print_hash_value);
    transparent_crc(g_1210, "g_1210", print_hash_value);
    transparent_crc(g_1281, "g_1281", print_hash_value);
    transparent_crc(g_1283, "g_1283", print_hash_value);
    transparent_crc(g_1285, "g_1285", print_hash_value);
    transparent_crc(g_1288, "g_1288", print_hash_value);
    transparent_crc(g_1342, "g_1342", print_hash_value);
    transparent_crc(g_1441, "g_1441", print_hash_value);
    transparent_crc(g_1444, "g_1444", print_hash_value);
    transparent_crc(g_1446, "g_1446", print_hash_value);
    transparent_crc(g_1542, "g_1542", print_hash_value);
    transparent_crc(g_1569, "g_1569", print_hash_value);
    transparent_crc(g_1570, "g_1570", print_hash_value);
    transparent_crc(g_1571, "g_1571", print_hash_value);
    transparent_crc(g_1572, "g_1572", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
