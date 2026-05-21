// SPDX-License-Identifier: MIT
// cctest_csmith_ab24b7ae.c --- cctest case csmith_ab24b7ae (csmith seed 2871310254)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf811b8ad */

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

// Options:   -s 2871310254 -o /tmp/csmith_gen_j343htbv/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

union U1 {
   int16_t  f0;
   int32_t  f1;
   const uint8_t  f2;
};

union U2 {
   int32_t  f0;
   uint16_t  f1;
   int64_t  f2;
   struct S0  f3;
};

union U3 {
   uint16_t  f0;
   uint32_t  f1;
};

union U4 {
   uint32_t  f0;
   int32_t  f1;
};


static uint16_t g_7[3][2][2] = {{{0xEB77L,0x4F93L},{0x4F93L,0xEB77L}},{{0x4F93L,0x4F93L},{0xEB77L,0x4F93L}},{{0x4F93L,0xEB77L},{0x4F93L,0x4F93L}}};
static uint16_t g_31 = 0xB611L;
static int8_t g_33 = 0x0BL;
static int8_t g_36[1] = {8L};
static uint8_t g_38 = 255UL;
static union U3 g_41[3][2][3] = {{{{65532UL},{65532UL},{65532UL}},{{0xB03BL},{0xB03BL},{0xB03BL}}},{{{65532UL},{65532UL},{65532UL}},{{0xB03BL},{0xB03BL},{0xB03BL}}},{{{65532UL},{65532UL},{65532UL}},{{0xB03BL},{0xB03BL},{0xB03BL}}}};
static union U1 g_56 = {1L};
static uint32_t g_60 = 0x4BAE9140L;
static struct S0 g_85 = {0xC6607294L,18446744073709551608UL};
static int32_t g_95 = 0L;
static uint64_t g_171 = 0UL;
static int32_t g_252 = 1L;
static uint32_t g_264[2] = {0x1A1ADF43L,0x1A1ADF43L};
static union U2 g_269 = {0x036B3454L};



static union U2  func_1(void);
static uint32_t  func_16(uint8_t  p_17, uint16_t  p_18, uint16_t  p_19, int64_t  p_20);
static union U3  func_21(int16_t  p_22, int64_t  p_23, const int16_t  p_24, uint32_t  p_25);
static int16_t  func_44(union U1  p_45, uint16_t  p_46, union U1  p_47, int16_t  p_48);




static union U2  func_1(void)
{ 
    int64_t l_6 = 0x8146CDEAD9BACC5DLL;
    int16_t l_26 = 0xE10EL;
    int32_t l_256[4][1][3] = {{{0x6A6714CDL,0xE5DABCDBL,0x6A6714CDL}},{{0xD50CF4A1L,0xD50CF4A1L,0xD50CF4A1L}},{{0x6A6714CDL,0xE5DABCDBL,0x6A6714CDL}},{{0xD50CF4A1L,0xD50CF4A1L,0xD50CF4A1L}}};
    struct S0 l_261 = {0x83CD3FB4L,0x5B66D557L};
    union U2 l_270 = {-9L};
    int i, j, k;
    l_256[3][0][1] = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((g_7[0][0][0]--), (safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(func_16(l_6, (func_21(l_26, l_26, ((safe_mul_func_uint16_t_u_u(((((safe_mod_func_int8_t_s_s(l_6, g_31)) , l_26) ^ l_6) , 0xFB26L), g_31)) | l_26), g_31) , g_38), g_31, g_36[0]), l_26)) < 0x45750431L), g_36[0])), g_36[0])))), 2));
    l_261.f0 = (safe_add_func_int64_t_s_s((g_264[1] = (4L > (safe_add_func_int64_t_s_s((((g_85.f0 |= ((l_261 , (g_38 || (safe_lshift_func_uint8_t_u_s(g_171, l_6)))) , g_38)) | g_252) >= 0xCC439E3176584DEBLL), 0x70580F47724B863ALL)))), g_56.f2));
    for (g_38 = 0; (g_38 != 27); g_38 = safe_add_func_uint16_t_u_u(g_38, 9))
    { 
        union U2 l_267 = {1L};
        int32_t l_268[3][5] = {{0x4CC00686L,0x2228BB7CL,0xD5B6D4EFL,0x4CC00686L,0x4CC00686L},{0x2228BB7CL,5L,0x2228BB7CL,0xD5B6D4EFL,0x4CC00686L},{(-5L),0x6DD3D46EL,0x4CC00686L,0x6DD3D46EL,(-5L)}};
        int i, j;
        l_268[0][2] &= (l_267 , g_7[0][1][0]);
        return g_269;
    }
    return l_270;
}



static uint32_t  func_16(uint8_t  p_17, uint16_t  p_18, uint16_t  p_19, int64_t  p_20)
{ 
    union U1 l_49 = {-3L};
    int32_t l_152 = 0x9B53D0E5L;
    int32_t l_170 = 0xFD2E611AL;
    int32_t l_172 = (-1L);
    int8_t l_189 = 0x8CL;
    struct S0 l_255 = {0x04CCE653L,0xCD09A4D5L};
    if ((safe_mod_func_uint8_t_u_u((((func_44(l_49, (((safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s(0L, ((safe_mul_func_uint8_t_u_u(l_49.f2, g_38)) >= p_18))), 0xEFL)) , 4294967292UL) == g_31), g_56, l_49.f2) , p_20) == (-10L)) == 0x34L), l_49.f0)))
    { 
        int32_t l_145[5];
        int i;
        for (i = 0; i < 5; i++)
            l_145[i] = (-9L);
        for (g_85.f0 = 0; (g_85.f0 > 27); g_85.f0 = safe_add_func_int32_t_s_s(g_85.f0, 3))
        { 
            uint64_t l_144[3];
            struct S0 l_146 = {0xF0A2812AL,1UL};
            int i;
            for (i = 0; i < 3; i++)
                l_144[i] = 0x5673F556C05CDAFBLL;
            l_145[3] ^= l_144[0];
            for (p_17 = 0; (p_17 <= 1); p_17 += 1)
            { 
                l_146 = ((g_85.f1 = g_36[0]) , g_85);
            }
        }
    }
    else
    { 
        int16_t l_151[4][5] = {{0x7036L,0x5224L,0L,0xA248L,0L},{0L,0L,(-4L),0xA248L,4L},{0x5224L,0x7036L,0x7036L,0x5224L,0L},{0x5224L,0xA248L,8L,8L,0xA248L}};
        int i, j;
        l_152 = (safe_rshift_func_uint8_t_u_s((p_17 || (((((safe_mul_func_uint16_t_u_u((g_31 >= 0xA08AL), (g_56.f0 = 1L))) ^ p_20) && 0L) > l_151[1][0]) > p_19)), g_95));
        return p_20;
    }
    l_172 = (g_171 |= (((safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_u((g_31 = ((safe_mul_func_int16_t_s_s(((l_170 = (safe_mod_func_uint8_t_u_u((((g_85.f0 = (safe_mul_func_uint8_t_u_u(252UL, (safe_div_func_int16_t_s_s((+((safe_lshift_func_uint16_t_u_s(((g_31 && ((safe_mul_func_uint16_t_u_u((((l_152 ^= 0xBBB9L) == p_17) || g_31), 0xBB48L)) && l_49.f2)) >= 0x5CA490DAL), g_60)) , p_17)), l_49.f0))))) | g_33) || g_60), 0xD9L))) , p_17), l_49.f2)) && p_20)), 4)) > (-10L)) <= p_18), 6)) ^ g_60) || 1L));
    for (p_18 = 6; (p_18 >= 28); p_18 = safe_add_func_int64_t_s_s(p_18, 7))
    { 
        uint16_t l_190 = 0UL;
        int32_t l_206 = 0xBEB0F865L;
        union U1 l_209 = {1L};
        int32_t l_219 = 0xBF4AD526L;
        for (g_31 = (-4); (g_31 < 36); ++g_31)
        { 
            for (l_49.f0 = 0; (l_49.f0 == 17); l_49.f0 = safe_add_func_uint64_t_u_u(l_49.f0, 1))
            { 
                int8_t l_183 = 0x2BL;
                l_183 = (1UL < (safe_mul_func_int16_t_s_s(0x5EB5L, (((-1L) < (safe_sub_func_uint16_t_u_u((g_171 > g_36[0]), 0x33B2L))) , p_17))));
            }
        }
        if ((~(g_56.f2 == (((g_38 ^= ((g_171 = (((p_19 , (safe_mod_func_uint16_t_u_u((safe_add_func_int64_t_s_s((p_20 = (l_172 <= (l_189 = l_49.f0))), p_18)), 65535UL))) || 1L) <= p_18)) != p_18)) != p_19) == l_190))))
        { 
            uint16_t l_203 = 65531UL;
            int32_t l_204 = 1L;
            uint64_t l_205 = 0UL;
            struct S0 l_218 = {0x85A6AE0BL,0xDEDAE182L};
            union U4 l_238 = {4UL};
            l_206 &= (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((0x9DL >= (((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u(((safe_div_func_int64_t_s_s(((0UL ^ ((!(l_203 &= (0UL | l_152))) > g_56.f2)) < p_20), g_36[0])) , 0x53962AE5L))) | 0x91890F00B84BF07FLL), l_204)) >= g_38) <= g_36[0])) , l_205), 0xDD51L)), 0));
            if ((safe_div_func_uint8_t_u_u(253UL, (l_219 = (((l_209 , (safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_206 &= g_33), ((((safe_mul_func_uint8_t_u_u((((l_218 , 255UL) != g_31) | 0x80DBD024A6B5C213LL), g_38)) >= (-9L)) || p_20) , g_36[0]))), p_19)), p_18))) > 0x747FL) , 0x44L)))))
            { 
                uint16_t l_236[5][3] = {{0x293CL,0x845AL,0x0FA8L},{65528UL,1UL,0xF839L},{0x293CL,0x293CL,0xF839L},{1UL,65528UL,0x0FA8L},{0x845AL,0x293CL,0x845AL}};
                int i, j;
                g_85.f0 |= ((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((g_171 = ((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(p_19, 0)) != (l_204 < ((((l_219 = l_49.f2) ^ (g_60 = (safe_mul_func_int16_t_s_s(((l_218 , 0UL) & l_236[4][1]), 0xA722L)))) | 0x09CDAB9FL) <= g_85.f1))), g_41[2][1][2].f0)), g_56.f0)), g_36[0])) , g_56.f2)), 0x6F3355245F2AE77BLL)), p_17)), p_17)) <= p_19);
                g_85 = g_85;
            }
            else
            { 
                union U1 l_237 = {0x4816L};
                l_218 = ((l_237 , g_56) , g_85);
                l_219 |= (((l_238 , p_19) == g_31) < ((p_18 > g_95) <= (-1L)));
                if (g_85.f0)
                    break;
            }
        }
        else
        { 
            struct S0 l_239 = {0x00449F6AL,0xB49479A4L};
            l_239 = g_85;
            if (((g_38 , ((g_252 = (g_38 |= (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((4294967295UL | (p_19 != g_56.f2)), 1)), 0xD828L)), 4)), g_56.f2)) | (-1L)), 14)))) || (-9L))) < g_60))
            { 
                int8_t l_253 = 0x03L;
                int32_t l_254[4][3][3] = {{{(-3L),0L,0xDFA724B1L},{0L,(-3L),(-3L)},{0xDFA724B1L,(-3L),0xBA1A22EDL}},{{0xD8EE761CL,0L,0L},{0xDFA724B1L,0xDFA724B1L,0L},{0L,0xD8EE761CL,0xBA1A22EDL}},{{(-3L),0xDFA724B1L,(-3L)},{(-3L),0L,0xDFA724B1L},{0L,(-3L),(-3L)}},{{0xDFA724B1L,(-3L),0xBA1A22EDL},{0xD8EE761CL,0L,0L},{0xDFA724B1L,0xDFA724B1L,0L}}};
                int i, j, k;
                l_254[3][0][1] = l_253;
            }
            else
            { 
                return p_20;
            }
            l_255 = g_85;
        }
    }
    return p_19;
}



static union U3  func_21(int16_t  p_22, int64_t  p_23, const int16_t  p_24, uint32_t  p_25)
{ 
    int32_t l_32 = 0xA12A2EF7L;
    int32_t l_34 = 0x92DB756FL;
    int32_t l_35 = 8L;
    int32_t l_37[1];
    int i;
    for (i = 0; i < 1; i++)
        l_37[i] = 0L;
    g_38--;
    return g_41[2][1][2];
}



static int16_t  func_44(union U1  p_45, uint16_t  p_46, union U1  p_47, int16_t  p_48)
{ 
    int32_t l_61[3];
    int32_t l_62 = 0x0698B42DL;
    const int32_t l_131 = 7L;
    uint64_t l_141 = 0x325B119D2B54446DLL;
    int i;
    for (i = 0; i < 3; i++)
        l_61[i] = 0xC8C9F13AL;
    g_60 |= (safe_mod_func_uint64_t_u_u(1UL, (safe_unary_minus_func_int64_t_s(p_46))));
    if ((l_62 ^= l_61[2]))
    { 
        uint8_t l_94 = 0x5BL;
        int32_t l_105 = 0xFD34EA09L;
        uint32_t l_136[4][5][5] = {{{18446744073709551615UL,0xFC83C047L,0xC33996C8L,7UL,0xA6A349BDL},{18446744073709551615UL,7UL,0x10EE7DBBL,7UL,18446744073709551615UL},{0xA6A349BDL,7UL,0xC33996C8L,0xFC83C047L,18446744073709551615UL},{18446744073709551615UL,0xFC83C047L,0xC33996C8L,7UL,0xA6A349BDL},{18446744073709551615UL,7UL,0x10EE7DBBL,7UL,18446744073709551615UL}},{{0xA6A349BDL,7UL,0xC33996C8L,0xFC83C047L,18446744073709551615UL},{18446744073709551615UL,0xFC83C047L,0xC33996C8L,7UL,0xA6A349BDL},{18446744073709551615UL,7UL,0x10EE7DBBL,7UL,18446744073709551615UL},{0xA6A349BDL,7UL,0xC33996C8L,0xFC83C047L,18446744073709551615UL},{18446744073709551615UL,0xFC83C047L,0xC33996C8L,7UL,0xA6A349BDL}},{{18446744073709551615UL,7UL,0x10EE7DBBL,7UL,18446744073709551615UL},{0xA6A349BDL,7UL,0xC33996C8L,0xFC83C047L,18446744073709551615UL},{18446744073709551615UL,0xFC83C047L,0xC33996C8L,7UL,0xA6A349BDL},{18446744073709551615UL,7UL,0x10EE7DBBL,7UL,18446744073709551615UL},{0xA6A349BDL,7UL,0xC33996C8L,0xFC83C047L,18446744073709551615UL}},{{18446744073709551615UL,0xFC83C047L,0xC33996C8L,7UL,0xA6A349BDL},{18446744073709551615UL,7UL,0x10EE7DBBL,7UL,18446744073709551615UL},{0xA6A349BDL,7UL,0xC33996C8L,0xFC83C047L,18446744073709551615UL},{18446744073709551615UL,0xFC83C047L,0xC33996C8L,7UL,0xA6A349BDL},{18446744073709551615UL,7UL,0x10EE7DBBL,7UL,18446744073709551615UL}}};
        struct S0 l_139 = {9L,18446744073709551615UL};
        int i, j, k;
        if ((safe_add_func_int16_t_s_s((-1L), (((p_48 == g_36[0]) | (safe_unary_minus_func_uint64_t_u((safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_45.f2, 3)), 1L)), 0x76A17913L))))) < 1L))))
        { 
            int32_t l_84 = (-1L);
            if (((((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(0UL, ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(g_60, (((p_47.f0 < (safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(0x40743585L, g_31)), p_47.f0))) | p_48) , 0x739BB5F37D796E99LL))), 0xACL)) && p_46))), p_45.f0)) ^ g_41[2][1][2].f0) >= g_36[0]) <= l_84))
            { 
                return g_36[0];
            }
            else
            { 
                g_85 = g_85;
                g_85.f0 = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_61[2], 7)), 0UL));
            }
            g_85.f0 |= (safe_sub_func_int64_t_s_s((g_95 = (safe_add_func_int64_t_s_s(0x6A37A54743E03EB4LL, l_94))), (+(safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((((((0xDD559FE4L || (((l_105 = (safe_mul_func_int16_t_s_s(((-8L) || 0x8E356D6BL), 0x579BL))) ^ 0xA4B5L) || 4L)) < 0xA6L) != l_94) & l_61[2]) >= l_84), 0x069C78C3D28B7FD9LL)), g_38)) | 0xC885L), l_94)))));
            for (g_95 = 2; (g_95 >= 0); g_95 -= 1)
            { 
                uint16_t l_106 = 4UL;
                l_106--;
            }
        }
        else
        { 
            int8_t l_130[4];
            int32_t l_132[5];
            uint32_t l_133 = 0x5DB90C34L;
            int i;
            for (i = 0; i < 4; i++)
                l_130[i] = 0x1FL;
            for (i = 0; i < 5; i++)
                l_132[i] = (-1L);
            l_133 ^= (((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((l_132[0] |= (safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(0x84B6L, (g_41[2][1][2].f0 = ((safe_lshift_func_int8_t_s_s((-3L), 3)) ^ ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(1L, ((safe_rshift_func_int8_t_s_u(((((safe_unary_minus_func_int32_t_s((safe_mul_func_int8_t_s_s(l_130[2], 1L)))) || (-1L)) & l_131) , p_45.f0), 2)) == p_47.f2))), l_105)) < g_36[0]))))), p_47.f2)), 6L))), g_56.f2)), 7)) & p_47.f2) , l_94);
            if ((safe_div_func_uint32_t_u_u((g_60 = 4294967295UL), g_31)))
            { 
                ++l_136[1][4][1];
            }
            else
            { 
                struct S0 l_140 = {0xE9A70309L,0UL};
                l_140 = l_139;
            }
            return g_41[2][1][2].f0;
        }
    }
    else
    { 
        return p_46;
    }
    return l_141;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_36[i], "g_36[i]", print_hash_value);

    }
    transparent_crc(g_38, "g_38", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_41[i][j][k].f0, "g_41[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_56.f2, "g_56.f2", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_264[i], "g_264[i]", print_hash_value);

    }
    transparent_crc(g_269.f0, "g_269.f0", print_hash_value);
    transparent_crc(g_269.f1, "g_269.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
