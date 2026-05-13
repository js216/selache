// SPDX-License-Identifier: MIT
// cctest_csmith_7da714f9.c --- cctest case csmith_7da714f9 (csmith seed 2108101881)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8d791638 */

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

// Options:   -s 2108101881 -o /tmp/csmith_gen_6oi89_h5/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int32_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int64_t  f0;
   int64_t  f1;
   uint8_t  f2;
   uint32_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint16_t  f0;
   uint16_t  f1;
   uint32_t  f2;
   int16_t  f3;
};
#pragma pack(pop)

struct S3 {
   uint16_t  f0;
   struct S0  f1;
   uint8_t  f2;
   int64_t  f3;
   struct S2  f4;
};

struct S4 {
   struct S1  f0;
   struct S0  f1;
   const int16_t  f2;
   struct S2  f3;
   struct S0  f4;
};

union U5 {
   int32_t  f0;
};


static uint64_t g_2 = 3UL;
static struct S0 g_21 = {-1L,0L};
static uint32_t g_68[5][5][2] = {{{4294967292UL,8UL},{1UL,4294967289UL},{6UL,4294967294UL},{0x5B858EE3L,4294967286UL},{4294967286UL,0x992D143BL}},{{0xE40AA8DEL,0x5B858EE3L},{0UL,4294967286UL},{4294967294UL,4294967286UL},{0UL,0x5B858EE3L},{0xE40AA8DEL,0x992D143BL}},{{4294967286UL,4294967286UL},{0x5B858EE3L,4294967294UL},{6UL,4294967289UL},{1UL,8UL},{4294967292UL,1UL}},{{0x8A8B9AC9L,0UL},{0x8A8B9AC9L,1UL},{4294967292UL,8UL},{1UL,4294967289UL},{6UL,4294967294UL}},{{0x5B858EE3L,4294967286UL},{4294967286UL,0x992D143BL},{0xE40AA8DEL,0x5B858EE3L},{8UL,0UL},{0xE40AA8DEL,0UL}}};
static int64_t g_69 = 0xD7DDA2347DC7AB57LL;
static int16_t g_70 = (-1L);
static int16_t g_78 = 0x7F14L;
static uint32_t g_80 = 0UL;
static uint8_t g_83 = 1UL;
static uint32_t g_121 = 0x8EA3A565L;
static uint16_t g_132 = 0UL;
static struct S3 g_137 = {0x84FDL,{0x908BB067L,0xB63B4900L},0xB3L,3L,{0UL,0xF3EFL,0x9E9CABACL,0L}};
static uint64_t g_168 = 0xFC28E36C2DCE2F2ALL;
static struct S1 g_203 = {0x2C8CAAABBA61EA9DLL,0L,0xEDL,18446744073709551615UL,6UL};
static union U5 g_212 = {-8L};
static uint32_t g_239 = 0x93ED6143L;
static uint64_t g_245 = 18446744073709551613UL;
static uint32_t g_259 = 4294967294UL;
static int16_t g_264 = (-4L);
static struct S4 g_275 = {{0x1A7B5C51C68F0264LL,0L,5UL,18446744073709551611UL,0x2F06FB0AL},{0L,0x2C53F303L},5L,{0xB238L,0xB404L,4UL,0x2AF7L},{1L,0xAB1411F4L}};
static int64_t g_279 = (-7L);
static uint8_t g_280 = 8UL;
static int64_t g_308 = 0L;



static uint16_t  func_1(void);
static int8_t  func_5(const uint32_t  p_6);
static uint32_t  func_7(const uint64_t  p_8);
static struct S2  func_18(int8_t  p_19, struct S0  p_20);




static uint16_t  func_1(void)
{ 
    int64_t l_16 = 5L;
    int32_t l_17 = 1L;
    uint64_t l_253 = 0xE8C7D59FAB1A848CLL;
    int32_t l_266 = 0x806D691EL;
    uint32_t l_267 = 0x86EA3173L;
    if (g_2)
    { 
        uint16_t l_13 = 0xA272L;
        union U5 l_213 = {0L};
        struct S2 l_221 = {1UL,0xEA54L,18446744073709551615UL,0xAE57L};
        int32_t l_237 = 0x5CD88943L;
        int32_t l_238 = (-1L);
        if (((((safe_add_func_int8_t_s_s(0L, func_5(func_7((((safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((l_13 | l_13) ^ (l_17 = ((safe_sub_func_int32_t_s_s(g_2, l_16)) || 8UL))), l_13)) , g_2), g_2)) , 0xF40E13F5L) & l_13))))) == g_137.f2) , 0x20BEL) < 1L))
        { 
            uint16_t l_205 = 1UL;
            ++l_205;
            g_137.f1.f1 = g_68[3][1][1];
        }
        else
        { 
            struct S4 l_224 = {{1L,1L,0x68L,0x8DB94445L,4294967295UL},{1L,1L},-1L,{0x5C62L,65529UL,18446744073709551608UL,-1L},{0x56802493L,0xB0F5AFB2L}};
            const uint32_t l_225 = 0UL;
            for (g_83 = 0; (g_83 <= 24); g_83++)
            { 
                g_21.f1 = (safe_mul_func_int8_t_s_s((((l_213 = g_212) , (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s((l_213.f0 < (safe_add_func_uint16_t_u_u(((+((l_221 , (safe_mod_func_int8_t_s_s((l_224 , l_16), g_137.f1.f1))) , l_224.f3.f3)) ^ 65535UL), l_16))), 2)) < l_225), 8))) , (-1L)), 0xA6L));
                return g_203.f1;
            }
            return g_21.f1;
        }
        if (((+(((g_137 , g_137) , ((~(safe_div_func_int64_t_s_s((((((((safe_mul_func_uint16_t_u_u(((g_68[1][4][0]++) > ((g_2 = ((safe_lshift_func_int8_t_s_u(l_16, (0x8F6E9EABD20069F1LL > g_203.f2))) & g_212.f0)) > g_137.f3)), g_203.f4)) > 0xB3FEL) >= 65535UL) == 0xB8L) && l_221.f0) | (-9L)) <= g_203.f0), g_137.f4.f1))) | 0x4E5A0070L)) < 0x0C36L)) , 1L))
        { 
            int8_t l_236 = (-10L);
            struct S0 l_252[2][3] = {{{0x88BA8CF1L,0xF9075CF2L},{-1L,-1L},{-1L,-1L}},{{0x88BA8CF1L,0xF9075CF2L},{-1L,-1L},{-1L,-1L}}};
            int i, j;
            g_239--;
            g_21.f1 = (((!(safe_rshift_func_uint8_t_u_s(0x4BL, 3))) || (func_18((g_245 = g_70), ((safe_lshift_func_int8_t_s_u(l_236, ((safe_add_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((l_237 = (l_236 & l_236)), g_137.f4.f1)), 0x43828780DDD84B79LL)) | g_137.f4.f0))) , l_252[0][0])) , l_253)) || l_221.f0);
            g_137.f1.f1 = 0x9E1DACBEL;
        }
        else
        { 
            uint32_t l_260[1];
            int32_t l_265[2][3] = {{0x68BAE3A0L,0x6B7A6513L,0x6B7A6513L},{0x68BAE3A0L,0x6B7A6513L,0x6B7A6513L}};
            struct S1 l_270 = {0L,0x2C13680D2039C2A8LL,1UL,0xAC7EA18EL,0xC58E8407L};
            int i, j;
            for (i = 0; i < 1; i++)
                l_260[i] = 4294967295UL;
            for (l_221.f1 = 0; (l_221.f1 <= 1); l_221.f1 += 1)
            { 
                if (g_137.f2)
                    break;
            }
            for (g_70 = 0; (g_70 <= 1); g_70 += 1)
            { 
                uint64_t l_258 = 0x55ED363157A54816LL;
                uint16_t l_263[3][1][4] = {{{65532UL,0x2DBDL,0x2DBDL,65532UL}},{{0x2DBDL,65532UL,0x2DBDL,0x2DBDL}},{{65532UL,65532UL,0xBD5DL,65532UL}}};
                int i, j, k;
                l_266 ^= (0x379D3524D7A88226LL != ((((((l_265[1][1] = (((safe_sub_func_int64_t_s_s((safe_sub_func_int8_t_s_s((g_259 = l_258), ((l_260[0] >= (g_264 &= (safe_add_func_int16_t_s_s((g_137.f4.f3 &= (g_78 = ((((((l_263[1][0][2] >= 0xFAL) < l_253) | 8L) <= l_260[0]) , l_260[0]) >= 0x0B4FL))), g_203.f3)))) > 1UL))), 18446744073709551615UL)) & g_69) | l_260[0])) > 252UL) < 0xDFE0L) >= g_239) > l_221.f3) == l_16));
                ++l_267;
                if (g_70)
                    break;
            }
            l_270 = g_203;
        }
    }
    else
    { 
        uint64_t l_292 = 0UL;
        int32_t l_309 = (-3L);
        for (g_264 = 1; (g_264 >= 0); g_264 -= 1)
        { 
            uint64_t l_276 = 0x1684ECFFF179101BLL;
            int32_t l_277 = 0x90BE5C46L;
            int32_t l_278 = 0xFBAF897AL;
            if (((((g_78 = (g_203.f1 > ((safe_mod_func_uint8_t_u_u((((g_2 = (safe_sub_func_int64_t_s_s(g_121, l_253))) & (((g_275 , l_276) > g_275.f3.f1) , 7UL)) == l_276), 0xE9L)) < 0x1122L))) || 0xB942L) | 0UL) ^ 1UL))
            { 
                uint32_t l_290[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_290[i] = 0UL;
                --g_280;
                g_275.f1.f1 = (~g_132);
                g_275.f1.f1 = (l_278 &= ((+(safe_mul_func_uint8_t_u_u((((~(((safe_lshift_func_uint16_t_u_s(((l_290[0] == (((l_276 & (safe_unary_minus_func_int8_t_s(((l_17 = 0xD6BDL) ^ 0x7CD0L)))) > 4L) > l_292)) & g_275.f3.f3), 2)) ^ 1L) < g_275.f0.f4)) && l_290[0]) >= g_275.f0.f1), l_290[0]))) != g_275.f3.f1));
            }
            else
            { 
                if (l_17)
                    break;
            }
            for (g_137.f4.f1 = 0; (g_137.f4.f1 <= 1); g_137.f4.f1 += 1)
            { 
                g_275.f1.f1 = (safe_div_func_int64_t_s_s(g_137.f4.f3, (+(-3L))));
                l_17 = 0xB9EA9D6CL;
            }
        }
        l_309 = (safe_mul_func_int8_t_s_s((g_308 &= (safe_lshift_func_int8_t_s_s(((l_267 != (safe_add_func_int16_t_s_s(g_203.f0, g_264))) >= (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(g_275.f0.f1, g_78)), l_292)) && g_203.f1), 14))), g_275.f3.f2))), l_253));
        for (g_275.f3.f2 = 0; (g_275.f3.f2 <= 1); g_275.f3.f2 += 1)
        { 
            uint16_t l_310 = 0UL;
            for (g_137.f3 = 0; (g_137.f3 <= 1); g_137.f3 += 1)
            { 
                return l_310;
            }
            l_17 = ((~(g_137.f4.f2 | ((g_275.f3.f3 = (safe_div_func_int64_t_s_s((g_137.f4.f0 ^ ((0xBDEFL && 0x5917L) , g_212.f0)), g_132))) < g_203.f3))) && l_310);
            for (g_280 = 0; (g_280 <= 1); g_280 += 1)
            { 
                g_137.f1.f1 &= (safe_rshift_func_int8_t_s_s(0xEBL, (safe_sub_func_uint64_t_u_u((((l_292 , 5L) >= (((safe_div_func_int64_t_s_s(0xD92D4C6D434D1455LL, g_275.f3.f0)) > g_137.f4.f0) && g_137.f2)) > 18446744073709551609UL), 0xA030214510060A83LL))));
            }
        }
    }
    return g_137.f1.f1;
}



static int8_t  func_5(const uint32_t  p_6)
{ 
    int16_t l_136 = 0x52ACL;
    int32_t l_140 = 0x6613FCEAL;
    int32_t l_144 = 0L;
    uint64_t l_162 = 0xFAB35A4D2AB853E7LL;
    int32_t l_163 = 0xB03CE56EL;
    int64_t l_196[4] = {0x671D1871A36315F1LL,0x671D1871A36315F1LL,0x671D1871A36315F1LL,0x671D1871A36315F1LL};
    int i;
    for (g_21.f0 = 28; (g_21.f0 >= 28); --g_21.f0)
    { 
        int16_t l_133 = 0x10C7L;
        g_21.f1 = (safe_mul_func_uint8_t_u_u(4UL, (((safe_mod_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((0x3A4458DFL || 0x7EA3AF3FL) != g_132), l_133)), l_133)) ^ 0x9BL) != g_83)));
    }
    for (g_70 = 0; (g_70 <= 1); g_70 += 1)
    { 
        const int64_t l_143 = (-10L);
        int8_t l_145[2];
        int32_t l_146 = 0x3060AC40L;
        int32_t l_176 = 0xE4DC8060L;
        int32_t l_191 = 0x256EB59EL;
        struct S1 l_202 = {0xF96B88E8A5636236LL,0x62B7744F475810F0LL,0x39L,18446744073709551615UL,0xE39C1A7FL};
        int i;
        for (i = 0; i < 2; i++)
            l_145[i] = 0xE3L;
        l_146 = ((((safe_mul_func_uint16_t_u_u((l_136 = p_6), (((g_137 , (((safe_div_func_int32_t_s_s(((l_140 ^= p_6) != ((g_68[3][1][1] ^= (safe_div_func_int64_t_s_s(1L, l_143))) >= p_6)), 1UL)) | p_6) != (-1L))) & p_6) > l_144))) >= l_143) <= l_145[1]) >= p_6);
        if ((((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((g_137.f3 != (safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u((((!(safe_div_func_int32_t_s_s((g_137.f4.f0 & p_6), (safe_add_func_int64_t_s_s((g_69 = ((l_145[1] , g_69) && l_162)), 1L))))) < l_143) <= (-10L)), g_80)) || l_163), g_137.f4.f3))) == 4294967295UL), 0)), 0x8DL)), g_137.f4.f2)) < 0x3D76F3A8L) ^ 0xC422D24AL))
        { 
            uint32_t l_174 = 0UL;
            int32_t l_175[3][1][4];
            int32_t l_178 = 0x61599981L;
            uint64_t l_192 = 1UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_175[i][j][k] = 0xB4148523L;
                }
            }
            for (l_146 = 0; (l_146 <= 1); l_146 += 1)
            { 
                uint16_t l_177[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_177[i] = 0UL;
                if (l_162)
                    break;
                g_21.f1 = (((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((l_143 | ((((((((l_176 = ((((g_168 &= 0UL) || (safe_unary_minus_func_int64_t_s((g_137.f3 | (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_175[1][0][2] = ((((((g_137.f3 >= 0UL) > l_174) , g_137) , g_68[3][1][1]) && g_121) || g_137.f0)), p_6)), 9)))))) != 9L) & l_174)) | 0xD5100AA5BD061763LL) , 0x16L) >= g_137.f4.f0) > l_177[0]) < 4294967295UL) && p_6) && l_177[0])), p_6)) && 0UL) , 8UL), l_178)) || p_6) , l_144);
                l_140 ^= ((0xE2L | ((safe_lshift_func_int8_t_s_s(((l_175[2][0][1] = (!(safe_rshift_func_int8_t_s_u(((l_192 &= (g_137.f4 , ((~1L) > (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((safe_div_func_int16_t_s_s((l_191 > g_137.f2), l_177[1])) > 5UL) <= l_143), p_6)), g_78))))) >= 0xE6FDL), 5)))) >= 1L), 0)) , 0xA5L)) , p_6);
            }
        }
        else
        { 
            int32_t l_195 = 0x96682BC3L;
            if (((safe_mul_func_int8_t_s_s(((l_146 &= l_176) , (g_137.f4 , g_137.f4.f2)), 3L)) ^ 0xE6EE16482BAD39F9LL))
            { 
                g_137.f1.f1 = l_195;
                return l_196[0];
            }
            else
            { 
                g_137.f1.f1 = (safe_lshift_func_int16_t_s_s(((func_18(((0xAE69L || ((+(l_195 != (safe_rshift_func_uint16_t_u_s(((0x4CL & 0xC9L) <= p_6), 5)))) > g_137.f4.f3)) ^ p_6), g_137.f1) , (-4L)) ^ 0xC22DBCC6B989850ALL), 10));
                return p_6;
            }
        }
        for (l_140 = 0; (l_140 <= 1); l_140 += 1)
        { 
            uint32_t l_204 = 0x342583E3L;
            g_203 = l_202;
            for (l_144 = 0; (l_144 <= 1); l_144 += 1)
            { 
                int i, j, k;
                l_204 = ((l_146 = ((0x1215F5D2826EAED4LL >= (0x25EEF5AAL <= 0xB3A16827L)) , ((l_202 , 0x025B4E28L) != g_68[l_140][(g_70 + 2)][l_144]))) < p_6);
            }
        }
    }
    return p_6;
}



static uint32_t  func_7(const uint64_t  p_8)
{ 
    struct S2 l_40 = {1UL,0xA1E1L,0x34826AAFL,0x9D89L};
    int32_t l_62 = 0L;
    int32_t l_76 = 1L;
    int32_t l_79 = 0x7A0C8E20L;
    struct S3 l_114[5] = {{6UL,{0L,6L},0UL,0x83E45B0D9EFBC47ELL,{5UL,0x9F7CL,0x7C78B5D6L,0x1B42L}},{6UL,{0L,6L},0UL,0x83E45B0D9EFBC47ELL,{5UL,0x9F7CL,0x7C78B5D6L,0x1B42L}},{6UL,{0L,6L},0UL,0x83E45B0D9EFBC47ELL,{5UL,0x9F7CL,0x7C78B5D6L,0x1B42L}},{6UL,{0L,6L},0UL,0x83E45B0D9EFBC47ELL,{5UL,0x9F7CL,0x7C78B5D6L,0x1B42L}},{6UL,{0L,6L},0UL,0x83E45B0D9EFBC47ELL,{5UL,0x9F7CL,0x7C78B5D6L,0x1B42L}}};
    int i;
    l_40 = func_18(p_8, (g_2 , g_21));
    if (l_40.f1)
    { 
        const struct S1 l_56 = {0L,3L,0UL,0xEA3BBE75L,1UL};
        int32_t l_59 = 0x6FF37E3BL;
        struct S1 l_66 = {1L,0xA618944B8798E375LL,0xC5L,2UL,9UL};
        int32_t l_75 = 1L;
        int32_t l_90 = 0x17A65E2BL;
        uint8_t l_97 = 0x84L;
        l_59 = (((safe_add_func_uint64_t_u_u(p_8, (((safe_mul_func_uint8_t_u_u((l_40.f3 | (((safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((l_56 , (safe_mod_func_int16_t_s_s(g_21.f0, 0xFAABL))), g_21.f0)), 7)) != 0x3003393DL))) | 9L) > l_40.f2), g_21.f0)), p_8)), l_56.f2)) , p_8) >= 1UL)), l_40.f3)) >= g_21.f1) ^ 6L))) , 0xFB43L) >= p_8);
        if ((((l_40.f1 , (l_40.f3 || g_2)) && ((l_62 |= (l_59 = (safe_rshift_func_int16_t_s_s(g_21.f1, 7)))) && l_62)) > 0xCED4L))
        { 
lbl_94:
            for (g_21.f1 = 0; (g_21.f1 == (-23)); --g_21.f1)
            { 
                struct S1 l_65[3] = {{0L,0x79CF818A8DC8D62BLL,0xD2L,18446744073709551614UL,0xE3B40BBFL},{0L,0x79CF818A8DC8D62BLL,0xD2L,18446744073709551614UL,0xE3B40BBFL},{0L,0x79CF818A8DC8D62BLL,0xD2L,18446744073709551614UL,0xE3B40BBFL}};
                struct S4 l_67 = {{1L,0xEBBCFA1F81FC1141LL,0xCDL,0xE530E041L,0x8CD5F097L},{0x6B0045B3L,0L},1L,{0xC227L,0xF464L,0xDEA1A09BL,0xF73BL},{0x91A03DC5L,0x991EE505L}};
                int i;
                g_70 = (g_69 = (g_68[3][1][1] = (((((l_66 = l_65[2]) , ((((((g_21.f1 >= ((l_67 , (g_2 & (-1L))) >= p_8)) , 18446744073709551615UL) >= 0UL) != 0xD28DL) || g_21.f0) , l_56.f3)) || 0x2CL) , g_21.f0) || g_21.f0)));
            }
            return p_8;
        }
        else
        { 
            int16_t l_74 = (-4L);
            int32_t l_77 = (-8L);
            int32_t l_91 = 0x999CB80BL;
            for (l_66.f2 = 13; (l_66.f2 > 50); ++l_66.f2)
            { 
                int8_t l_73[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_73[i] = 0xAEL;
                l_59 = ((l_74 |= (l_73[2] < g_68[3][1][1])) == l_75);
                ++g_80;
            }
            l_91 |= (l_56.f1 == ((((l_77 = ((1UL < (((g_83++) >= ((65530UL > (l_76 = (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((l_90 |= ((l_59 ^= p_8) > (-1L))) < l_62), 7)) && g_80), 15)))) , 1L)) < p_8)) , 0x502BL)) != g_68[3][0][0]) || g_70) || g_21.f1));
            for (l_62 = (-23); (l_62 <= 15); l_62 = safe_add_func_uint16_t_u_u(l_62, 2))
            { 
                if (l_66.f2)
                    goto lbl_94;
                return g_83;
            }
        }
        l_62 = (((safe_div_func_int16_t_s_s((g_21.f0 , (l_79 = (l_97 <= ((!0x4F864726A7E7D718LL) ^ (safe_div_func_int32_t_s_s(g_21.f1, l_40.f2)))))), 0xAA37L)) == 0xE7F170005B716F66LL) > g_2);
    }
    else
    { 
        uint16_t l_101 = 0x8DDDL;
        int32_t l_106 = 1L;
        int8_t l_111 = 3L;
        int32_t l_112[3];
        struct S3 l_115 = {0xFC4DL,{0x1CDEB978L,-1L},4UL,0L,{65526UL,0xB2B6L,1UL,0x434AL}};
        int i;
        for (i = 0; i < 3; i++)
            l_112[i] = (-6L);
        l_101 = 0x610154D0L;
        if ((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(l_79, 12)), (g_2 && ((p_8 != (p_8 < l_106)) | l_106)))))
        { 
            l_112[1] = ((l_111 = ((g_69 = p_8) | ((safe_lshift_func_uint8_t_u_s(p_8, 3)) == ((safe_add_func_int16_t_s_s((g_78 = (((g_21 = g_21) , p_8) != 0UL)), l_40.f3)) > 1L)))) && l_40.f3);
        }
        else
        { 
            uint8_t l_113[1];
            struct S3 l_116 = {0UL,{0x2F869285L,0xA64AAA90L},7UL,8L,{65534UL,0xB68CL,0x1B8CC65BL,0x0174L}};
            int i;
            for (i = 0; i < 1; i++)
                l_113[i] = 0xE2L;
            l_113[0] = 0xD512287FL;
            l_116 = (l_115 = l_114[2]);
            for (l_116.f0 = 6; (l_116.f0 == 9); l_116.f0 = safe_add_func_int16_t_s_s(l_116.f0, 3))
            { 
                uint16_t l_119 = 0xC579L;
                int32_t l_120 = (-9L);
                l_119 |= l_116.f4.f0;
                ++g_121;
            }
        }
    }
    return l_114[2].f2;
}



static struct S2  func_18(int8_t  p_19, struct S0  p_20)
{ 
    uint8_t l_28 = 7UL;
    int8_t l_31 = 0x0AL;
    struct S2 l_39 = {0x0320L,1UL,18446744073709551612UL,0xEC25L};
    for (p_19 = 5; (p_19 > 12); p_19++)
    { 
        uint8_t l_36[5] = {2UL,2UL,2UL,2UL,2UL};
        int32_t l_38 = (-10L);
        int i;
        if ((safe_lshift_func_int16_t_s_s(p_19, ((safe_add_func_int8_t_s_s((p_20.f0 >= l_28), ((safe_mod_func_uint64_t_u_u(l_28, p_20.f1)) == g_21.f0))) , (-8L)))))
        { 
            if (l_31)
                break;
        }
        else
        { 
            uint32_t l_35 = 0xFEF5379AL;
            int32_t l_37 = 0xAFF65CE1L;
            l_38 = (~((l_37 ^= ((l_36[4] = (((safe_add_func_int16_t_s_s(l_28, l_35)) && 0x127A4EF21DDBC75BLL) >= ((g_21.f0 || g_21.f1) == g_2))) && l_36[4])) & g_21.f0));
        }
    }
    return l_39;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_68[i][j][k], "g_68[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_137.f0, "g_137.f0", print_hash_value);
    transparent_crc(g_137.f1.f0, "g_137.f1.f0", print_hash_value);
    transparent_crc(g_137.f1.f1, "g_137.f1.f1", print_hash_value);
    transparent_crc(g_137.f2, "g_137.f2", print_hash_value);
    transparent_crc(g_137.f3, "g_137.f3", print_hash_value);
    transparent_crc(g_137.f4.f0, "g_137.f4.f0", print_hash_value);
    transparent_crc(g_137.f4.f1, "g_137.f4.f1", print_hash_value);
    transparent_crc(g_137.f4.f2, "g_137.f4.f2", print_hash_value);
    transparent_crc(g_137.f4.f3, "g_137.f4.f3", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_203.f0, "g_203.f0", print_hash_value);
    transparent_crc(g_203.f1, "g_203.f1", print_hash_value);
    transparent_crc(g_203.f2, "g_203.f2", print_hash_value);
    transparent_crc(g_203.f3, "g_203.f3", print_hash_value);
    transparent_crc(g_203.f4, "g_203.f4", print_hash_value);
    transparent_crc(g_212.f0, "g_212.f0", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_275.f0.f0, "g_275.f0.f0", print_hash_value);
    transparent_crc(g_275.f0.f1, "g_275.f0.f1", print_hash_value);
    transparent_crc(g_275.f0.f2, "g_275.f0.f2", print_hash_value);
    transparent_crc(g_275.f0.f3, "g_275.f0.f3", print_hash_value);
    transparent_crc(g_275.f0.f4, "g_275.f0.f4", print_hash_value);
    transparent_crc(g_275.f1.f0, "g_275.f1.f0", print_hash_value);
    transparent_crc(g_275.f1.f1, "g_275.f1.f1", print_hash_value);
    transparent_crc(g_275.f2, "g_275.f2", print_hash_value);
    transparent_crc(g_275.f3.f0, "g_275.f3.f0", print_hash_value);
    transparent_crc(g_275.f3.f1, "g_275.f3.f1", print_hash_value);
    transparent_crc(g_275.f3.f2, "g_275.f3.f2", print_hash_value);
    transparent_crc(g_275.f3.f3, "g_275.f3.f3", print_hash_value);
    transparent_crc(g_275.f4.f0, "g_275.f4.f0", print_hash_value);
    transparent_crc(g_275.f4.f1, "g_275.f4.f1", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
