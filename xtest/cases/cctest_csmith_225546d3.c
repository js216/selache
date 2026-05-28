// SPDX-License-Identifier: MIT
// cctest_csmith_225546d3.c --- cctest case csmith_225546d3 (csmith seed 576014035)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5333d6cb */
/* @exp_ticks 0x4fac */

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

// Options:   -s 576014035 -o /tmp/csmith_gen_tcs47jap/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int64_t  f1;
   int32_t  f2;
   uint32_t  f3;
   uint64_t  f4;
   const int32_t  f5;
   uint16_t  f6;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   uint8_t  f1;
   uint16_t  f2;
   const int32_t  f3;
};


static int32_t g_2 = 0xCBD94543L;
static int32_t g_5[1] = {5L};
static uint64_t g_72 = 0xE1FE01AF02C19944LL;
static int32_t * const *g_73 = (void*)0;
static uint32_t g_78 = 0xBCC772A3L;
static int64_t g_103 = 0L;
static int64_t g_105 = 0x63ADB0B63B589502LL;
static int8_t g_107 = 0xF4L;
static uint8_t g_111 = 1UL;
static uint64_t *g_115[3] = {&g_72,&g_72,&g_72};
static uint64_t **g_114[3] = {&g_115[1],&g_115[1],&g_115[1]};
static int32_t *g_136 = &g_5[0];
static int32_t **g_135 = &g_136;
static int32_t g_144 = (-1L);
static int16_t g_146 = 0x1987L;
static int32_t g_149[6][3][2] = {{{3L,3L},{3L,3L},{3L,3L}},{{3L,3L},{3L,3L},{3L,3L}},{{3L,3L},{3L,3L},{3L,3L}},{{3L,3L},{3L,3L},{3L,3L}},{{3L,3L},{3L,3L},{3L,3L}},{{3L,3L},{3L,3L},{3L,3L}}};
static uint32_t g_153 = 0x73882F6EL;
static const int32_t ***g_157[3] = {(void*)0,(void*)0,(void*)0};
static const int32_t ****g_156 = &g_157[2];
static union U1 g_163 = {1UL};
static uint16_t g_176 = 0xE03FL;
static struct S0 g_203 = {4294967295UL,0x9046FCD8936FAD9ALL,1L,0x0526A7B9L,1UL,0x628C784CL,0UL};
static const int16_t g_235 = (-7L);
static int64_t ** const g_250 = (void*)0;
static struct S0 g_281 = {0x957BA36AL,0x8F9A5DA1887DB847LL,6L,7UL,0xA302A7C8BD037EF7LL,5L,0x9BACL};
static uint64_t g_340[4][4] = {{0UL,0x3905B0FB90ED740BLL,0UL,0x3905B0FB90ED740BLL},{0x3905B0FB90ED740BLL,18446744073709551615UL,0UL,0UL},{0UL,0UL,0x3905B0FB90ED740BLL,0UL},{7UL,18446744073709551615UL,7UL,0x3905B0FB90ED740BLL}};
static uint32_t g_448[2][2] = {{0x9928AC36L,0x9928AC36L},{0x9928AC36L,0x9928AC36L}};
static int32_t * const *** const g_483 = (void*)0;
static int32_t * const *** const * const g_482 = &g_483;
static int32_t *g_539 = (void*)0;
static int32_t **g_538[7][5][3] = {{{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539}},{{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539}},{{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539}},{{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539}},{{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539}},{{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539}},{{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539},{&g_539,&g_539,&g_539}}};
static union U1 *g_611 = &g_163;
static union U1 **g_610[7][1][1] = {{{&g_611}},{{(void*)0}},{{&g_611}},{{(void*)0}},{{&g_611}},{{(void*)0}},{{&g_611}}};
static uint16_t *g_648[5][4][4] = {{{&g_281.f6,&g_163.f2,(void*)0,&g_281.f6},{(void*)0,&g_163.f2,&g_163.f2,&g_281.f6},{&g_176,&g_163.f2,&g_281.f6,(void*)0},{&g_163.f2,(void*)0,&g_203.f6,&g_176}},{{(void*)0,&g_281.f6,(void*)0,&g_281.f6},{(void*)0,(void*)0,&g_176,&g_281.f6},{(void*)0,(void*)0,&g_281.f6,(void*)0},{&g_281.f6,&g_163.f2,&g_281.f6,&g_176}},{{(void*)0,&g_281.f6,&g_176,&g_163.f2},{(void*)0,&g_203.f6,(void*)0,(void*)0},{(void*)0,(void*)0,&g_203.f6,(void*)0},{&g_163.f2,&g_176,&g_281.f6,(void*)0}},{{&g_176,&g_281.f6,&g_163.f2,&g_281.f6},{(void*)0,&g_281.f6,(void*)0,(void*)0},{&g_281.f6,&g_176,(void*)0,(void*)0},{&g_281.f6,&g_203.f6,&g_281.f6,&g_203.f6}},{{&g_281.f6,&g_163.f2,&g_281.f6,&g_163.f2},{(void*)0,&g_176,&g_281.f6,(void*)0},{&g_281.f6,&g_203.f6,&g_176,&g_281.f6},{&g_281.f6,(void*)0,&g_281.f6,(void*)0}}};
static uint16_t **g_647 = &g_648[1][1][2];
static uint16_t ***g_646 = &g_647;
static int64_t **g_670 = (void*)0;
static int64_t ***g_669 = &g_670;
static int64_t ****g_668 = &g_669;
static int16_t g_682[4][7] = {{0x0E27L,0L,0x0E27L,0x7E05L,0x7E05L,0x0E27L,0L},{0x7E05L,0L,0x7CBBL,0x7CBBL,0L,0x7E05L,0L},{0x0E27L,0x7E05L,0x7E05L,0x0E27L,0L,0x0E27L,0x7E05L},{(-1L),(-1L),0x7E05L,0x7CBBL,0x7E05L,(-1L),(-1L)}};



static int32_t  func_1(void);
static int32_t * func_8(const int32_t * p_9, int32_t * p_10, int32_t * const  p_11, uint32_t  p_12, int32_t * p_13);
static const int32_t * func_14(int32_t * p_15, uint16_t  p_16, int32_t * p_17, uint8_t  p_18, const int32_t * p_19);
static int32_t * func_21(int64_t  p_22, union U1  p_23);
static union U1  func_24(int32_t * p_25, int32_t * p_26);
static int32_t ** func_28(int32_t ** p_29, const uint64_t  p_30, int16_t  p_31);
static int32_t ** func_32(int8_t  p_33, uint64_t  p_34, int32_t  p_35, int32_t * p_36);
static int8_t  func_37(const int16_t  p_38, int32_t * const * const  p_39, int32_t * const * p_40, int32_t  p_41, const int16_t  p_42);




static int32_t  func_1(void)
{ 
    uint16_t l_529 = 0UL;
    int32_t l_547 = 5L;
    struct S0 *l_573 = &g_281;
    int64_t l_576 = 0x8C7E65246F871A29LL;
    const int32_t l_614[1][7] = {{1L,1L,1L,1L,1L,1L,1L}};
    int8_t l_663 = (-1L);
    union U1 l_680[6][7] = {{{0x8844209FL},{7UL},{0x8844209FL},{0UL},{0UL},{0x8844209FL},{7UL}},{{3UL},{0xD86F3C26L},{0x96A95726L},{0x96A95726L},{0xD86F3C26L},{3UL},{0xD86F3C26L}},{{0x8844209FL},{0UL},{0UL},{0x8844209FL},{7UL},{0x8844209FL},{0UL}},{{0x2CD31C63L},{0x2CD31C63L},{3UL},{0x96A95726L},{3UL},{0x2CD31C63L},{0x2CD31C63L}},{{4294967295UL},{0UL},{0x885E292EL},{0UL},{4294967295UL},{4294967295UL},{0UL}},{{1UL},{0xD86F3C26L},{1UL},{3UL},{3UL},{1UL},{0xD86F3C26L}}};
    int i, j;
    for (g_2 = (-28); (g_2 <= (-23)); g_2 = safe_add_func_int64_t_s_s(g_2, 2))
    { 
        uint8_t l_20[2][1];
        uint16_t *l_524 = &g_281.f6;
        uint16_t **l_523 = &l_524;
        int32_t l_535 = 0x03E10B3BL;
        uint8_t l_551 = 6UL;
        int16_t l_555 = 0x56ADL;
        int32_t * const l_577 = &g_5[0];
        int32_t l_619 = 0xEA57FB35L;
        uint64_t *l_654 = (void*)0;
        const union U1 l_665 = {2UL};
        uint64_t l_667 = 18446744073709551606UL;
        uint16_t l_677[1][1];
        int32_t *l_681 = &l_547;
        const int32_t *l_684 = &g_5[0];
        const int32_t **l_683 = &l_684;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_20[i][j] = 255UL;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_677[i][j] = 0xB97FL;
        }
        for (g_5[0] = 0; (g_5[0] >= (-27)); g_5[0] = safe_sub_func_int64_t_s_s(g_5[0], 9))
        { 
            int32_t *l_27 = &g_5[0];
            int32_t * const l_380 = &g_5[0];
            int32_t **l_522 = &g_136;
            union U1 ** const l_612 = &g_611;
            int64_t *l_622 = (void*)0;
            int64_t **l_621 = &l_622;
            int64_t ***l_620 = &l_621;
        }
        for (g_203.f6 = 0; (g_203.f6 <= 1); g_203.f6 += 1)
        { 
            uint32_t l_625 = 1UL;
            union U1 l_641[2] = {{1UL},{1UL}};
            uint32_t l_664 = 0UL;
            int8_t l_666 = 0L;
            int i;
            --l_625;
            for (g_153 = 0; (g_153 <= 1); g_153 += 1)
            { 
                uint16_t ***l_629 = &l_523;
                uint16_t ****l_628 = &l_629;
                int32_t ***l_638 = &g_538[4][3][2];
                int32_t l_642 = 0x3202596FL;
                int32_t l_643 = 0xBE5EE560L;
                uint8_t *l_644 = &l_551;
                int8_t *l_645 = &g_107;
                uint64_t *l_653 = &g_340[1][1];
                int64_t *****l_671 = &g_668;
                uint8_t l_678[3][4][5] = {{{1UL,0UL,1UL,2UL,1UL},{0x81L,0x81L,0xE4L,250UL,0xBEL},{0x25L,2UL,1UL,2UL,0x25L},{0xBEL,250UL,0xE4L,0x81L,0x81L}},{{1UL,2UL,1UL,0UL,1UL},{0xBEL,0x81L,250UL,250UL,0x81L},{0x25L,0UL,1UL,0UL,0x25L},{0x81L,250UL,250UL,0x81L,0xBEL}},{{1UL,0UL,1UL,2UL,1UL},{0x81L,0x81L,0xE4L,250UL,0xBEL},{0x25L,2UL,1UL,2UL,0x25L},{0xBEL,250UL,0xE4L,0x81L,0x81L}}};
                int32_t *l_679[7] = {&l_643,&l_643,(void*)0,&l_643,&l_643,(void*)0,&l_643};
                int i, j, k;
            }
            return (*l_577);
        }
        if (l_663)
            break;
        (*l_683) = func_14(l_681, l_547, &l_547, (5L && ((g_281.f4 != (*l_577)) & ((((l_663 && l_529) <= (*l_681)) >= g_111) > g_682[0][4]))), (*g_135));
    }
    return l_663;
}



static int32_t * func_8(const int32_t * p_9, int32_t * p_10, int32_t * const  p_11, uint32_t  p_12, int32_t * p_13)
{ 
    uint16_t l_385 = 0x3BB7L;
    struct S0 l_407 = {0x68AA100AL,-6L,0x130A7D56L,0xFC3FBF60L,1UL,-1L,0xCBE6L};
    int32_t * const **l_415 = (void*)0;
    int32_t * const ***l_416 = &l_415;
    const int32_t ****l_419 = &g_157[1];
    uint16_t l_443[5][5][7] = {{{0xC683L,0xB152L,0x410FL,4UL,3UL,8UL,0xC683L},{8UL,0x92A1L,65535UL,3UL,0x9CEBL,8UL,0x410FL},{3UL,7UL,0xAF48L,0xFB7BL,0xFB7BL,0xAF48L,7UL},{0x92A1L,0xCDA1L,1UL,0xDA16L,65530UL,9UL,0xC3D2L},{0xF848L,65535UL,0UL,2UL,0xB152L,0xE666L,0xAF48L}},{{0x410FL,3UL,0x1ADBL,0xDA16L,65535UL,0xFB7BL,65527UL},{65527UL,0xAF48L,0x1D7CL,0xCCE9L,0xA323L,0xAF48L,0xCCE9L},{0xF848L,8UL,0xE666L,9UL,0xCCE9L,2UL,0xDA99L},{0xCCE9L,8UL,0xB154L,0xCDA1L,0xC3D2L,0x1ADBL,0xC3D2L},{6UL,0xAF48L,0xAF48L,6UL,65530UL,0xF848L,65535UL}},{{0x2744L,3UL,9UL,0x1D7CL,9UL,0x2744L,0xAF48L},{3UL,65535UL,0xB154L,0xCCE9L,65527UL,0xFB7BL,65535UL},{65535UL,0xDA99L,0xF848L,9UL,9UL,2UL,0xC3D2L},{0UL,0xB152L,1UL,0x1D7CL,0xB152L,0xAF48L,0xDA99L},{6UL,9UL,0x1ADBL,65535UL,0xB152L,1UL,0xCCE9L}},{{65527UL,0xAF48L,9UL,0xA9C3L,9UL,0xAF48L,65527UL},{0x2744L,0xCCE9L,0x9F26L,9UL,65527UL,0xA323L,0xAF48L},{0UL,8UL,1UL,65535UL,9UL,1UL,0xC3D2L},{65535UL,0xDA99L,0x9F26L,0xCDA1L,65530UL,0UL,0xB152L},{0xF848L,9UL,9UL,2UL,0xC3D2L,0xF848L,0xAF48L}},{{3UL,0x410FL,0x1ADBL,0xA9C3L,0xCCE9L,0xFB7BL,0x410FL},{3UL,0xAF48L,1UL,9UL,0xA323L,0xA323L,9UL},{0xF848L,0xB152L,0xF848L,9UL,65535UL,0xE666L,0xDA99L},{65535UL,0xC3D2L,0xB154L,0xDA16L,0xB152L,0x1ADBL,8UL},{0UL,0xAF48L,9UL,0UL,65530UL,0xE666L,0xCCE9L}}};
    int32_t *l_469 = &g_149[0][2][0];
    uint8_t l_481 = 0x10L;
    uint8_t l_498 = 0x42L;
    int64_t *l_508 = &g_281.f1;
    int i, j, k;
lbl_417:
    for (g_103 = 0; (g_103 == (-24)); g_103 = safe_sub_func_uint32_t_u_u(g_103, 6))
    { 
        const int16_t *l_388 = &g_146;
        int16_t *l_389 = &g_146;
        int16_t **l_390 = &l_389;
        uint32_t *l_392 = &g_163.f0;
        uint32_t *l_393 = &g_203.f0;
        uint32_t *l_394[1][6][1] = {{{&g_281.f0},{&g_78},{&g_281.f0},{&g_78},{&g_281.f0},{&g_78}}};
        int32_t l_395[3][3] = {{0xF643F4A5L,0xF643F4A5L,0xF643F4A5L},{0L,0L,0L},{0xF643F4A5L,0xF643F4A5L,0xF643F4A5L}};
        int32_t l_396[4];
        struct S0 *l_397 = (void*)0;
        struct S0 **l_398 = &l_397;
        int32_t *l_414 = &g_149[1][2][0];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_396[i] = (-3L);
        g_281.f2 = ((safe_add_func_uint32_t_u_u(((*l_392) = (l_395[1][0] |= ((*l_393) |= ((*p_10) > ((l_385 > (g_281 , ((safe_lshift_func_uint16_t_u_s((((l_385 , l_388) == ((*l_390) = l_389)) || (~0xAAL)), 9)) ^ 6L))) , 1UL))))), l_396[1])) , 1L);
        (*l_398) = l_397;
        for (g_107 = 0; g_107 < 1; g_107 += 1)
        {
            for (g_203.f0 = 0; g_203.f0 < 6; g_203.f0 += 1)
            {
                for (g_203.f3 = 0; g_203.f3 < 1; g_203.f3 += 1)
                {
                    l_394[g_107][g_203.f0][g_203.f3] = &g_78;
                }
            }
        }
        (*l_414) = ((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((void*)0 == &g_250) == (g_111 = ((safe_add_func_uint8_t_u_u(p_12, g_281.f3)) >= (safe_rshift_func_uint8_t_u_s((l_407 , (((safe_mod_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(p_12, 0)) ^ ((((*l_392) = ((safe_div_func_int8_t_s_s(l_396[1], 0x19L)) , 0x602BFDE3L)) | l_395[1][0]) , l_396[2])) <= l_407.f2), 0xBFL)) && g_5[0]) , 0x81L)), 5))))), g_2)), p_12)) | (-9L));
    }
    (*l_416) = l_415;
    for (g_111 = 0; (g_111 <= 3); g_111 += 1)
    { 
        uint8_t l_444 = 6UL;
        uint16_t l_445 = 0xA74FL;
        int16_t l_467 = 0x2A43L;
        int32_t l_468[4][6] = {{0xDFA22C5CL,0xDFA22C5CL,0x4CBE2A2AL,(-5L),0x4CBE2A2AL,0xDFA22C5CL},{0x4CBE2A2AL,0x678FCACFL,(-5L),(-5L),0x678FCACFL,0x4CBE2A2AL},{0xDFA22C5CL,0x4CBE2A2AL,(-5L),0x4CBE2A2AL,0xDFA22C5CL,0xDFA22C5CL},{(-1L),0x4CBE2A2AL,0x4CBE2A2AL,(-1L),0x678FCACFL,(-1L)}};
        union U1 l_484[1] = {{0xB1D6F4CEL}};
        uint64_t **l_502 = &g_115[1];
        int64_t *l_509 = &g_281.f1;
        int32_t **l_517 = &l_469;
        int i, j;
        (*g_135) = (*g_135);
        if (g_111)
            goto lbl_417;
        for (l_407.f3 = 0; (l_407.f3 <= 2); l_407.f3 += 1)
        { 
            return (*g_135);
        }
        for (g_203.f0 = 0; (g_203.f0 <= 2); g_203.f0 += 1)
        { 
            int32_t l_446 = 0x50DB929BL;
            int i, j;
            if (g_340[(g_203.f0 + 1)][g_203.f0])
                break;
            for (g_144 = 2; (g_144 >= 0); g_144 -= 1)
            { 
                const int32_t *****l_418[5][5] = {{&g_156,&g_156,&g_156,&g_156,&g_156},{&g_156,&g_156,&g_156,&g_156,&g_156},{(void*)0,(void*)0,&g_156,(void*)0,(void*)0},{&g_156,(void*)0,&g_156,(void*)0,&g_156},{&g_156,&g_156,&g_156,(void*)0,&g_156}};
                int32_t *l_420 = &g_203.f2;
                int16_t *l_422 = &g_146;
                union U1 l_441[5] = {{0UL},{0UL},{0UL},{0UL},{0UL}};
                int16_t l_442 = 0x8149L;
                int8_t *l_447 = &g_107;
                int i, j;
                l_419 = &g_157[2];
                (*l_420) &= (l_407.f2 = g_340[g_144][g_144]);
                g_149[2][1][0] = ((!((*l_422) = p_12)) , (safe_mul_func_uint16_t_u_u(((g_448[1][0] |= (((*l_447) |= ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(0x59169287FFDB3A37LL, (((4L && (((g_340[g_111][(g_203.f0 + 1)] = (*l_420)) , (((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((+(safe_lshift_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((((((((-1L) >= ((l_441[0] , (1UL && l_442)) == g_281.f2)) ^ l_443[2][1][1]) ^ 0L) <= g_340[(g_203.f0 + 1)][g_203.f0]) & 6L) , 0x0D51D8DA9810C119LL))), 0xAE07L)) && 1UL) | g_235), 2))) < l_444), g_203.f6)) != g_340[(g_203.f0 + 1)][g_203.f0]), 15)), 1UL)) && g_111) , l_445)) ^ l_446)) , l_446) < g_203.f4))), 0)) , l_444)) >= 0x80L)) , (*l_420)), 0x096CL)));
            }
            if (l_446)
            { 
                (*g_135) = (void*)0;
            }
            else
            { 
                int32_t *l_449 = &g_149[1][1][0];
                int8_t *l_454[6][7][2] = {{{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107}},{{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107}},{{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107}},{{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107}},{{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107}},{{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107},{&g_107,&g_107}}};
                int i, j, k;
                l_468[2][3] = (((((*l_449) = (-10L)) != ((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((p_12 , (((l_446 &= l_444) > ((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(1UL, p_12)), (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(p_12, ((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(p_12, (*p_11))), 5UL)) == g_340[(g_203.f0 + 1)][g_203.f0]))), 15)))) ^ 0UL)) ^ 6UL)) && g_203.f4), l_467)), p_12)) && p_12)) | g_203.f5) & 0UL);
                return l_469;
            }
        }
        if (((*l_469) = 0xB8DC3ABDL))
        { 
            const int64_t l_470[4][5][1] = {{{(-1L)},{0xEAB870259445804DLL},{0x1D335756EA7A8DA6LL},{0xC1E21A49FD5ED30FLL},{0xC1E21A49FD5ED30FLL}},{{0x1D335756EA7A8DA6LL},{0xEAB870259445804DLL},{(-1L)},{0x1D335756EA7A8DA6LL},{(-1L)}},{{0xEAB870259445804DLL},{0x1D335756EA7A8DA6LL},{0xC1E21A49FD5ED30FLL},{0xC1E21A49FD5ED30FLL},{0x1D335756EA7A8DA6LL}},{{0xEAB870259445804DLL},{(-1L)},{0x1D335756EA7A8DA6LL},{(-1L)},{0xEAB870259445804DLL}}};
            uint64_t **l_501 = &g_115[1];
            int64_t **l_510 = (void*)0;
            int64_t **l_511 = &l_509;
            int32_t *l_512 = &l_407.f2;
            int32_t ***l_518[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_518[i] = &l_517;
            (*l_469) = l_470[3][4][0];
            if (l_470[3][4][0])
                break;
            (*g_135) = func_21(((((safe_lshift_func_uint16_t_u_s(8UL, 6)) > (((safe_mul_func_int8_t_s_s((((safe_mod_func_int8_t_s_s(p_12, 0x90L)) , ((safe_div_func_uint64_t_u_u(p_12, p_12)) != (((safe_add_func_uint64_t_u_u((*l_469), (*l_469))) , l_481) , 0xDC3CL))) != g_281.f6), g_281.f0)) ^ (-1L)) && p_12)) , g_482) == &l_419), l_484[0]);
            (*l_512) = (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((((((((safe_lshift_func_int16_t_s_u((g_146 = (safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((1L ^ ((+l_498) | ((safe_div_func_int32_t_s_s(((*l_469) = (((g_203.f6 < ((l_501 == l_502) & (safe_mod_func_uint32_t_u_u((!(safe_sub_func_int32_t_s_s(((l_468[2][3] |= ((l_508 = &g_105) == ((*l_511) = l_509))) <= l_470[3][4][0]), g_103))), (*p_9))))) && 0x0DL) <= g_203.f2)), 0x1E3F1E1FL)) < g_144))), 0x90FA1D4F467D6758LL)) >= g_281.f0), 0x28L)), p_12))), 0)) || l_484[0].f1) , p_12) , p_12) >= g_235) & l_470[3][4][0]) , g_176) ^ p_12), p_12)), 0UL));
            g_73 = l_517;
        }
        else
        { 
            (**l_517) = (*p_9);
        }
        for (l_445 = 0; (l_445 <= 3); l_445 += 1)
        { 
            int64_t **l_520 = &l_509;
            int64_t ***l_519 = &l_520;
            int64_t ****l_521 = &l_519;
            g_203.f2 &= (**l_517);
            (*l_521) = l_519;
        }
    }
    if (g_281.f0)
        goto lbl_417;
    return p_10;
}



static const int32_t * func_14(int32_t * p_15, uint16_t  p_16, int32_t * p_17, uint8_t  p_18, const int32_t * p_19)
{ 
    int32_t *l_379[7][7] = {{&g_281.f2,(void*)0,&g_281.f2,(void*)0,&g_281.f2,(void*)0,&g_281.f2},{&g_5[0],&g_281.f2,&g_281.f2,&g_5[0],&g_5[0],&g_281.f2,&g_281.f2},{&g_203.f2,(void*)0,&g_203.f2,(void*)0,&g_203.f2,(void*)0,&g_203.f2},{&g_5[0],&g_5[0],&g_281.f2,&g_281.f2,&g_5[0],&g_5[0],&g_281.f2},{&g_281.f2,(void*)0,&g_281.f2,(void*)0,&g_281.f2,(void*)0,&g_281.f2},{&g_5[0],&g_281.f2,&g_281.f2,&g_5[0],&g_5[0],&g_281.f2,&g_281.f2},{&g_203.f2,(void*)0,&g_203.f2,(void*)0,&g_203.f2,(void*)0,&g_203.f2}};
    int i, j;
    l_379[1][6] = (*g_135);
    return p_17;
}



static int32_t * func_21(int64_t  p_22, union U1  p_23)
{ 
    int16_t l_174 = 0xA617L;
    int32_t *l_185[7];
    int8_t l_211 = 0xBCL;
    int8_t l_231[7];
    int32_t *l_245 = &g_144;
    uint64_t l_261 = 0xE88ADF64CAFF8545LL;
    uint64_t **l_371 = (void*)0;
    int8_t l_374 = 0xAEL;
    int32_t l_375 = 0xADBEB126L;
    uint32_t l_376 = 3UL;
    int i;
    for (i = 0; i < 7; i++)
        l_185[i] = &g_149[0][2][0];
    for (i = 0; i < 7; i++)
        l_231[i] = 0xD6L;
    for (g_163.f2 = 0; (g_163.f2 <= 2); g_163.f2 += 1)
    { 
        uint16_t *l_175 = &g_176;
        uint8_t l_177 = 0x19L;
        int32_t l_178 = 1L;
        int32_t l_206[7][4][3] = {{{0xDD94FB20L,(-3L),0xEA5775FDL},{0x88CA9980L,0x0C7B2332L,0x529D5842L},{0xEA5775FDL,0xFD19F04FL,0x39752E2FL},{0xED89F813L,0x0C7B2332L,0x3672261EL}},{{0x85376664L,0x85376664L,0xEA5775FDL},{0x529D5842L,1L,(-9L)},{0xFD19F04FL,0x85376664L,0xFD19F04FL},{0x134CBB60L,0x0C7B2332L,0x125FC94FL}},{{0xDD94FB20L,0xFD19F04FL,0xFD19F04FL},{0x125FC94FL,1L,(-9L)},{(-1L),0xDD94FB20L,0xEA5775FDL},{0x125FC94FL,2L,0x3672261EL}},{{0xDD94FB20L,(-1L),0x39752E2FL},{0x134CBB60L,2L,0x134CBB60L},{0xFD19F04FL,0xDD94FB20L,0x85376664L},{0x529D5842L,1L,0x134CBB60L}},{{0x85376664L,0xFD19F04FL,0x39752E2FL},{0xED89F813L,0x0C7B2332L,0x3672261EL},{0x85376664L,0x85376664L,0xEA5775FDL},{0x529D5842L,1L,(-9L)}},{{0xFD19F04FL,0x85376664L,0xFD19F04FL},{0x134CBB60L,0x0C7B2332L,0x125FC94FL},{0xDD94FB20L,0xFD19F04FL,0xFD19F04FL},{0x125FC94FL,1L,(-9L)}},{{(-1L),0xDD94FB20L,0xEA5775FDL},{0x125FC94FL,2L,0x3672261EL},{0xDD94FB20L,(-1L),0x39752E2FL},{0x134CBB60L,2L,0x134CBB60L}}};
        uint64_t l_212 = 0x12CEF54B6F45FEBALL;
        int8_t *l_227 = &g_107;
        int32_t *l_243 = &g_144;
        uint16_t **l_259 = (void*)0;
        uint16_t **l_260[3];
        struct S0 *l_280 = &g_281;
        uint64_t **l_346 = &g_115[2];
        int64_t *l_356 = &g_281.f1;
        int32_t l_372 = 0L;
        int32_t l_373 = 0xBF9ADAF3L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_260[i] = &l_175;
    }
    return (*g_135);
}



static union U1  func_24(int32_t * p_25, int32_t * p_26)
{ 
    int32_t l_55 = (-8L);
    struct S0 l_69 = {0UL,5L,7L,0xEE35D5D9L,18446744073709551615UL,0L,0x0B8AL};
    int32_t *l_70 = &g_2;
    uint64_t *l_71 = &g_72;
    int32_t l_74 = (-9L);
    int32_t ***l_162 = &g_135;
    (*l_162) = func_28(func_32(func_37((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(1UL, (safe_mod_func_int8_t_s_s((safe_sub_func_int64_t_s_s(5L, g_5[0])), l_55)))), ((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((+((*l_71) |= (((safe_sub_func_int64_t_s_s(((safe_add_func_int8_t_s_s(((((l_69 , l_70) != l_70) , 0xEBL) == g_2), 0x1BL)) , (*l_70)), (*l_70))) | g_2) | g_2))), 6)), (*l_70))) || (*l_70)), (*l_70))), 2)) >= (*l_70)))) & (-5L)) <= (*l_70)), g_5[0])) >= 5L), (*l_70))), &l_70, g_73, l_74, g_2), (*l_70), (*p_26), p_26), (*l_70), (*l_70));
    return g_163;
}



static int32_t ** func_28(int32_t ** p_29, const uint64_t  p_30, int16_t  p_31)
{ 
    int32_t *l_143 = &g_144;
    int16_t *l_145 = &g_146;
    int32_t *l_147 = (void*)0;
    int32_t *l_148 = &g_149[0][2][0];
    int32_t *l_150[6];
    int64_t l_151 = 0L;
    int8_t l_152[1];
    const int32_t *****l_158 = &g_156;
    int i;
    for (i = 0; i < 6; i++)
        l_150[i] = &g_149[0][2][0];
    for (i = 0; i < 1; i++)
        l_152[i] = 0xBBL;
    (*l_148) |= (0x5461874A806017ABLL <= (((**p_29) != ((safe_mul_func_int8_t_s_s((3UL <= ((safe_lshift_func_uint8_t_u_s(4UL, ((safe_unary_minus_func_int64_t_s((+((*l_145) = (((*l_143) = ((p_30 >= g_107) , p_30)) , p_30))))) < (-1L)))) != 4UL)), g_103)) >= p_31)) , 0xD6F0B373E231492ELL));
    g_153--;
    (*l_158) = g_156;
    for (g_144 = 8; (g_144 == (-13)); --g_144)
    { 
        uint8_t l_161 = 255UL;
        (*l_148) = l_161;
    }
    return p_29;
}



static int32_t ** func_32(int8_t  p_33, uint64_t  p_34, int32_t  p_35, int32_t * p_36)
{ 
    int8_t *l_116 = &g_107;
    int32_t l_117 = 0x8E5C8A68L;
    int64_t l_133 = 0x03F4AE4FB5D94593LL;
    int32_t *l_134[2][4][5] = {{{&g_5[0],&g_5[0],&g_2,&l_117,&g_5[0]},{&g_5[0],&l_117,&g_5[0],&l_117,&g_5[0]},{&g_5[0],&l_117,&g_2,&g_5[0],&g_5[0]},{&l_117,&l_117,&l_117,&g_5[0],&l_117}},{{&g_5[0],&g_5[0],&l_117,&l_117,&g_5[0]},{&g_5[0],&g_5[0],&g_5[0],&g_5[0],&g_5[0]},{&g_5[0],&l_117,&l_117,&g_5[0],&g_5[0]},{&l_117,&g_5[0],&l_117,&l_117,&l_117}}};
    int i, j, k;
    l_117 = (l_116 == &p_33);
    for (p_34 = 0; (p_34 >= 48); p_34 = safe_add_func_int32_t_s_s(p_34, 8))
    { 
        int32_t *l_120 = &g_2;
        int32_t **l_121 = &l_120;
        int64_t *l_128[5] = {&g_105,&g_105,&g_105,&g_105,&g_105};
        int i;
        (*l_121) = l_120;
        for (g_105 = (-20); (g_105 < 14); g_105 = safe_add_func_uint32_t_u_u(g_105, 1))
        { 
            int64_t **l_129 = &l_128[1];
            int32_t l_132 = 6L;
            l_133 = (0x7058F739L & (safe_lshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((((*l_129) = l_128[1]) != (void*)0) || ((((safe_mul_func_int8_t_s_s(l_117, g_107)) >= g_107) , ((l_132 = 0UL) == g_5[0])) && (*p_36))), p_35)), 11)));
            if (l_133)
                continue;
        }
    }
    l_134[0][0][2] = &p_35;
    return g_135;
}



static int8_t  func_37(const int16_t  p_38, int32_t * const * const  p_39, int32_t * const * p_40, int32_t  p_41, const int16_t  p_42)
{ 
    int32_t l_76 = 0x42B08F18L;
    uint32_t *l_77[3][2] = {{&g_78,&g_78},{&g_78,&g_78},{&g_78,&g_78}};
    int32_t *l_95[1];
    int32_t **l_94[2][6][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int32_t l_108 = 0x687144B0L;
    uint32_t l_109 = 0x50E9BCC6L;
    uint64_t *l_113 = &g_72;
    uint64_t ** const l_112 = &l_113;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_95[i] = &g_5[0];
    if ((!(g_78 = l_76)))
    { 
        int32_t **l_89 = (void*)0;
        int32_t ***l_90 = &l_89;
        int32_t *l_93 = &g_5[0];
        int32_t **l_92 = &l_93;
        int32_t ***l_91 = &l_92;
        int64_t *l_102 = &g_103;
        int64_t *l_104 = &g_105;
        int8_t *l_106[4][4] = {{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107}};
        int32_t l_110 = 0xA5920033L;
        int i, j;
        for (l_76 = 0; l_76 < 3; l_76 += 1)
        {
            for (p_41 = 0; p_41 < 2; p_41 += 1)
            {
                l_77[l_76][p_41] = &g_78;
            }
        }
        l_110 ^= ((g_107 |= (l_108 = (((safe_mod_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(g_5[0], ((safe_sub_func_uint32_t_u_u(0x81B38C87L, ((p_41 <= (safe_mod_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u(0xFFL, (((((p_39 != (l_94[0][3][0] = ((*l_91) = ((*l_90) = l_89)))) , (safe_add_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((((*l_104) = ((*l_102) = (l_95[0] != &g_78))) | 0L), p_41)) || g_105) , p_41), g_2))) | p_38) ^ p_42) , g_2))) & p_42) , g_103), 0x631C0487L))) >= p_41))) , p_41))), p_41)) , p_42) != p_38))) , l_109);
    }
    else
    { 
        g_111 = (**p_39);
    }
    g_114[1] = l_112;
    return p_41;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);

    }
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_149[i][j][k], "g_149[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_163.f0, "g_163.f0", print_hash_value);
    transparent_crc(g_163.f1, "g_163.f1", print_hash_value);
    transparent_crc(g_163.f2, "g_163.f2", print_hash_value);
    transparent_crc(g_163.f3, "g_163.f3", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_203.f0, "g_203.f0", print_hash_value);
    transparent_crc(g_203.f1, "g_203.f1", print_hash_value);
    transparent_crc(g_203.f2, "g_203.f2", print_hash_value);
    transparent_crc(g_203.f3, "g_203.f3", print_hash_value);
    transparent_crc(g_203.f4, "g_203.f4", print_hash_value);
    transparent_crc(g_203.f5, "g_203.f5", print_hash_value);
    transparent_crc(g_203.f6, "g_203.f6", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_281.f0, "g_281.f0", print_hash_value);
    transparent_crc(g_281.f1, "g_281.f1", print_hash_value);
    transparent_crc(g_281.f2, "g_281.f2", print_hash_value);
    transparent_crc(g_281.f3, "g_281.f3", print_hash_value);
    transparent_crc(g_281.f4, "g_281.f4", print_hash_value);
    transparent_crc(g_281.f5, "g_281.f5", print_hash_value);
    transparent_crc(g_281.f6, "g_281.f6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_340[i][j], "g_340[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_448[i][j], "g_448[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_682[i][j], "g_682[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
