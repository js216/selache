// SPDX-License-Identifier: MIT
// cctest_csmith_3ed5b0a8.c --- cctest case csmith_3ed5b0a8 (csmith seed 1054191784)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x10b8b223 */
/* @exp_ticks 0x3495 */

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

// Options:   -s 1054191784 -o /tmp/csmith_gen_cev8tf4d/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
};
#pragma pack(pop)

union U3 {
   struct S0  f0;
   int16_t  f1;
   const struct S0  f2;
   uint64_t  f3;
};


static int32_t g_3 = 0L;
static int16_t g_4 = (-4L);
static union U3 g_13[1][3] = {{{{0x37C57F39CEE24B2ELL}},{{0x37C57F39CEE24B2ELL}},{{0x37C57F39CEE24B2ELL}}}};
static uint16_t g_14 = 0UL;
static struct S0 g_57 = {0x26DE3FE27FCE2E64LL};
static int64_t g_62[2] = {0x8916A71534BB8EBALL,0x8916A71534BB8EBALL};
static uint32_t g_83 = 0x71E83BB0L;
static int32_t g_84 = 0L;
static uint32_t g_97 = 0UL;
static int32_t g_111 = 6L;
static uint32_t g_112 = 0x755EC10FL;



static int32_t  func_1(void);
static int32_t  func_5(int16_t  p_6, uint8_t  p_7, union U3  p_8);
static struct S0  func_18(uint64_t  p_19, uint16_t  p_20, int16_t  p_21, int64_t  p_22);
static uint8_t  func_40(int16_t  p_41, const int64_t  p_42);




static int32_t  func_1(void)
{ 
    uint16_t l_2[4][5] = {{0UL,65527UL,0xAC48L,0xAC48L,65527UL},{0UL,65527UL,0xAC48L,0xAC48L,65527UL},{0UL,65527UL,0xAC48L,0xAC48L,65527UL},{0UL,65527UL,0xAC48L,0xAC48L,65527UL}};
    int32_t l_130 = (-4L);
    int32_t l_131[4][2];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_131[i][j] = 0x59696208L;
    }
    for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
    { 
        uint32_t l_12 = 0UL;
        int32_t l_129 = 9L;
        int32_t l_132[5] = {1L,1L,1L,1L,1L};
        int i;
        g_4 = 0xE5C285CEL;
        for (g_4 = 3; (g_4 >= 0); g_4 -= 1)
        { 
            int32_t l_11 = (-1L);
            uint32_t l_136 = 0x5D134699L;
            int i, j;
            if (func_5((l_11 = (0x7C70L & (((safe_rshift_func_int16_t_s_u((-6L), 7)) & ((l_2[g_4][(g_3 + 1)] , (l_2[1][1] == (-3L))) ^ g_3)) | 0xDE5741311E2DB80ELL))), l_12, g_13[0][1]))
            { 
                int8_t l_128 = 1L;
                if (g_14)
                    break;
                g_111 = ((0xECL <= ((safe_mod_func_uint32_t_u_u(g_112, l_128)) > ((((g_14 = (0x42F3L | 65531UL)) == l_11) != l_12) > g_83))) , l_2[3][0]);
                return g_111;
            }
            else
            { 
                uint32_t l_133 = 18446744073709551615UL;
                l_129 = l_11;
                ++l_133;
                l_136--;
            }
            return g_13[0][1].f1;
        }
    }
    return g_62[1];
}



static int32_t  func_5(int16_t  p_6, uint8_t  p_7, union U3  p_8)
{ 
    const uint64_t l_17 = 0UL;
    struct S0 l_39[5][4] = {{{-4L},{0L},{-1L},{-1L}},{{0xC4A6B1F15F1D345DLL},{0xC4A6B1F15F1D345DLL},{-4L},{-1L}},{{0xF5756627F1A9F139LL},{0L},{0xF5756627F1A9F139LL},{-4L}},{{0xF5756627F1A9F139LL},{-4L},{-4L},{0xF5756627F1A9F139LL}},{{-4L},{0xF5756627F1A9F139LL},{0L},{0xF5756627F1A9F139LL}}};
    int8_t l_107 = 0x30L;
    int32_t l_109 = 1L;
    int i, j;
    g_14 = (((-1L) < (g_13[0][1].f3 = g_4)) == 0xB8846B51F0EF2F37LL);
    if ((252UL > (safe_add_func_int16_t_s_s(l_17, g_13[0][1].f3))))
    { 
        uint8_t l_25 = 5UL;
        int32_t l_26 = (-1L);
        g_13[0][1].f0 = func_18(g_13[0][1].f3, ((l_25 = ((g_13[0][1].f1 && (safe_add_func_uint8_t_u_u(g_13[0][1].f1, g_14))) < g_14)) , 0x6ADDL), l_26, p_8.f3);
    }
    else
    { 
        int64_t l_56 = 8L;
        int32_t l_82 = (-6L);
        for (p_8.f0.f0 = 0; (p_8.f0.f0 != 16); p_8.f0.f0 = safe_add_func_int8_t_s_s(p_8.f0.f0, 8))
        { 
            struct S0 l_32 = {0x8C0E5C5CC99CF48BLL};
            int32_t l_106 = 0x5A7A75AAL;
            int32_t l_110 = 0xFC8C377FL;
            for (p_6 = 28; (p_6 > 25); --p_6)
            { 
                uint64_t l_47[1][4];
                int32_t l_108 = 1L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_47[i][j] = 1UL;
                }
                l_32 = g_13[0][1].f2;
                g_84 &= (g_83 = (((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((l_82 |= (safe_rshift_func_uint8_t_u_u((l_39[0][1] , p_8.f3), func_40(((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((((l_47[0][3] != ((safe_div_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((p_7 = (safe_add_func_int16_t_s_s((g_3 & g_13[0][1].f1), 0x77C8L))) <= 255UL), g_13[0][1].f0.f0)), 255UL)) | p_8.f3), l_56)) & (-1L))) && 9L) == (-7L)), 3)), 0xBB1342F278403027LL)) || p_6), g_3)))) , 0xE93FL), 6)), 0x0322L)) ^ g_62[1]) , g_57.f0));
                l_110 = ((safe_div_func_int32_t_s_s((((((safe_rshift_func_uint8_t_u_u((0x8DC5A24BAAF5047ELL & g_62[1]), (safe_mod_func_uint16_t_u_u(((p_8.f0.f0 ^ (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((((--g_97) != ((l_109 ^= ((safe_mul_func_uint16_t_u_u(((l_106 ^= (safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s(l_32.f0, l_82)), g_14))) < l_107), l_108)) >= g_14)) || p_7)) ^ p_8.f3) | p_8.f1), p_7)), g_84)), 0x113DL))) > l_108), p_7)))) <= 0x1EC5D866FAEDDA49LL) & 7UL) ^ 0L) > 5L), 4294967290UL)) < l_32.f0);
            }
            --g_112;
            l_110 = ((l_106 , g_97) <= (0L <= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(g_62[0], p_6)), 3))));
        }
        g_57 = func_18((((g_111 || (!(safe_lshift_func_uint8_t_u_s((p_7 | p_8.f0.f0), (0xE7A5B985A9A92C76LL || l_82))))) & 0UL) , g_62[1]), l_56, p_8.f0.f0, p_7);
    }
    return g_13[0][1].f2.f0;
}



static struct S0  func_18(uint64_t  p_19, uint16_t  p_20, int16_t  p_21, int64_t  p_22)
{ 
    struct S0 l_27[4][4][5] = {{{{-5L},{0x19BA600AC80EABF5LL},{0L},{1L},{1L}},{{-4L},{1L},{0xC674F9898791B167LL},{-1L},{0xC674F9898791B167LL}},{{1L},{1L},{1L},{-5L},{0xB2A93F0451807356LL}},{{-4L},{2L},{0x45CB296AD982FC9ALL},{0x8EF5D3CC114FF6A9LL},{0x8EF5D3CC114FF6A9LL}}},{{{-5L},{0L},{-5L},{0xA4E7FB108F98093ALL},{1L}},{{0x45CB296AD982FC9ALL},{2L},{-4L},{0x4C62B41911659018LL},{0xB3395CC9E520C3D8LL}},{{1L},{1L},{1L},{1L},{-5L}},{{0xC674F9898791B167LL},{1L},{-4L},{0xB3395CC9E520C3D8LL},{2L}}},{{{0L},{0x19BA600AC80EABF5LL},{-5L},{0x19BA600AC80EABF5LL},{0L}},{{1L},{0x4C62B41911659018LL},{0x45CB296AD982FC9ALL},{0xB3395CC9E520C3D8LL},{0xA447D05199242039LL}},{{0xE85662B132DC1B2DLL},{1L},{1L},{1L},{1L}},{{0x8EF5D3CC114FF6A9LL},{-4L},{0xC674F9898791B167LL},{0x4C62B41911659018LL},{0xA447D05199242039LL}}},{{{0x19BA600AC80EABF5LL},{1L},{0L},{0xA4E7FB108F98093ALL},{0L}},{{0xA447D05199242039LL},{0xA447D05199242039LL},{1L},{0x8EF5D3CC114FF6A9LL},{2L}},{{0x19BA600AC80EABF5LL},{0xB2A93F0451807356LL},{0xE85662B132DC1B2DLL},{-5L},{-5L}},{{0x8EF5D3CC114FF6A9LL},{0x63E3202F603F559CLL},{0x8EF5D3CC114FF6A9LL},{-1L},{0xB3395CC9E520C3D8LL}}}};
    int i, j, k;
    l_27[1][2][1] = l_27[1][0][4];
    return g_13[0][1].f0;
}



static uint8_t  func_40(int16_t  p_41, const int64_t  p_42)
{ 
    uint32_t l_77 = 1UL;
    int32_t l_79 = 1L;
    struct S0 l_80 = {0xCFE06C79296E5626LL};
lbl_81:
    g_57 = g_13[0][1].f2;
    for (p_41 = 0; (p_41 <= 26); p_41 = safe_add_func_int16_t_s_s(p_41, 3))
    { 
        uint16_t l_63 = 0x5289L;
        for (g_57.f0 = 12; (g_57.f0 <= (-23)); --g_57.f0)
        { 
            int32_t l_76 = 0x6699CBFFL;
            --l_63;
            for (l_63 = 0; (l_63 != 40); l_63 = safe_add_func_int64_t_s_s(l_63, 2))
            { 
                uint64_t l_78[2][4];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_78[i][j] = 0x8ADFEA0260AD585BLL;
                }
                l_80 = func_18(((l_77 = (safe_div_func_int32_t_s_s((l_63 <= (safe_mul_func_uint16_t_u_u(((((((safe_add_func_int8_t_s_s(g_62[0], ((0L != (safe_lshift_func_uint16_t_u_u(((5UL || g_4) < l_76), 15))) < 0x230FL))) >= p_41) & l_63) >= 0x7380A6A08C46E721LL) != p_42) <= p_42), g_13[0][1].f3))), p_41))) , l_63), l_78[1][0], l_79, p_42);
                return g_13[0][1].f1;
            }
        }
        if (g_4)
            goto lbl_81;
    }
    return g_13[0][1].f0.f0;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_13[i][j].f0.f0, "g_13[i][j].f0.f0", print_hash_value);
            transparent_crc(g_13[i][j].f1, "g_13[i][j].f1", print_hash_value);
            transparent_crc(g_13[i][j].f2.f0, "g_13[i][j].f2.f0", print_hash_value);
            transparent_crc(g_13[i][j].f3, "g_13[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);

    }
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
