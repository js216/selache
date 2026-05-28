// SPDX-License-Identifier: MIT
// cctest_csmith_918ecaa3.c --- cctest case csmith_918ecaa3 (csmith seed 2442054307)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb0f57661 */
/* @exp_ticks 0x730f */

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

// Options:   -s 2442054307 -o /tmp/csmith_gen_o6bcmpi5/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int64_t  f1;
   const uint32_t  f2;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   uint32_t  f1;
   struct S0  f2;
   const int16_t  f3;
};

union U2 {
   uint16_t  f0;
   uint64_t  f1;
   const struct S0  f2;
};

union U3 {
   struct S0  f0;
};


static const union U3 g_13 = {{0x0F68L,0x29989D221E9C96C7LL,0UL}};
static int8_t g_24[5][2][3] = {{{(-6L),(-6L),(-6L)},{0L,0L,0L}},{{(-6L),(-6L),(-6L)},{0L,0L,0L}},{{(-6L),(-6L),(-6L)},{0L,0L,0L}},{{(-6L),(-6L),(-6L)},{0L,0L,0L}},{{(-6L),(-6L),(-6L)},{0L,0L,0L}}};
static int16_t g_26[3][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
static int32_t g_28 = 1L;
static uint32_t g_29 = 0xEB7E5950L;
static uint16_t g_47 = 65535UL;
static uint8_t g_49 = 3UL;
static uint8_t g_59[2][4][3] = {{{0x26L,251UL,0UL},{6UL,6UL,0xC9L},{0x2FL,251UL,251UL},{0xC9L,6UL,255UL}},{{0UL,0x26L,0UL},{0xC9L,0UL,255UL},{251UL,251UL,0x2FL},{5UL,0UL,0UL}}};
static int32_t g_77[3] = {0x549E1F9AL,0x549E1F9AL,0x549E1F9AL};
static uint32_t g_78 = 0x9CC38D24L;
static union U2 g_92 = {65535UL};
static uint16_t g_105 = 0xFECAL;
static int32_t g_116 = 0x977D5910L;
static uint32_t g_122[3][3][4] = {{{1UL,0x4E5F115DL,1UL,0x4E5F115DL},{1UL,0x4E5F115DL,1UL,0x4E5F115DL},{1UL,0x4E5F115DL,1UL,0x4E5F115DL}},{{1UL,0x4E5F115DL,1UL,0x4E5F115DL},{1UL,0x4E5F115DL,1UL,0x4E5F115DL},{1UL,0x4E5F115DL,1UL,0x4E5F115DL}},{{1UL,0x4E5F115DL,1UL,0x4E5F115DL},{1UL,0x4E5F115DL,1UL,0x4E5F115DL},{1UL,0x4E5F115DL,1UL,0x4E5F115DL}}};
static int16_t g_137 = (-10L);
static uint32_t g_142 = 0x65B027A9L;
static int32_t g_161[4][5][5] = {{{0x68DE4226L,9L,(-6L),0x1447C33EL,0x725B5AC0L},{0L,1L,2L,0xD65AA86CL,0x9946C551L},{0L,(-6L),1L,0x82C957D0L,0x68DE4226L},{0x68DE4226L,0x5E04E333L,0x5E04E333L,0x68DE4226L,1L},{(-6L),5L,1L,9L,0x2411E098L}},{{9L,(-9L),0x04E18E7CL,4L,0xA0ED4F26L},{0x04E18E7CL,0x2411E098L,0xCE53CA36L,9L,9L},{1L,0xE3AB8C6AL,(-1L),0x68DE4226L,9L},{0xCD857577L,0x85A69067L,1L,0x82C957D0L,(-8L)},{(-1L),(-1L),7L,0xD65AA86CL,0x04E18E7CL}},{{0x35E0B3DFL,(-1L),0x68DE4226L,0x1447C33EL,2L},{5L,0x85A69067L,(-8L),0x85A69067L,5L},{4L,0xE3AB8C6AL,0x1BEAA374L,(-6L),1L},{0x725B5AC0L,0x2411E098L,0x82C957D0L,5L,(-9L)},{0x5E04E333L,(-9L),9L,0xE3AB8C6AL,1L}},{{7L,5L,0x85A69067L,0L,5L},{1L,0x5E04E333L,1L,0xCE53CA36L,2L},{0L,(-6L),4L,0x0BBB056BL,0x04E18E7CL},{4L,1L,4L,0x2411E098L,(-8L)},{0x0BBB056BL,9L,1L,1L,9L}}};
static int32_t g_226 = 0xF27653A4L;
static union U1 g_227 = {-1L};
static int8_t g_240 = 0xFBL;
static uint8_t g_321 = 255UL;
static int16_t g_370 = 0x4CADL;



static uint8_t  func_1(void);
static int32_t  func_2(uint64_t  p_3, union U1  p_4);
static uint64_t  func_5(union U2  p_6, union U2  p_7, union U2  p_8, union U3  p_9);
static union U2  func_10(const union U3  p_11, int64_t  p_12);




static uint8_t  func_1(void)
{ 
    int16_t l_18 = 0x62A9L;
    int8_t l_22 = (-7L);
    int32_t l_23 = (-1L);
    union U2 l_119 = {0UL};
    const union U3 l_318 = {{3UL,-1L,4294967295UL}};
    const uint32_t l_326 = 4294967295UL;
    int32_t l_327 = 0xCC018C45L;
    int16_t l_368 = 1L;
    uint64_t l_396 = 0xC1C788502F33945ELL;
    int32_t l_404 = 0x21F01A02L;
    int32_t l_405 = 0L;
    g_161[3][0][1] = func_2((g_226 ^= func_5((func_10(g_13, (g_13.f0.f0 && (l_23 &= (safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s(l_18, (((l_22 &= ((safe_lshift_func_int8_t_s_u(((((~l_18) == 1UL) != l_18) , 0L), l_18)) || l_18)) & l_18) || g_13.f0.f1))), l_18))))) , l_119), g_92, g_92, g_13)), g_227);
    g_321 = (l_22 ^ (l_18 == (((safe_sub_func_uint64_t_u_u((g_92.f1 = ((l_318 , (~(~((0x6BL >= 1UL) , g_26[1][1])))) | 0x78L)), l_318.f0.f2)) < g_13.f0.f2) < g_78)));
    if ((l_119.f0 >= (((l_23 & (safe_div_func_uint16_t_u_u((g_13.f0.f2 == ((g_92.f1 = ((l_318.f0.f0 > l_23) == l_326)) == 0x172758BBC13778C5LL)), l_23))) && l_327) && 0L)))
    { 
        uint16_t l_341 = 0xEB71L;
        int32_t l_373 = 9L;
        int32_t l_375 = (-7L);
        int32_t l_395 = 1L;
        for (g_105 = (-26); (g_105 == 44); ++g_105)
        { 
            uint32_t l_369[1];
            int32_t l_371 = 0L;
            int32_t l_374 = 0L;
            int i;
            for (i = 0; i < 1; i++)
                l_369[i] = 0xB85CC2FBL;
        }
        g_161[2][2][2] = (safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((l_23 = (((!((l_119.f0 , ((((safe_mod_func_uint8_t_u_u((((((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(g_47)), ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((((g_92.f1 || (safe_mod_func_uint16_t_u_u(0xF185L, l_375))) && l_375) ^ l_373) <= g_13.f0.f0), g_122[1][2][2])) && 0x957603C5L), 0xB452L)) & g_13.f0.f2))) != g_137) || l_375) > g_227.f0) && g_24[3][0][1]), 0x3AL)) ^ l_327) != l_395) , g_28)) != 6UL)) >= 254UL) ^ l_327)) == g_370) < g_161[3][0][1]), 0xDCL)), 0x5820L));
    }
    else
    { 
        union U1 l_401 = {0xA308A391L};
        l_396++;
        l_405 = ((safe_add_func_uint16_t_u_u(((l_401 , (safe_add_func_int8_t_s_s(((func_10(g_13, l_404) , 0L) != 0UL), (-1L)))) , 0UL), 0x612CL)) <= l_401.f3);
        if ((safe_mod_func_uint8_t_u_u(((g_227.f2.f1 = (g_77[2] , 0x1F14D55D8AD277B0LL)) != g_370), (safe_lshift_func_int16_t_s_s((g_92.f1 && 5UL), g_13.f0.f2)))))
        { 
            union U2 l_424[1][5] = {{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}}};
            int i, j;
            for (g_227.f2.f1 = 0; (g_227.f2.f1 <= 3); g_227.f2.f1 += 1)
            { 
                int16_t l_419 = (-1L);
                int32_t l_425 = (-1L);
                if (g_24[4][1][1])
                    break;
                l_401.f0 = (safe_mul_func_uint8_t_u_u((((--g_59[1][1][2]) , ((safe_mod_func_uint32_t_u_u((g_29++), (+(l_419 = g_77[1])))) <= (safe_mod_func_uint8_t_u_u((g_161[3][0][1] > (g_13.f0 , (safe_div_func_uint16_t_u_u((l_424[0][3] , 65532UL), 1L)))), 0x83L)))) == l_424[0][3].f0), l_425));
            }
            return g_26[0][0];
        }
        else
        { 
            return l_318.f0.f0;
        }
    }
    return l_396;
}



static int32_t  func_2(uint64_t  p_3, union U1  p_4)
{ 
    int64_t l_238[3][4][4] = {{{7L,0x1A4E5B9BD4E5E22FLL,0x1A4E5B9BD4E5E22FLL,7L},{7L,0x1A4E5B9BD4E5E22FLL,0x1A4E5B9BD4E5E22FLL,7L},{7L,0x1A4E5B9BD4E5E22FLL,0x1A4E5B9BD4E5E22FLL,7L},{7L,0x1A4E5B9BD4E5E22FLL,0x1A4E5B9BD4E5E22FLL,7L}},{{7L,0x1A4E5B9BD4E5E22FLL,0x1A4E5B9BD4E5E22FLL,7L},{7L,0x1A4E5B9BD4E5E22FLL,0x1A4E5B9BD4E5E22FLL,7L},{7L,0x1A4E5B9BD4E5E22FLL,0x1A4E5B9BD4E5E22FLL,7L},{7L,0x1A4E5B9BD4E5E22FLL,0x1A4E5B9BD4E5E22FLL,7L}},{{7L,0x1A4E5B9BD4E5E22FLL,0x1A4E5B9BD4E5E22FLL,7L},{7L,0x1A4E5B9BD4E5E22FLL,0x1A4E5B9BD4E5E22FLL,7L},{7L,0x1A4E5B9BD4E5E22FLL,0x1A4E5B9BD4E5E22FLL,7L},{7L,0x1A4E5B9BD4E5E22FLL,0x1A4E5B9BD4E5E22FLL,7L}}};
    int8_t l_239 = 1L;
    uint8_t l_241 = 0x5BL;
    int32_t l_256 = 0x05A15308L;
    int32_t l_264[3];
    uint32_t l_273 = 0x02059938L;
    const union U3 l_297 = {{0x3FF8L,8L,0xE474A18BL}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_264[i] = (-6L);
    if ((((safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(1L, l_238[2][1][0])), 3)) < l_239), (g_240 ^= 0x330C0D326C4010C4LL))), 1L)), p_4.f3)) && g_137) >= l_241))
    { 
        int8_t l_257 = 0xEBL;
        int32_t l_265 = 0x41450234L;
        int16_t l_266 = 0xCDAAL;
        g_226 = ((((((p_4.f1 || (++p_4.f1)) , ((7UL <= (safe_sub_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(p_4.f3, (safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((l_256 = ((safe_mod_func_uint32_t_u_u((((((safe_add_func_int64_t_s_s(g_227.f1, g_226)) | 65535UL) , 0xD0A9A317L) , 0xF2L) , 0UL), 0x0BFBFA90L)) > p_3)), p_4.f1)), p_4.f1)))) != 0x3408L), p_4.f0))) <= 0x7FF88ED9L)) == p_3) >= p_3) | l_257) & l_257);
        l_266 = ((((l_264[0] = (safe_lshift_func_int16_t_s_u((p_3 , ((safe_add_func_uint16_t_u_u(g_26[0][0], (l_265 = ((safe_mod_func_int64_t_s_s(0xDEA6EFF20B687CD0LL, (((l_256 = 0x0A18L) == l_264[0]) && p_4.f0))) == g_105)))) || 0x9FL)), 3))) > p_4.f1) ^ l_241) <= g_116);
        g_161[0][3][1] = (safe_rshift_func_uint8_t_u_s(p_4.f3, 0));
    }
    else
    { 
        int8_t l_276 = 0L;
        l_273 = (((g_240 >= ((1L | l_238[0][0][3]) ^ (safe_rshift_func_int8_t_s_u((l_256 |= (safe_rshift_func_int16_t_s_s(l_239, g_92.f0))), 6)))) == l_238[2][0][2]) < 0xBAL);
        for (g_105 = 21; (g_105 != 3); g_105--)
        { 
            int32_t l_279[4][1];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_279[i][j] = 0L;
            }
            l_264[0] = l_241;
            if (l_276)
                continue;
            if (p_4.f3)
            { 
                if (p_3)
                    break;
            }
            else
            { 
                l_279[0][0] = (safe_add_func_int32_t_s_s((((((g_78 >= l_279[0][0]) ^ (l_256 & (g_13 , l_276))) , l_276) | p_4.f1) & p_4.f3), 0xAE325C52L));
                return g_227.f0;
            }
        }
    }
    for (g_137 = 1; (g_137 >= 0); g_137 -= 1)
    { 
        uint32_t l_291 = 1UL;
        int32_t l_292 = 0x088E90C7L;
        if ((l_292 = (safe_sub_func_int64_t_s_s((((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_227.f1, (g_26[0][0] = (safe_sub_func_uint64_t_u_u(g_92.f0, (func_10(g_13, (!(l_264[0] = ((safe_add_func_int64_t_s_s((p_4.f2.f1 = (l_291 || 0x61L)), 0x292E40CD6EA40EACLL)) <= (-3L))))) , p_4.f3)))))), l_291)) == l_239) != p_3), 0xB9409CFE1C9FD530LL))))
        { 
            const union U3 l_293[3][2][4] = {{{{{0x1DA1L,1L,4294967288UL}},{{0x6FEFL,0L,0UL}},{{0x1DA1L,1L,4294967288UL}},{{0x1DA1L,1L,4294967288UL}}},{{{0x6FEFL,0L,0UL}},{{0x6FEFL,0L,0UL}},{{0x19C8L,-5L,1UL}},{{0x6FEFL,0L,0UL}}}},{{{{0x6FEFL,0L,0UL}},{{0x1DA1L,1L,4294967288UL}},{{0x1DA1L,1L,4294967288UL}},{{0x6FEFL,0L,0UL}}},{{{0x1DA1L,1L,4294967288UL}},{{0x6FEFL,0L,0UL}},{{0x1DA1L,1L,4294967288UL}},{{0x1DA1L,1L,4294967288UL}}}},{{{{0x6FEFL,0L,0UL}},{{0x6FEFL,0L,0UL}},{{0x19C8L,-5L,1UL}},{{0x6FEFL,0L,0UL}}},{{{0x6FEFL,0L,0UL}},{{0x1DA1L,1L,4294967288UL}},{{0x1DA1L,1L,4294967288UL}},{{0x6FEFL,0L,0UL}}}}};
            int i, j, k;
            g_161[1][0][2] |= (func_10(l_293[1][0][1], (g_227.f2.f1 = (p_4.f1 | (+(p_3--))))) , p_4.f1);
        }
        else
        { 
            return g_161[0][1][2];
        }
        p_4.f0 = (((l_297 , g_59[0][3][1]) > (((l_297 , (safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((0x3B03L <= g_49) < p_4.f0), l_241)), p_4.f0))) ^ g_13.f0.f2) || (-5L))) != l_241);
        l_264[0] = ((((l_239 , ((l_238[2][1][0] > (g_13.f0.f1 <= 1UL)) , 1L)) & g_26[0][0]) >= 1UL) < l_291);
        for (g_226 = 0; (g_226 <= 1); g_226 += 1)
        { 
            uint8_t l_302 = 247UL;
            l_302 = l_256;
            for (g_92.f0 = 0; (g_92.f0 <= 1); g_92.f0 += 1)
            { 
                int i, j, k;
                l_292 &= (4294967293UL && (safe_mod_func_uint16_t_u_u(5UL, ((safe_lshift_func_uint8_t_u_u((l_264[1] = g_59[g_92.f0][(g_92.f0 + 1)][g_226]), 7)) | (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((g_13 , g_59[g_92.f0][(g_92.f0 + 1)][g_226]), g_59[g_92.f0][(g_92.f0 + 1)][g_226])) == 0xBCL), p_4.f0))))));
            }
            for (p_3 = 0; (p_3 <= 1); p_3 += 1)
            { 
                int i, j, k;
                return g_59[p_3][(g_226 + 2)][(g_137 + 1)];
            }
        }
    }
    g_226 |= (~(((((safe_rshift_func_uint8_t_u_u((g_49 = (((safe_div_func_uint8_t_u_u(p_4.f3, g_13.f0.f1)) ^ p_4.f3) == ((((0xD0B9L == 2UL) , p_4.f1) & 0x9F013895B77DECB9LL) | 0L))), l_238[2][1][0])) || g_122[1][2][3]) | g_24[4][1][1]) != 0xD4L) < p_4.f3));
    return g_137;
}



static uint64_t  func_5(union U2  p_6, union U2  p_7, union U2  p_8, union U3  p_9)
{ 
    uint32_t l_128 = 0x2C7D6A20L;
    int32_t l_165 = 0xEA57A25AL;
    int32_t l_173 = 0L;
    int32_t l_174 = 0L;
    int32_t l_175 = 0x0D7E747DL;
    int32_t l_179 = (-10L);
    int32_t l_182 = 2L;
    int32_t l_183[1][3][3];
    int64_t l_185[1][2][1];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                l_183[i][j][k] = 3L;
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_185[i][j][k] = 9L;
        }
    }
    for (g_116 = 2; (g_116 == 23); ++g_116)
    { 
        int16_t l_134 = 0x00A7L;
        int32_t l_135[5];
        struct S0 l_156 = {0x45E6L,0x4C9DCFCA8E68CDA0LL,0UL};
        int64_t l_192[4][4][3] = {{{(-2L),0xBA9BF42089E89AD7LL,(-2L)},{(-2L),0xBA9BF42089E89AD7LL,(-2L)},{(-2L),0xBA9BF42089E89AD7LL,(-2L)},{(-2L),0xBA9BF42089E89AD7LL,(-2L)}},{{(-2L),0xBA9BF42089E89AD7LL,(-2L)},{(-2L),0xBA9BF42089E89AD7LL,(-2L)},{(-2L),0xBA9BF42089E89AD7LL,(-2L)},{(-2L),0xBA9BF42089E89AD7LL,(-2L)}},{{(-2L),0xBA9BF42089E89AD7LL,(-2L)},{(-2L),0xBA9BF42089E89AD7LL,(-2L)},{(-2L),0xBA9BF42089E89AD7LL,(-2L)},{(-2L),0xBA9BF42089E89AD7LL,(-2L)}},{{(-2L),0xBA9BF42089E89AD7LL,(-2L)},{(-2L),0xBA9BF42089E89AD7LL,(-2L)},{(-2L),0xBA9BF42089E89AD7LL,(-2L)},{(-2L),0xBA9BF42089E89AD7LL,(-2L)}}};
        uint32_t l_201 = 0UL;
        uint64_t l_216 = 0x6CE796FE6ED154E9LL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_135[i] = 4L;
        for (g_92.f1 = 0; (g_92.f1 <= 2); g_92.f1 += 1)
        { 
            g_122[1][2][2]++;
            for (p_6.f0 = 0; (p_6.f0 <= 2); p_6.f0 += 1)
            { 
                int32_t l_127 = 0x5E5DDDEBL;
                int i;
                l_127 = (g_77[g_92.f1] != ((safe_lshift_func_uint8_t_u_s(p_8.f0, 5)) ^ ((((g_105 &= 0xB7CDL) ^ p_6.f0) >= g_13.f0.f2) , p_9.f0.f2)));
            }
        }
        if (l_128)
        { 
            int16_t l_136 = 0x3635L;
            int32_t l_162 = (-3L);
            int8_t l_163 = (-7L);
            int32_t l_164 = 0x18B1378FL;
            int32_t l_166 = 0x92D8F591L;
            int32_t l_167 = 0xD549ECA2L;
            int32_t l_168 = 0L;
            int32_t l_178 = (-1L);
            int32_t l_180 = 0L;
            int32_t l_181 = 0x3F69FC18L;
            int32_t l_184 = 0x75B8AA76L;
            int32_t l_186 = (-7L);
            int32_t l_187 = 0L;
            int32_t l_188 = (-1L);
            int32_t l_189 = 0L;
            int32_t l_190 = 0L;
            int32_t l_191 = 0x1E09FDA1L;
            int32_t l_193 = 1L;
            int32_t l_194 = (-3L);
            int32_t l_195 = 1L;
            int32_t l_196 = 0x374D607CL;
            int32_t l_197[2];
            int32_t l_198 = (-1L);
            int i;
            for (i = 0; i < 2; i++)
                l_197[i] = (-5L);
            if (p_9.f0.f2)
            { 
                g_137 |= ((((safe_sub_func_int8_t_s_s((((safe_unary_minus_func_int64_t_s((((safe_lshift_func_int16_t_s_u((l_134 ^ (l_134 && 0x8067CFB0L)), 13)) > ((l_135[4] = p_9.f0.f0) <= l_128)) ^ 255UL))) || l_136) && 0x73F6L), p_9.f0.f2)) <= g_105) & p_9.f0.f1) >= l_128);
            }
            else
            { 
                g_142 = (safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(g_28, 3UL)), 0x5C3A27A7C490E50DLL));
                l_135[4] ^= l_134;
            }
            for (l_136 = (-4); (l_136 >= 0); l_136++)
            { 
                uint8_t l_151 = 0x33L;
                int32_t l_160 = 0L;
                int32_t l_169 = 0x0E090713L;
                int32_t l_170 = 0xCA7C10F7L;
                int32_t l_171 = 0L;
                int32_t l_172 = 0x1E6948F9L;
                int32_t l_176 = 0L;
                int32_t l_177[1];
                int32_t l_199 = (-4L);
                int8_t l_200[2];
                int i;
                for (i = 0; i < 1; i++)
                    l_177[i] = (-2L);
                for (i = 0; i < 2; i++)
                    l_200[i] = 0L;
                g_161[3][0][1] = (((safe_add_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u((((safe_sub_func_int64_t_s_s((p_9.f0 , (l_151 = 0x9AE18D8E2A735042LL)), (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((l_156 , (safe_unary_minus_func_uint64_t_u(((safe_sub_func_int64_t_s_s(p_9.f0.f0, p_6.f0)) & l_128)))) && l_160), g_49)), 0x7F9317D5L)))) , g_49) < l_136), l_135[4])) ^ g_13.f0.f1) || l_136), l_136)) ^ l_128) == g_26[0][0]);
                --l_201;
                return g_116;
            }
            if ((safe_add_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_9.f0.f0 > (l_173 , (safe_mul_func_uint16_t_u_u(((((((safe_lshift_func_int8_t_s_u((g_77[1] , (safe_mul_func_int8_t_s_s((p_8.f0 == p_6.f0), l_201))), 6)) , p_9.f0.f1) , 0x859AL) && 0xDC3EL) == 5L) >= p_7.f0), 0xC56DL)))), 0x5451L)), l_128)), l_179)))
            { 
                int16_t l_217 = 1L;
                l_191 = l_216;
                if (l_217)
                    break;
            }
            else
            { 
                uint32_t l_218 = 0x58F5AF2DL;
                l_218--;
                g_161[3][0][1] = ((safe_sub_func_int64_t_s_s((l_136 > (((safe_lshift_func_int16_t_s_s(((+((g_26[0][0] || 0xAB98A72F9D535500LL) ^ p_9.f0.f2)) || l_128), p_9.f0.f0)) , 0xF46CB25444CFCF2FLL) <= g_77[1])), 0x3F6B23AD1BBFE586LL)) && l_189);
            }
        }
        else
        { 
            return p_8.f0;
        }
    }
    return l_173;
}



static union U2  func_10(const union U3  p_11, int64_t  p_12)
{ 
    int64_t l_25 = 0xEAA3E8F08877E069LL;
    int32_t l_27[3];
    union U3 l_69 = {{2UL,1L,4294967290UL}};
    int32_t l_70 = 8L;
    int32_t l_93[3];
    int8_t l_104 = 1L;
    int64_t l_117 = 0xD2AF6034A10173A0LL;
    union U2 l_118[4][4] = {{{0xFD65L},{0xFD65L},{0xFD65L},{0xFD65L}},{{0xFD65L},{0xFD65L},{0xFD65L},{0xFD65L}},{{0xFD65L},{0xFD65L},{0xFD65L},{0xFD65L}},{{0xFD65L},{0xFD65L},{0xFD65L},{0xFD65L}}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_27[i] = 0x3C88FED6L;
    for (i = 0; i < 3; i++)
        l_93[i] = 1L;
    --g_29;
    for (l_25 = (-25); (l_25 == 12); l_25 = safe_add_func_int16_t_s_s(l_25, 1))
    { 
        uint16_t l_38 = 0xAAFDL;
        int32_t l_48 = 0L;
        int32_t l_97 = 0L;
        if ((safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((l_38 |= 4294967290UL), (safe_rshift_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((g_47 = (safe_mul_func_uint8_t_u_u(g_13.f0.f0, (p_12 ^ (1UL && g_13.f0.f1))))) || p_11.f0.f1), g_13.f0.f0)), l_48)) , g_26[2][0]) , p_11.f0.f2) == 0xFF43993911E745C5LL), 3)))) >= l_25), l_27[2])))
        { 
            uint32_t l_57 = 0x965344FFL;
            int32_t l_58 = 0xE412C219L;
            int32_t l_60 = 0L;
            g_49 = ((1L || p_11.f0.f0) & 0x1B57L);
            g_59[0][3][1] = ((~0x7AL) , (safe_add_func_uint64_t_u_u((l_58 = (!(l_48 &= (((~(g_26[1][1] != (0x6456CFC4FF2D4E20LL > ((safe_rshift_func_uint8_t_u_u((g_13.f0 , l_57), 2)) <= 0x731485A0L)))) >= p_11.f0.f0) < l_57)))), (-10L))));
            l_70 ^= ((--g_47) || ((((((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(0UL, l_27[2])), (l_48 |= l_25))) ^ (l_69 , 1UL)), g_29)) | p_11.f0.f1) || (-8L)) & g_13.f0.f1) & p_11.f0.f2) , g_59[0][2][0]));
        }
        else
        { 
            uint64_t l_89 = 1UL;
            if ((safe_mod_func_uint32_t_u_u((((+(!((g_26[2][0] == (((g_77[1] = ((safe_mul_func_int16_t_s_s(0xE8D1L, 0x083FL)) || ((0xC9109B52L == p_11.f0.f0) == l_27[1]))) || 4294967295UL) != 0UL)) | 4UL))) || (-5L)) > 0x82E55E19L), 0x18EE11E7L)))
            { 
                g_78++;
                if (g_26[0][0])
                    break;
            }
            else
            { 
                uint16_t l_90[1];
                int32_t l_91 = 0x0C98F2C1L;
                int i;
                for (i = 0; i < 1; i++)
                    l_90[i] = 65534UL;
                l_91 = ((safe_mod_func_int32_t_s_s(0xDA88E9DEL, (safe_div_func_uint8_t_u_u(l_48, 0xDEL)))) == (l_90[0] ^= ((safe_rshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(g_26[0][0], p_11.f0.f0)) > 0UL) , l_89), 8)) > l_70)));
            }
            for (p_12 = 0; (p_12 <= 1); p_12 += 1)
            { 
                if (g_13.f0.f0)
                    break;
                return g_92;
            }
        }
        g_105 = ((((((l_93[1] ^ ((l_48 = (((((safe_sub_func_uint8_t_u_u(((!l_97) >= ((l_70 = (g_59[0][0][0] ^= ((safe_div_func_uint16_t_u_u(((!((+l_38) , (((safe_div_func_int16_t_s_s(l_104, 0x3DFDL)) | l_38) ^ 0xDCL))) ^ 18446744073709551615UL), p_11.f0.f1)) >= p_11.f0.f1))) && g_26[1][0])), g_24[3][0][1])) , g_24[0][0][2]) == l_97) >= l_69.f0.f1) | p_11.f0.f2)) ^ g_49)) & g_49) ^ g_77[1]) || g_13.f0.f2) & p_11.f0.f0) != 251UL);
    }
    l_117 = (safe_mul_func_uint16_t_u_u(((l_93[0] = l_93[0]) , (safe_lshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(p_12, (l_93[2] ^= ((p_11.f0 , ((l_27[0] = (safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_25, 0)), l_104))) > 0x01L)) != 0x5935L)))) <= g_105), g_116))), 0x33D4L));
    return l_118[0][3];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13.f0.f0, "g_13.f0.f0", print_hash_value);
    transparent_crc(g_13.f0.f1, "g_13.f0.f1", print_hash_value);
    transparent_crc(g_13.f0.f2, "g_13.f0.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_24[i][j][k], "g_24[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_26[i][j], "g_26[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_59[i][j][k], "g_59[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_77[i], "g_77[i]", print_hash_value);

    }
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    transparent_crc(g_92.f1, "g_92.f1", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_122[i][j][k], "g_122[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_161[i][j][k], "g_161[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_227.f0, "g_227.f0", print_hash_value);
    transparent_crc(g_227.f1, "g_227.f1", print_hash_value);
    transparent_crc(g_227.f3, "g_227.f3", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
