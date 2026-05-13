// SPDX-License-Identifier: MIT
// cctest_csmith_9c3c96b9.c --- cctest case csmith_9c3c96b9 (csmith seed 2621216441)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55305982 */

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

// Options:   -s 2621216441 -o /tmp/csmith_gen_3264tht8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   const uint8_t  f1;
   uint32_t  f2;
   const int32_t  f3;
};

union U1 {
   struct S0  f0;
   int16_t  f1;
};


static struct S0 g_5 = {8UL,0x56L,3UL,0x9ED9BA07L};
static int8_t g_10 = 0xE9L;
static union U1 g_56 = {{4294967290UL,0UL,0UL,-5L}};
static uint32_t g_66 = 4294967291UL;
static int64_t g_67 = 1L;
static int8_t g_69 = (-1L);
static int16_t g_73 = 0L;
static uint64_t g_76 = 0x5CED4B89D53C4A2FLL;
static int8_t g_84[5] = {0L,0L,0L,0L,0L};
static uint32_t g_92 = 4UL;
static uint32_t g_95 = 18446744073709551615UL;
static uint8_t g_106 = 0x28L;
static int32_t g_107 = 3L;
static int32_t g_108[3] = {9L,9L,9L};



static int64_t  func_1(void);
static uint8_t  func_13(int8_t  p_14, int32_t  p_15);
static int32_t  func_17(uint8_t  p_18, union U1  p_19, int32_t  p_20, uint32_t  p_21);
static const uint16_t  func_23(int16_t  p_24, uint32_t  p_25, uint32_t  p_26);




static int64_t  func_1(void)
{ 
    uint8_t l_9[2];
    union U1 l_31 = {{4294967290UL,0x42L,4294967294UL,0xF8A6EBBFL}};
    int32_t l_208[4][4];
    int i, j;
    for (i = 0; i < 2; i++)
        l_9[i] = 0xCCL;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_208[i][j] = 0xCD010C7FL;
    }
    l_9[1] = (safe_add_func_uint8_t_u_u(((+(g_5 , (~(safe_sub_func_int32_t_s_s((-1L), g_5.f3))))) && 0x59CDL), g_5.f3));
    g_10 = l_9[0];
    for (g_5.f0 = 0; (g_5.f0 <= 1); g_5.f0 += 1)
    { 
        uint64_t l_16 = 0x2F3CCD2466E9F086LL;
        uint8_t l_32 = 0xAAL;
        int32_t l_186[3];
        uint8_t l_236 = 0x2BL;
        int i;
        for (i = 0; i < 3; i++)
            l_186[i] = 0L;
    }
    return g_56.f0.f3;
}



static uint8_t  func_13(int8_t  p_14, int32_t  p_15)
{ 
    uint64_t l_148 = 18446744073709551615UL;
    int32_t l_149 = 0x8341D410L;
    int32_t l_153 = 0x22D14440L;
    int32_t l_157 = 0xE0C72D92L;
    int32_t l_158 = 0x50F044E6L;
    if ((((safe_rshift_func_uint8_t_u_s((((g_56.f1 = (safe_add_func_uint16_t_u_u(((g_92 = (safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_14, (((safe_mul_func_uint16_t_u_u((l_149 ^= (g_56.f0.f1 != (!((((safe_mul_func_uint8_t_u_u(p_15, (safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((g_5.f2 <= p_15), p_15)) & g_69), 0xB1A2L)))) , 2UL) , 0x41C8C05660F8D18ELL) >= l_148)))), 7UL)) == g_56.f0.f3) && g_5.f2))), l_148)), p_14)), g_108[0])) < l_148), 1L))) , 0xC617L), p_14))) | 0xD2E7L) || p_15), 1)) >= g_5.f0) != p_14))
    { 
        int64_t l_152 = 8L;
        int32_t l_156 = 1L;
        uint32_t l_159[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_159[i][j] = 18446744073709551615UL;
        }
lbl_175:
        if (p_15)
        { 
            int64_t l_150[3][5];
            int32_t l_151 = (-9L);
            int32_t l_154 = 0x3A8C46F0L;
            int32_t l_155 = 0x557B4538L;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                    l_150[i][j] = 6L;
            }
            l_159[0][0]--;
            for (g_107 = (-6); (g_107 < (-25)); --g_107)
            { 
                g_108[0] = (g_84[3] >= (g_56 , (p_14 = (255UL > p_14))));
                l_153 = (safe_add_func_uint8_t_u_u(1UL, (safe_mul_func_uint8_t_u_u(g_5.f2, (safe_div_func_uint64_t_u_u((((l_150[2][0] <= l_150[0][1]) || g_107) , 0UL), g_76))))));
                g_108[0] = g_108[0];
            }
        }
        else
        { 
            uint64_t l_172 = 0x7C78B5D631B42A30LL;
            l_172--;
            return g_107;
        }
        l_157 = g_84[1];
        if (g_5.f2)
            goto lbl_175;
    }
    else
    { 
        for (g_76 = 0; (g_76 > 12); g_76 = safe_add_func_uint32_t_u_u(g_76, 2))
        { 
            int64_t l_178 = 0xE02ECAC60C0AA4C9LL;
            return l_178;
        }
    }
    for (g_67 = (-3); (g_67 >= 15); g_67 = safe_add_func_int16_t_s_s(g_67, 8))
    { 
        for (g_56.f0.f2 = 0; (g_56.f0.f2 <= 30); g_56.f0.f2 = safe_add_func_int8_t_s_s(g_56.f0.f2, 2))
        { 
            int16_t l_185[2][3][5] = {{{(-10L),0xE8F3L,0xE8F3L,(-10L),0xE8F3L},{(-7L),(-7L),0xB978L,(-7L),(-7L)},{0xE8F3L,(-10L),0xE8F3L,0xE8F3L,(-10L)}},{{(-7L),0L,0L,(-7L),0L},{(-10L),(-10L),(-1L),(-10L),(-10L)},{0L,(-7L),0L,0L,(-7L)}}};
            int i, j, k;
            for (p_15 = 0; (p_15 > (-17)); --p_15)
            { 
                l_185[0][1][1] = (g_107 = g_56.f1);
            }
        }
    }
    return p_15;
}



static int32_t  func_17(uint8_t  p_18, union U1  p_19, int32_t  p_20, uint32_t  p_21)
{ 
    const uint64_t l_65 = 0x93D3B28C330C202ELL;
    int32_t l_72 = (-9L);
    int32_t l_74 = 0xEEBEAAF7L;
    int32_t l_75[1][4] = {{6L,6L,6L,6L}};
    uint32_t l_115 = 0xC3DAD0BAL;
    int i, j;
    if (((safe_mul_func_uint16_t_u_u(0xB2EDL, (safe_mod_func_uint16_t_u_u(((g_67 = (((g_66 = (safe_rshift_func_int16_t_s_s((((g_56.f0.f0 < ((safe_lshift_func_uint16_t_u_s(p_20, l_65)) && l_65)) && g_5.f3) == l_65), p_19.f0.f3))) >= p_21) != g_5.f2)) && p_20), g_5.f3)))) > p_19.f0.f2))
    { 
        int64_t l_68[3][1][1];
        int32_t l_70 = 0xC6CE91E4L;
        int32_t l_71 = (-9L);
        uint32_t l_91 = 0xEBBCFA1FL;
        int32_t l_109 = (-2L);
        int32_t l_110 = 7L;
        int32_t l_111 = (-1L);
        int32_t l_112 = 0xEE3BABBDL;
        int32_t l_113 = 0x0A16214FL;
        int32_t l_114 = 0x72F399B0L;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_68[i][j][k] = 7L;
            }
        }
        --g_76;
        if (l_75[0][0])
        { 
            int64_t l_79 = 0L;
            l_79 = 0x30D26BC8L;
            g_92 &= ((((((l_70 = 0xE3B40BBFL) <= (((((((p_18 = (safe_rshift_func_uint8_t_u_u((g_84[1] , (safe_div_func_uint32_t_u_u((g_5.f0 <= (safe_sub_func_int16_t_s_s(((l_71 = ((safe_rshift_func_int8_t_s_u((-1L), p_19.f0.f2)) != p_19.f0.f2)) && (-10L)), 0x0857L))), g_56.f0.f3))), g_56.f0.f3))) >= l_75[0][0]) == 0x9FCDL) , 0UL) || l_91) != p_19.f0.f1) < l_79)) < 0x45B3L) , p_18) >= g_56.f0.f0) || p_19.f0.f1);
            l_72 = (-1L);
        }
        else
        { 
            for (g_73 = 25; (g_73 >= 7); g_73--)
            { 
                g_95 = g_67;
                return g_5.f2;
            }
            g_106 = (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(((((safe_lshift_func_int8_t_s_s((0x7072EE8FFC0A9984LL != ((p_18 <= l_91) == (safe_mod_func_int64_t_s_s(p_19.f0.f0, g_56.f0.f0)))), g_76)) , 0L) == l_75[0][1]) , g_5.f3), 0x2E186B95L)), 14)) , 0xF14DL), g_66));
        }
        ++l_115;
    }
    else
    { 
        const int16_t l_122 = 0xF146L;
        g_108[0] = (p_19.f0.f2 != ((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_s(l_122, (safe_mul_func_uint8_t_u_u(l_75[0][0], g_5.f3)))) && p_20) < 1UL), 13)) <= 9UL));
    }
    return g_56.f0.f3;
}



static const uint16_t  func_23(int16_t  p_24, uint32_t  p_25, uint32_t  p_26)
{ 
    int16_t l_49 = 0xE17CL;
    uint8_t l_52[2];
    int32_t l_53 = 6L;
    int32_t l_54 = (-10L);
    uint64_t l_55 = 1UL;
    int i;
    for (i = 0; i < 2; i++)
        l_52[i] = 0xEBL;
    l_55 ^= (((l_54 = (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(4294967290UL, ((0xE7A4860CL <= ((l_49 && ((safe_mul_func_uint8_t_u_u(0x2CL, l_52[0])) ^ 0xFFL)) >= l_53)) && g_5.f0))), 0x5D74L)), p_26)), p_24)) , p_26), l_52[0])), 0x61L)) & p_26), l_53)), p_25))) ^ (-1L)) & l_49);
    return p_26;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    transparent_crc(g_5.f1, "g_5.f1", print_hash_value);
    transparent_crc(g_5.f2, "g_5.f2", print_hash_value);
    transparent_crc(g_5.f3, "g_5.f3", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_56.f0.f0, "g_56.f0.f0", print_hash_value);
    transparent_crc(g_56.f0.f1, "g_56.f0.f1", print_hash_value);
    transparent_crc(g_56.f0.f2, "g_56.f0.f2", print_hash_value);
    transparent_crc(g_56.f0.f3, "g_56.f0.f3", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);

    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_108[i], "g_108[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
