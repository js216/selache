// SPDX-License-Identifier: MIT
// cctest_csmith_8767216d.c --- cctest case csmith_8767216d (csmith seed 2271682925)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7334c41f */

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

// Options:   -s 2271682925 -o /tmp/csmith_gen_7w73h6yl/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint8_t  f0;
   uint8_t  f1;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   uint32_t  f1;
   uint8_t  f2;
};


static int8_t g_4 = 0x7FL;
static int64_t g_27 = (-1L);
static uint16_t g_28 = 65530UL;
static int64_t g_39 = 0xDE6B786AE2AD21DDLL;
static uint8_t g_53 = 0xA3L;
static int8_t g_75 = 0x0DL;
static uint16_t g_81 = 0x0C49L;
static int32_t g_114 = 0L;
static uint32_t g_115[2] = {18446744073709551615UL,18446744073709551615UL};
static int32_t g_126 = 1L;
static uint64_t g_127 = 18446744073709551612UL;
static uint32_t g_130 = 1UL;
static struct S0 g_131 = {0x3DL,0x81L};
static int8_t g_153 = 0L;
static uint8_t g_162 = 0x9BL;
static int32_t g_164 = (-1L);
static uint64_t g_165[3][5] = {{0UL,0UL,18446744073709551615UL,18446744073709551610UL,1UL},{0x601A515F4A009C7ELL,0xCFB6E6AAC493E54ALL,0xCFB6E6AAC493E54ALL,0x601A515F4A009C7ELL,0UL},{0x601A515F4A009C7ELL,18446744073709551610UL,0UL,0UL,18446744073709551610UL}};
static int16_t g_189[3] = {0x621DL,0x621DL,0x621DL};
static uint32_t g_190 = 18446744073709551615UL;
static uint32_t g_202 = 1UL;
static const int32_t g_239 = 0x4E7AAED5L;
static uint32_t g_244 = 4294967292UL;
static uint8_t g_303 = 0x84L;



static uint64_t  func_1(void);
static int8_t  func_11(uint32_t  p_12, uint32_t  p_13, int32_t  p_14, uint64_t  p_15);
static uint8_t  func_18(uint32_t  p_19, int8_t  p_20, int16_t  p_21);
static struct S0  func_29(union U1  p_30, const uint32_t  p_31, int64_t  p_32);




static uint64_t  func_1(void)
{ 
    uint16_t l_2[4][2][1] = {{{0x42A1L},{1UL}},{{0x42A1L},{1UL}},{{0x42A1L},{1UL}},{{0x42A1L},{1UL}}};
    int32_t l_3[2][4][2] = {{{1L,0x6E6A3735L},{0xFD947597L,0xFD947597L},{0x6E6A3735L,1L},{(-10L),1L}},{{0x6E6A3735L,0xFD947597L},{0xFD947597L,0x6E6A3735L},{1L,(-10L)},{1L,0x6E6A3735L}}};
    int32_t l_315 = 0L;
    int i, j, k;
    g_4 = ((l_3[0][0][0] |= ((l_2[0][0][0] , (0xD2L >= l_2[0][0][0])) > l_2[0][1][0])) , 0x2038E85AL);
    for (g_4 = 9; (g_4 > (-24)); g_4 = safe_sub_func_int16_t_s_s(g_4, 7))
    { 
        uint32_t l_22 = 18446744073709551610UL;
        int32_t l_324 = 0x505B793AL;
        const struct S0 l_343 = {0x7CL,0x6AL};
        if ((((safe_div_func_int64_t_s_s((safe_add_func_int32_t_s_s(((g_4 , func_11(((((safe_lshift_func_uint16_t_u_u((func_18(l_22, g_4, l_3[1][0][1]) >= g_131.f1), 12)) == g_4) && g_53) , l_22), g_4, g_164, g_131.f1)) != g_4), g_189[0])), g_131.f0)) || g_114) | g_4))
        { 
            int32_t l_314 = 0x8250D688L;
            int32_t l_330[2][5][2] = {{{0xBC701F63L,0xBC701F63L},{0L,0x6B17AC64L},{0L,0xBC701F63L},{0x6B17AC64L,0xBC701F63L},{0L,0x6B17AC64L}},{{0L,0L},{0L,0x6B17AC64L},{0L,0xBC701F63L},{0x6B17AC64L,0xBC701F63L},{0L,0x6B17AC64L}}};
            int i, j, k;
            g_114 = (safe_rshift_func_uint16_t_u_s(65535UL, (safe_sub_func_int32_t_s_s(((l_3[0][0][0] ^= (g_81 && 0xC6E8326687B01C49LL)) > ((safe_rshift_func_int8_t_s_u((l_315 = (((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((l_314 >= 0x97CAL), 0)) , 0xB66617ECL), g_202)) , l_314) & g_164)), g_53)) ^ l_22)), 0x2588ED02L))));
            for (g_131.f1 = 0; (g_131.f1 <= 0); g_131.f1 += 1)
            { 
                struct S0 l_327 = {0x3BL,2UL};
                int i, j;
                if (g_165[g_131.f1][(g_131.f1 + 3)])
                    break;
                g_114 = (safe_lshift_func_int8_t_s_s(0xECL, (~(+(safe_lshift_func_uint8_t_u_u(((g_162--) & ((((((((((((g_4 , l_327) , (g_115[0] || 0UL)) < 1L) != 0L) > l_22) < 65532UL) != 0L) == g_244) || g_28) , l_330[0][0][1]) | g_115[0]) != g_39)), l_324))))));
            }
        }
        else
        { 
            int16_t l_344 = 1L;
            int32_t l_345 = 0xC4849572L;
            l_345 = (0L ^ (g_202 > (safe_mul_func_int8_t_s_s(((safe_div_func_int16_t_s_s((g_189[0] |= (safe_rshift_func_uint8_t_u_s(((safe_div_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_s((((((safe_lshift_func_int8_t_s_u(g_53, ((((l_343 , l_343.f1) ^ l_22) > l_344) > l_344))) ^ l_324) && 0x81L) == g_28) ^ l_2[0][1][0]), l_344)) < l_343.f0) , 0xD6C72585D44CC3E1LL), 0x0E55875A1236609DLL)) , g_4), g_162))), l_3[0][0][0])) | (-1L)), g_39))));
            if (l_344)
                break;
            g_114 = l_344;
        }
    }
    return g_165[2][1];
}



static int8_t  func_11(uint32_t  p_12, uint32_t  p_13, int32_t  p_14, uint64_t  p_15)
{ 
    int32_t l_209 = 0x5E52C1F7L;
    int32_t l_241 = 0x18919003L;
    int32_t l_243[4];
    int16_t l_276 = 0x32FFL;
    uint16_t l_277 = 1UL;
    uint8_t l_278 = 251UL;
    int16_t l_286 = 0xA509L;
    union U1 l_298 = {-1L};
    int i;
    for (i = 0; i < 4; i++)
        l_243[i] = (-8L);
    for (p_15 = 0; (p_15 <= 2); p_15 += 1)
    { 
        int16_t l_207 = 0L;
        int32_t l_208 = 0L;
        int32_t l_216 = 0L;
        g_190++;
        p_14 = (safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int16_t_s_u(p_12, ((l_209 = (((((p_12 & (((l_207 = (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((((--g_202) >= (safe_mul_func_int16_t_s_s((-1L), p_14))) > 0xE97E82FD2184012FLL), g_39)), 2)), g_115[0]))) ^ 0x3FFEL) != l_208)) ^ l_209) , 0xBFEF2B36L) , p_12) >= 1UL)) , 65531UL))) || 0UL)));
        for (g_202 = 0; (g_202 <= 2); g_202 += 1)
        { 
            int32_t l_217 = 0xB43409B3L;
            int i, j;
            l_217 = ((safe_mul_func_int8_t_s_s((g_165[p_15][g_202] & 18446744073709551610UL), (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_131.f0, (l_216 = (g_81 = (l_208 &= 0x5B45L))))), 0xA9L)))) != p_14);
        }
        for (g_27 = 0; (g_27 <= 2); g_27 += 1)
        { 
            uint8_t l_220[1];
            int32_t l_221 = 0L;
            uint64_t l_222 = 0xF6BAA5DA81958DDELL;
            int i;
            for (i = 0; i < 1; i++)
                l_220[i] = 0xC1L;
            p_14 = (((safe_add_func_uint32_t_u_u(0xE72B2699L, ((l_220[0] = p_15) , (((l_221 = (((l_216 |= (-9L)) ^ l_220[0]) , g_27)) <= 0x8CL) , l_222)))) <= 0xDDL) || l_209);
            for (l_208 = 0; (l_208 <= 2); l_208 += 1)
            { 
                if (g_127)
                    break;
            }
        }
    }
    if ((safe_add_func_int8_t_s_s((+((safe_rshift_func_int8_t_s_s(g_4, 2)) & g_162)), l_209)))
    { 
        int8_t l_236 = 0xB8L;
        int32_t l_242 = 5L;
        for (p_12 = (-2); (p_12 <= 40); p_12 = safe_add_func_int32_t_s_s(p_12, 9))
        { 
            int64_t l_240 = 0xEB048B0955FA615ALL;
            for (g_27 = (-25); (g_27 > 9); g_27++)
            { 
                p_14 &= (0x3CL < ((safe_sub_func_int32_t_s_s((-1L), (((l_236 = 3UL) ^ (safe_mul_func_int8_t_s_s((l_240 = (g_239 , 1L)), p_12))) ^ 0xB5L))) <= g_165[2][1]));
            }
        }
        --g_244;
        for (g_131.f1 = (-30); (g_131.f1 >= 21); ++g_131.f1)
        { 
            return g_28;
        }
    }
    else
    { 
        int32_t l_257 = 0x6AF559A8L;
        if ((safe_mod_func_uint64_t_u_u(l_241, (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(0UL, 8)) , (p_12 &= l_257)), (l_257 , 0x99347C11L))), g_131.f0)))))
        { 
            const int64_t l_265[5] = {0x07463A8961DA0AB2LL,0x07463A8961DA0AB2LL,0x07463A8961DA0AB2LL,0x07463A8961DA0AB2LL,0x07463A8961DA0AB2LL};
            int32_t l_280 = 6L;
            int8_t l_283 = 0L;
            uint16_t l_285 = 0xB24AL;
            int i;
            g_114 = 0xDD746744L;
            for (g_190 = 0; (g_190 < 42); g_190 = safe_add_func_int16_t_s_s(g_190, 9))
            { 
                int16_t l_279 = 0L;
                uint32_t l_284 = 6UL;
                l_280 = (!(safe_sub_func_int64_t_s_s((safe_add_func_uint32_t_u_u(l_265[0], (safe_lshift_func_uint8_t_u_s((l_243[1] &= ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((((safe_div_func_int16_t_s_s((p_13 < ((l_276 >= (l_277 , g_131.f0)) , (-7L))), p_14)) == l_265[0]) || g_189[2]) == g_114), g_53)), l_265[2])), l_278)) | l_279)), g_127)))), p_12)));
                p_14 ^= (l_286 = (safe_mul_func_uint16_t_u_u(((l_257 & g_127) , p_13), ((l_283 <= l_284) > l_285))));
                return g_75;
            }
        }
        else
        { 
            l_209 = (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int64_t_s(0x001BF60BB935E295LL)), 1));
        }
        g_303 = (!((!(safe_div_func_int32_t_s_s(l_286, (p_14 = (safe_unary_minus_func_int16_t_s((!((safe_mod_func_uint64_t_u_u(g_28, ((func_29(l_298, ((g_162--) < (((safe_mod_func_int64_t_s_s(p_12, l_276)) <= l_241) && 0x03FBL)), l_286) , 0x9B9EL) , p_12))) >= p_15)))))))) , g_130));
    }
    return p_13;
}



static uint8_t  func_18(uint32_t  p_19, int8_t  p_20, int16_t  p_21)
{ 
    uint32_t l_25[2];
    union U1 l_33 = {0x19909D07L};
    const struct S0 l_36 = {0UL,0x50L};
    int32_t l_132 = 0x84ADD174L;
    uint32_t l_188 = 0x177F500FL;
    int i;
    for (i = 0; i < 2; i++)
        l_25[i] = 5UL;
    for (p_20 = (-22); (p_20 >= 29); p_20 = safe_add_func_int8_t_s_s(p_20, 6))
    { 
        struct S0 l_142 = {0xE0L,0UL};
        int32_t l_159 = 0xA51855DDL;
        union U1 l_163 = {0x50C123E8L};
        if (l_25[1])
        { 
            int8_t l_26 = (-1L);
            if (l_26)
            { 
                g_27 |= l_26;
                g_28 ^= 0x1DD79339L;
            }
            else
            { 
                l_132 ^= (func_29(l_33, g_27, (safe_div_func_uint8_t_u_u((l_36 , (safe_mul_func_uint16_t_u_u(0xD0FEL, g_27))), l_26))) , p_20);
            }
            if ((safe_sub_func_int16_t_s_s((g_153 = ((safe_mod_func_int64_t_s_s(((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((!g_126) ^ ((l_142 , (safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((18446744073709551615UL >= (g_127--)) != g_126), g_27)), 4)) >= l_36.f0), p_21)), 65531UL))) | p_19)) != g_28), 5)), 0x4C7A4504L)) && 0x8CL), g_53)) || l_36.f1)), 7UL)))
            { 
                uint16_t l_154 = 0xE2EAL;
                g_114 ^= l_154;
                l_132 = ((safe_add_func_uint64_t_u_u((l_159 = (safe_mul_func_uint8_t_u_u(g_131.f1, 0x8FL))), g_4)) <= (((safe_mul_func_uint8_t_u_u((p_19 , p_20), 0x53L)) & g_127) , g_81));
            }
            else
            { 
                g_162 = (g_114 = g_27);
            }
        }
        else
        { 
            if (((l_163 = l_33) , p_21))
            { 
                if (g_114)
                    break;
            }
            else
            { 
                ++g_165[2][1];
                l_33.f0 = 1L;
                l_159 = (safe_add_func_int64_t_s_s((~(((1L & 0x86691D7FL) < 0xCF914606L) == (!((safe_mod_func_int8_t_s_s((((l_25[1] == p_19) >= l_163.f2) , (-1L)), 0xAEL)) < 248UL)))), g_53));
            }
        }
    }
    for (g_126 = 10; (g_126 >= (-18)); g_126--)
    { 
        int32_t l_185 = 0xC513462EL;
        l_185 &= (safe_lshift_func_uint16_t_u_u((!(safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((((g_4 , (l_36 , 255UL)) ^ g_164) , g_114) | l_132), 2)), p_20))), 0));
    }
    l_132 = ((l_33.f0 = (safe_mod_func_int8_t_s_s(1L, g_153))) , g_131.f0);
    return l_188;
}



static struct S0  func_29(union U1  p_30, const uint32_t  p_31, int64_t  p_32)
{ 
    int32_t l_46 = (-1L);
    const struct S0 l_52 = {1UL,0x99L};
    int8_t l_72 = (-7L);
    int8_t l_94 = 0xDEL;
    int32_t l_128 = 0xDD96C0B5L;
    g_39 = p_30.f1;
    for (g_27 = 0; (g_27 <= (-10)); --g_27)
    { 
        uint32_t l_49 = 0x785B8EEBL;
        p_30.f0 = ((safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u((0xAEC7L == l_46), (((l_46 & ((safe_rshift_func_int8_t_s_u(((0L > 0UL) , g_39), 6)) | g_39)) && 0x15EAL) & l_46))), p_31)) == l_49);
    }
    if (((safe_sub_func_int64_t_s_s(g_27, (p_32 &= g_27))) && (l_52 , (g_53 , 7L))))
    { 
        uint32_t l_54 = 1UL;
        uint32_t l_59[4][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,0xDC071782L,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
        int32_t l_73 = (-9L);
        int32_t l_74 = 0x1BF9D45AL;
        int i, j;
        g_75 &= (l_54 <= ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u(l_59[2][0], (g_53 = g_4))) > (safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_74 &= (l_73 = (safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(6L, 0xD2A5L)) & 0x264A48C5L), 0x9C83L)), g_39)) , l_72), g_27)))), l_59[2][0])), g_39))), l_54)) , l_52.f1));
    }
    else
    { 
        uint32_t l_99[5];
        int32_t l_104 = 6L;
        int i;
        for (i = 0; i < 5; i++)
            l_99[i] = 0UL;
        g_81 ^= (safe_unary_minus_func_int16_t_s(((((safe_add_func_int8_t_s_s((g_39 != ((safe_mul_func_int8_t_s_s(((l_72 >= g_39) >= g_75), g_75)) != g_75)), g_75)) , 0L) | 0xC487E88E1234CD27LL) & g_28)));
        if ((safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((g_53 = (5L == (l_94 = (safe_lshift_func_uint8_t_u_s(255UL, 4))))), ((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((--l_99[1]), (safe_mul_func_uint16_t_u_u(l_104, g_39)))), g_75)) && g_27))), p_30.f0)), g_27)) >= l_104) >= 1UL), p_30.f0)) , 4294967295UL) < l_104), 0UL)))
        { 
            int64_t l_113 = 0x00A4979765BC9E73LL;
            int32_t l_129[2][3];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_129[i][j] = 1L;
            }
            p_30.f0 = ((safe_rshift_func_int8_t_s_u(((((g_130 &= ((safe_rshift_func_int16_t_s_s(((l_129[1][2] &= (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(p_30.f0, ((l_128 |= (g_127 = (g_27 >= ((((g_126 = (((l_104 = (((g_115[0]++) , ((g_114 &= g_75) == (safe_mod_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s(((g_39 |= (safe_lshift_func_uint16_t_u_s(0xDB7DL, p_30.f0))) < l_72), l_52.f1)) & g_4) == (-1L)), g_27)) == l_72) , 1L) || l_113), g_115[0])))) == l_113)) || 0UL) , g_115[0])) ^ 1L) && l_52.f1) && g_115[0])))) & l_52.f1))), p_30.f0))) & l_46), 15)) , 0x524304B69D3DDFACLL)) && 0xB3DAD6103D800CEELL) & 0x8CC77C05L) ^ 65533UL), g_81)) < 0xD2L);
        }
        else
        { 
            return g_131;
        }
    }
    return l_52;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_115[i], "g_115[i]", print_hash_value);

    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_131.f0, "g_131.f0", print_hash_value);
    transparent_crc(g_131.f1, "g_131.f1", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_165[i][j], "g_165[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_189[i], "g_189[i]", print_hash_value);

    }
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
